/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 15:02:15 by gshekari          #+#    #+#             */
/*   Updated: 2026/05/29 22:08:05 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal("Dog")
{
	std::cout << "A " << type << " created" << std::endl;
}
Dog::Dog(const Dog &obj):Animal(obj)
{
	std::cout << "Dog Copy constructor called" << std::endl;
}
Dog &Dog::operator=(const Dog &obj)
{
	if(this != &obj)
		this->type = obj.type;
	std::cout << "Dog Copy assignment operator called" << std::endl;
	return *this;
}
Dog::~Dog()
{
	std::cout << type << " destroyed" << std::endl;
}
void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}
