/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 15:02:15 by gshekari          #+#    #+#             */
/*   Updated: 2026/06/04 20:08:34 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), brain(new Brain())
{
	std::cout << "A " << type << " created" << std::endl;
}
Dog::Dog(const Dog &other):Animal(other)
{
	brain = new Brain(*other.brain);
	std::cout << "Dog Copy constructor called" << std::endl;
}
Dog &Dog::operator=(const Dog &other)
{
	if(this != &other)
	{
		Animal::operator=(other);
		delete brain;
		brain = new Brain(*other.brain);
	}
	std::cout << "Dog Copy assignment operator called" << std::endl;
	return *this;
}
Dog::~Dog()
{
	delete brain;
	std::cout << type << " destroyed" << std::endl;
}
void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}

Brain* Dog::getBrain() const
{
	return brain;
}
