/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 15:07:40 by gshekari          #+#    #+#             */
/*   Updated: 2026/05/29 22:20:12 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), brain(new Brain())
{
	std::cout << "A " << type << " created" << std::endl;
}
Cat::Cat(const Cat &other):Animal(other)
{
	brain = new Brain(*other.brain);
	std::cout << "Cat Copy constructor called" << std::endl;
}
Cat &Cat::operator=(const Cat &other)
{
	if(this != &other)
	{
		Animal::operator=(other);
		*brain = *other.brain;
	}
	std::cout << "Cat Copy assignment operator called" << std::endl;
	return *this;
}
Cat::~Cat()
{
	delete brain;
	std::cout << type << " destroyed" << std::endl;
}
void Cat::makeSound() const
{
	std::cout << "Meaw!" << std::endl;
}
