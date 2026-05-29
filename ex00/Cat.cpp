/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 15:07:40 by gshekari          #+#    #+#             */
/*   Updated: 2026/05/29 16:50:03 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
}
Cat::Cat(const Cat &obj):Animal(obj.type)
{
}
Cat &Cat::operator=(const Cat &obj)
{
	if(this != &obj)
		this->type = obj.type;
	return *this;
}
Cat::~Cat()
{

}
void Cat::makeSound() const
{
	std::cout << "Meaw!" << std::endl;
}
