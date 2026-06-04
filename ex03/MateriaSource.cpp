/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 19:49:16 by gshekari          #+#    #+#             */
/*   Updated: 2026/06/04 16:22:52 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		source[i] = 0;
	std::cout << "Materia Source created with 0 Materia" << std::endl;
}
MateriaSource::MateriaSource(const MateriaSource &other)
{
	for (int i = 0; i < 4; i++)
	{
		if (other.source[i])
			source[i] = other.source[i]->clone();
		else
			source[i] = 0;
	}
	std::cout << "Materia Source copied" << std::endl;
}
MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	if(this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (other.source[i])
				source[i] = other.source[i]->clone();
			else
				source[i] = 0;
		}
	}
	std::cout << "Materia Source assigned" << std::endl;
	return *this;
}
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		delete source[i];
		source[i] = 0;
	}
	std::cout << "Materia source destroyed" << std::endl;
}
void MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
		return;
	for (int i = 0; i < 4; i++)
	{
		if (source[i] == 0)
		{
			source[i] = m->clone();
			return;
		}
	}
}
AMateria* MateriaSource::createMateria(std::string const &type)
{
	for(int i = 0; i < 4; i++)
	{
		 if (source[i] && source[i]->getType() == type)
			return source[i]->clone();
	}
	return 0;
}
