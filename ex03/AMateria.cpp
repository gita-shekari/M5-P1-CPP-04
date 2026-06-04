/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 19:16:44 by gshekari          #+#    #+#             */
/*   Updated: 2026/06/04 15:45:19 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type): type(type)
{
	std::cout << "Default Costructor of AMateria is called" << std::endl;
}
AMateria::AMateria(const AMateria &other) : type(other.type)
{
	std::cout << "Copy Costructor of AMateria is called" << std::endl;
}
AMateria &AMateria::operator=(const AMateria &other)
{
	if(this != &other)
		this->type = other.type;
	std::cout << "Copy assignment operator of AMateria is called" << std::endl;
	return *this;
}
AMateria::~AMateria()
{
	std::cout << "Destructor of AMateria is called" << std::endl;
}
std::string const &AMateria::getType() const
{
	return type;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}
