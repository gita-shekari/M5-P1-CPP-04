/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 19:49:02 by gshekari          #+#    #+#             */
/*   Updated: 2026/07/15 18:52:20 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	 std::cout << "\n========== [ CREATE MATERIA SOURCE ] ==========\n";
	IMateriaSource* src = new MateriaSource();

	std::cout << "\n========== [ LEARN MATERIA ] ==========\n";
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	std::cout << "\n========== [ CREATE CHARACTER ME ] ==========\n";
	ICharacter* me = new Character("me");

	std::cout << "\n========== [ CREATE AND EQUIP MATERIA ] ==========\n";

	AMateria *ice = src->createMateria("ice");
	AMateria *cure = src->createMateria("cure");
	me->equip(ice);
	me->equip(cure);

	std::cout << "\n========== [ CREATE TARGET BOB ] ==========\n";

	ICharacter* bob = new Character("bob");
	bob->equip(src->createMateria("ice"));

	std::cout << "\n========== [ USE MATERIA ] ==========\n";

	me->use(0, *bob);
	me->use(1, *bob);
	me->unequip(1);

	std::cout << "\n========== [ CLEANUP ] ==========\n";
	delete bob;
	delete me;
	delete src;
	delete cure;

	return 0;
}
