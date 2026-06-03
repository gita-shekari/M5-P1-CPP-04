/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 20:57:50 by gshekari          #+#    #+#             */
/*   Updated: 2026/06/03 21:22:36 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMTERIA_HPP
#define AMTERIA_HPP

#include <iostream>
#include <ICharacter.hpp>
#include <AMateria.hpp>

class Character : public ICharacter
{
	private:
		std::string _name;
		AMateria* _inventory[4];
	public:
		Character();
		Character(const std::string& name);
		Character(const Character& other);
		Character& operator=(const Character& other);
		~Character();
		std::string const& getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};
#endif
