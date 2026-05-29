/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 17:48:00 by gshekari          #+#    #+#             */
/*   Updated: 2026/05/29 17:48:03 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("default")
{
	std::cout << "WrongAnimal " << type << " created" << std::endl;
}
WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << "WrongAnimal " << type << " created" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type)
{
	std::cout << "Copy constructor called" << std::endl;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if(this != &other)
		this->type = other.type;
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal " << type << " destroyed" << std::endl;
}
std::string WrongAnimal::getType() const
{
	return type;
}
void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal Sound!" << std::endl;
}
