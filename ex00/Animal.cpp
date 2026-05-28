/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 14:32:32 by gshekari          #+#    #+#             */
/*   Updated: 2026/05/28 14:46:34 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("default")
{
	std::cout << "Animal " << type << " created" << std::endl;
}
Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal " << type << " created" << std::endl;
}
Animal::Animal(const Animal &other) : type(other.type)
{
	std::cout << "Copy constructor called" << std::endl;
}
Animal &Animal::operator=(const Animal &other)
{
	if(this != &other)
		this->type = other.type;
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}
Animal::~Animal()
{
	std::cout << "Animal " << type << " destroyed" << std::endl;
}
