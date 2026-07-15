/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 20:57:54 by gshekari          #+#    #+#             */
/*   Updated: 2026/07/15 18:49:49 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("Default")
{
	for (int i = 0; i < 4; i++)
		inventory[i] = 0;
	std::cout << name << " created with 0 Materia" << std::endl;
}
Character::Character(const std::string& name) : name(name)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = 0;
	std::cout << name << " created" << " with 0 Materia" << std::endl;
}
Character::Character(const Character& other) : name(other.name)
{
	for (int i = 0; i < 4; i++)
	{
		if (other.inventory[i])
			inventory[i] = other.inventory[i]->clone();
		else
			inventory[i] = 0;
	}
	std::cout << name << " copied" << std::endl;
}
Character &Character::operator=(const Character& other)
{
	if(this != &other)
	{
		this->name = other.name;
		for (int i = 0; i < 4; i++)
		{
			if (other.inventory[i])
				inventory[i] = other.inventory[i]->clone();
			else
				inventory[i] = 0;
		}
	}
	std::cout << name << " assigned" << std::endl;
	return *this;
}
Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		delete inventory[i];
		inventory[i] = 0;
	}
	std::cout << name << " destroyed" << std::endl;
}
std::string const &Character::getName() const
{
	return name;
}
void Character::equip(AMateria* m)
{
	 if (!m)
		return;
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] == 0)
		{
			inventory[i] = m;
			std::cout << name << " equiped with " << inventory[i]->getType() << std::endl;
			return;
		}
	}
}
void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		inventory[idx] = 0;
	std::cout << name << " unequiped "<< std::endl;
}
void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && inventory[idx])
		inventory[idx]->use(target);
}
