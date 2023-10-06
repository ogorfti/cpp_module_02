/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:25:48 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/06 21:46:59 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	// Fixed a(10.05f);
	Fixed b;
	Fixed a;

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	// std::cout << b << std::endl;
	std::cout << b << std::endl;
	std::cout << b++ << std::endl;
	
	// std::cout << a * b << std::endl;
	// std::cout << a + b << std::endl;
	// std::cout << a - b << std::endl;
	// std::cout << a / b << std::endl;

	// float epsilon = ...;
	// std::cout << a.toInt() << std::endl;
	// if (a == b)
	// 	std::cout << "true\n";
	// else
	// 	std::cout << "false\n";
}
