/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 15:07:40 by gshekari          #+#    #+#             */
/*   Updated: 2026/05/29 22:07:44 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "A " << type << " created" << std::endl;
}
Cat::Cat(const Cat &obj):Animal(obj)
{
	std::cout << "Dog Copy constructor called" << std::endl;
}
Cat &Cat::operator=(const Cat &obj)
{
	if(this != &obj)
		this->type = obj.type;
	std::cout << "Cat Copy assignment operator called" << std::endl;
	return *this;
}
Cat::~Cat()
{
	std::cout << type << " destroyed" << std::endl;
}
void Cat::makeSound() const
{
	std::cout << "Meaw!" << std::endl;
}
