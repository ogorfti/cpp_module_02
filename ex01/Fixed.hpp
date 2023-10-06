/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:25:45 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/06 12:21:53 by ogorfti          ###   ########.fr       */
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
		~Fixed();
};

std::ostream& operator<<(std::ostream& os, const Fixed& x);

#endif