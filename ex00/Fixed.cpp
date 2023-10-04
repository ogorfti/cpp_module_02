/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:37:39 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/04 12:10:51 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Parent
{
	public:
		virtual void show()
		{
			std::cout << "This is parent" << std::endl;
		}
};

class Child : public Parent
{
	public:
		void show()
		{
			std::cout << "This is child" << std::endl;
		}
};

int main()
{
	
	Parent parent;
	Child child;
	Parent *base;

	base = &parent;
	base->show();
	
	base = &child;
	base->show();
}