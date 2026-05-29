/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 15:02:15 by gshekari          #+#    #+#             */
/*   Updated: 2026/05/29 17:51:39 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal("Dog")
{

}
Dog::Dog(const Dog &obj):Animal(obj.type)
{
}
Dog &Dog::operator=(const Dog &obj)
{
	if(this != &obj)
		this->type = obj.type;
	return *this;
}
Dog::~Dog()
{

}
void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}
