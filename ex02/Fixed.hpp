/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:25:45 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/07 11:32:52 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int	fixed;
		static const int bits = 8;
	public:
		Fixed();
		Fixed(const int ival);
		Fixed(const float fval);
		Fixed (const Fixed& other);
		Fixed& operator=(const Fixed& x);
		float toFloat( void ) const;
		int toInt( void ) const;
		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);
		static Fixed& min(Fixed& left, Fixed& right) ;
		static Fixed& max(Fixed& left, Fixed& right) ;
		static const Fixed  max(const Fixed& left, const Fixed& right);
		static const Fixed min(const Fixed& left, const Fixed& right);
		~Fixed();
};

std::ostream& operator<<(std::ostream& os, const Fixed& x);

bool operator<(Fixed left, Fixed right);
bool operator>(Fixed left, Fixed right);
bool operator<=(Fixed left, Fixed right);
bool operator>=(Fixed left, Fixed right);
bool operator==(Fixed left, Fixed right);
bool operator!=(Fixed left, Fixed right);

float operator+(Fixed left, Fixed right);
float operator-(Fixed left, Fixed right);
float operator*(Fixed left, Fixed right);
float operator/(Fixed left, Fixed right);

#endif