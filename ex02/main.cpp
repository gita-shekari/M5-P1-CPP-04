/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 14:54:51 by gshekari          #+#    #+#             */
/*   Updated: 2026/06/02 20:32:23 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	//Animal a;
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

	std::cout << "\n=== Copy Constructor Test ===\n" << std::endl;

	Dog dog1;
	dog1.getBrain()->setIdea(0, "Bone");

	Dog dog2(dog1);

	dog2.getBrain()->setIdea(0, "Steak");

	std::cout << "dog1: "
			  << dog1.getBrain()->getIdea(0)
			  << std::endl;

	std::cout << "dog2: "
			  << dog2.getBrain()->getIdea(0)
			  << std::endl;

	std::cout << "\n=== Assignment Operator Test ===\n" << std::endl;

	Cat cat1;
	Cat cat2;

	cat1.getBrain()->setIdea(0, "Mouse");

	cat2 = cat1;

	cat2.getBrain()->setIdea(0, "Sleep");

	std::cout << "cat1: "
			  << cat1.getBrain()->getIdea(0)
			  << std::endl;

	std::cout << "cat2: "
			  << cat2.getBrain()->getIdea(0)
			  << std::endl;

	return 0;
}
