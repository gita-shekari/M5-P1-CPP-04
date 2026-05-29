/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 17:48:42 by gshekari          #+#    #+#             */
/*   Updated: 2026/05/29 20:20:47 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "A " << type << " created" << std::endl;
}
WrongCat::WrongCat(const WrongCat &obj):WrongAnimal(obj.type)
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
}
WrongCat &WrongCat::operator=(const WrongCat &obj)
{
	if(this != &obj)
		this->type = obj.type;
	std::cout << "WrongCat Copy assignment operator called" << std::endl;
	return *this;
}
WrongCat::~WrongCat()
{
	std::cout  << type << " destroyed" << std::endl;
}
void WrongCat::makeSound() const
{
	std::cout << "Meaw!" << std::endl;
}
