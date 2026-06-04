/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 14:54:51 by gshekari          #+#    #+#             */
/*   Updated: 2026/06/04 19:41:41 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const int size = 10;
	Animal* animals[size];

	std::cout << "\n=== Creating Animals ===\n" << std::endl;

	for (int i = 0; i < size / 2; i++)
		animals[i] = new Dog();

	for (int i = size / 2; i < size; i++)
		animals[i] = new Cat();

	std::cout << "\n=== Deleting Animals ===\n" << std::endl;

	for (int i = 0; i < size; i++)
		delete animals[i];

	// ==========================================================
	// COPY CONSTRUCTOR TEST
	// ==========================================================

	std::cout << "\n=== Dog Copy Constructor Test ===\n" << std::endl;

	Dog* dog1 = new Dog();

	dog1->getBrain()->setIdea(0, "Bone");
	dog1->getBrain()->setIdea(1, "Walk");

	Dog* dog2 = new Dog(*dog1); // Copy constructor

	std::cout << "Brain addresses before modification:" << std::endl;
	std::cout << "dog1 brain: " << dog1->getBrain() << std::endl;
	std::cout << "dog2 brain: " << dog2->getBrain() << std::endl;

	dog2->getBrain()->setIdea(0, "Steak");

	std::cout << "\nIdeas after modifying dog2:" << std::endl;
	std::cout << "dog1 idea[0]: "
			  << dog1->getBrain()->getIdea(0) << std::endl;
	std::cout << "dog2 idea[0]: "
			  << dog2->getBrain()->getIdea(0) << std::endl;

	delete dog1;
	delete dog2;

	// ==========================================================
	// ASSIGNMENT OPERATOR TEST
	// ==========================================================

	std::cout << "\n=== Cat Assignment Operator Test ===\n" << std::endl;

	Cat* cat1 = new Cat();
	Cat* cat2 = new Cat();

	cat1->getBrain()->setIdea(0, "Mouse");
	cat1->getBrain()->setIdea(1, "Bird");

	std::cout << "Brain addresses before assignment:" << std::endl;
	std::cout << "cat1 brain: " << cat1->getBrain() << std::endl;
	std::cout << "cat2 brain: " << cat2->getBrain() << std::endl;

	*cat2 = *cat1; // Assignment operator

	std::cout << "\nBrain addresses after assignment:" << std::endl;
	std::cout << "cat1 brain: " << cat1->getBrain() << std::endl;
	std::cout << "cat2 brain: " << cat2->getBrain() << std::endl;

	cat2->getBrain()->setIdea(0, "Sleep");

	std::cout << "\nIdeas after modifying cat2:" << std::endl;
	std::cout << "cat1 idea[0]: "
			  << cat1->getBrain()->getIdea(0) << std::endl;
	std::cout << "cat2 idea[0]: "
			  << cat2->getBrain()->getIdea(0) << std::endl;

	// ==========================================================
	// SELF ASSIGNMENT TEST
	// ==========================================================

	std::cout << "\n=== Self Assignment Test ===\n" << std::endl;

	cat1->getBrain()->setIdea(2, "Fish");

	*cat1 = *cat1;

	std::cout << "cat1 idea[2] after self assignment: "
			  << cat1->getBrain()->getIdea(2)
			  << std::endl;

	delete cat1;
	delete cat2;

	std::cout << "\n=== End of Tests ===\n" << std::endl;

	return 0;
}
