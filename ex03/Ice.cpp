/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 19:40:11 by gshekari          #+#    #+#             */
/*   Updated: 2026/06/03 21:11:45 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "An object of Ice is created" << std::endl;
}
Ice::Ice(const Ice& other) : AMateria(other)
{
	std::cout << "An object of Ice is copied" << std::endl;
}
Ice &Ice::operator=(const Ice &other)
{
	if(this != &other)
		AMateria::operator=(other);
	std::cout << "Assignment operator of Ice is called" << std::endl;
	return *this;
}
Ice::~Ice()
{
	std::cout << "Destructor of Ice is called" << std::endl;
}

AMateria* Ice::clone() const
{
	std::cout << "An object of AMateria with type Ice is cloned" << std::endl;
	return (new Ice(*this));
}
void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

