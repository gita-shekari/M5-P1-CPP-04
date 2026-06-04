/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 14:54:51 by gshekari          #+#    #+#             */
/*   Updated: 2026/06/04 20:07:40 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
	std::cout << "\n=== Abstract class test ===\n" << std::endl;
	// Animal a;
	std::cout << "\n=== Polymorphism test ===\n" << std::endl;

	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << "\n--- makeSound() ---\n" << std::endl;

	dog->makeSound();
	cat->makeSound();
	
	std::cout << "\n--- Deleting single objects ---\n" << std::endl;

	delete dog;
	delete cat;

	std::cout << "\n=== Array of Animals test ===\n" << std::endl;

	const int size = 6;
	Animal* animals[size];

	for (int i = 0; i < size; i++)
	{
		if (i < size / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	std::cout << "\n--- makeSound loop ---\n" << std::endl;

	for (int i = 0; i < size; i++)
		animals[i]->makeSound();

	std::cout << "\n--- Deleting array ---\n" << std::endl;

	for (int i = 0; i < size; i++)
		delete animals[i];

	std::cout << "\n=== End of test ===\n" << std::endl;

	return 0;
}
