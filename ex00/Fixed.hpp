/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:33:03 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/02 12:54:45 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int	fixed;
		static const int bits = 8;
	public:
		Fixed(){}
		Fixed (const Fixed& copy){}
		~Fixed(){}
};

#endif