/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:29:53 by mkadri            #+#    #+#             */
/*   Updated: 2024/10/22 19:59:52 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(std::string type) : _type(type){}

Weapon::~Weapon(void){}

void    Weapon::setType(std::string type)
{
    this->_type = type;
}

std::string    Weapon::getType(void) const
{
    return (this->_type);
}