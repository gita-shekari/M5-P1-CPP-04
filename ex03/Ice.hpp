/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 19:37:31 by gshekari          #+#    #+#             */
/*   Updated: 2026/06/03 19:57:16 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <AMateria.hpp>

class Ice : public AMateria
{
	public:
		Ice(std::string const &type);
		Ice(const Ice &other);
		Ice &operator=(const Ice &other);
		~Ice();
		Ice* clone() const ;
};

#endif
