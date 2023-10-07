/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:25:43 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/07 11:30:20 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*------------- Orthodox --------------*/

Fixed::Fixed()
{
	this->fixed = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed (const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& x)
{
	if (this != &x)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		this->fixed = x.fixed;
	}
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::toInt( void ) const
{
	return (this->fixed >> this->bits);
}

float Fixed::toFloat( void ) const
{
    return (float(this->fixed) / 256);
}

Fixed::Fixed(const int ival)
{
	this->fixed = ival << this->bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float fval)
{
	this->fixed = roundf(fval * 256);
	std::cout << "Float constructor called" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Fixed& x)
{
	os << x.toFloat();
	return (os);
}

bool operator<(Fixed left, Fixed right)
{
	return (left.toFloat() < right.toFloat());
}

/*------------- Operators --------------*/

bool operator>(Fixed left, Fixed right)
{
	return (left.toFloat() > right.toFloat());
}

bool operator>=(Fixed left, Fixed right)
{
	return (left.toFloat() >= right.toFloat());
}

bool operator<=(Fixed left, Fixed right)
{
	return (left.toFloat() <= right.toFloat());
}

bool operator==(Fixed left, Fixed right)
{
	return (left.toFloat() == right.toFloat());
}

bool operator!=(Fixed left, Fixed right)
{
	return (left.toFloat() != right.toFloat());
}

float operator*(Fixed left, Fixed right)
{
	return (left.toFloat() * right.toFloat());
}

float operator+(Fixed left, Fixed right)
{
	return (left.toFloat() + right.toFloat());
}

float operator-(Fixed left, Fixed right)
{
	return (left.toFloat() - right.toFloat());
}

float operator/(Fixed left, Fixed right)
{
	return (left.toFloat() / right.toFloat());
}

/*------------- Increment/Decrement --------------*/

Fixed& Fixed::operator++()
{
	this->fixed += 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	++(*this);
	return (tmp);
}

Fixed& Fixed::operator--()
{
	this->fixed -= 1;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	--(*this);
	return (tmp);
}

/*------------- Static member functions --------------*/

Fixed& Fixed::min(Fixed& left, Fixed& right) 
{
	return (left < right) ? left : right;
}

Fixed& Fixed::max(Fixed& left, Fixed& right) 
{
	return (left > right) ? left : right;
}

Fixed const Fixed::max(const Fixed& left, const Fixed& right)
{
	return (left.toFloat() > right.toFloat()) ? left : right;
}

Fixed const Fixed::min(const Fixed& left, const Fixed& right)
{
	return (left.toFloat() < right.toFloat()) ? left : right;
}
