/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:06:39 by mkadri            #+#    #+#             */
/*   Updated: 2024/10/21 14:25:59 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << "Zombie " << this->_name << " has been created" << std::endl;
}

Zombie::Zombie(void)
{
    this->_name = "(null)";
    std::cout << "Zombie " << this->_name << " has been created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->_name << " has been destroyed" << std::endl;
}


void    Zombie::announce(void)
{
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
void    Zombie::setName(std::string name)
{
    this->_name = name;
}