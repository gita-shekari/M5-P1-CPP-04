/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 19:48:45 by gshekari          #+#    #+#             */
/*   Updated: 2026/06/03 20:50:16 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "An object of Cure is created" << std::endl;
}
Cure::Cure(const Cure& other) : AMateria(other)
{
	std::cout << "An object of Cure is copied" << std::endl;
}
Cure &Cure::operator=(const Cure &other)
{
	if(this != &other)
		AMateria::operator=(other);
	std::cout << "Assignment operator of Cure is called" << std::endl;
	return *this;
}
Cure::~Cure()
{
	std::cout << "Destructor of Cure is called" << std::endl;
}

AMateria* Cure::clone() const
{
	std::cout << "An object of AMateria with type cure is cloned" << std::endl;
	return (new Cure(*this));
}
void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
