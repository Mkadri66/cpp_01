/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 19:26:42 by mkadri            #+#    #+#             */
/*   Updated: 2024/11/08 13:06:29 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
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