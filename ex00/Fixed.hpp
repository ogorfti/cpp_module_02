/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:33:03 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/04 19:53:18 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

// ClassName& operator=(const ClassName& x);
class Fixed
{
	private:
		int	fixed;
		static const int bits = 8;
	public:
		Fixed();
		Fixed (const Fixed& other);
		Fixed& operator=(const Fixed& x);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		~Fixed();
};

#endif