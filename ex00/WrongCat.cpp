/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 17:48:42 by gshekari          #+#    #+#             */
/*   Updated: 2026/05/29 17:48:43 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
}
WrongCat::WrongCat(const WrongCat &obj):WrongAnimal(obj.type)
{
}
WrongCat &WrongCat::operator=(const WrongCat &obj)
{
	if(this != &obj)
		this->type = obj.type;
	return *this;
}
WrongCat::~WrongCat()
{

}
void WrongCat::makeSound() const
{
	std::cout << "Meaw!" << std::endl;
}
