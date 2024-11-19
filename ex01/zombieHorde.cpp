/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:02:16 by mkadri            #+#    #+#             */
/*   Updated: 2024/11/08 13:04:39 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde(int n, std::string name)
{
    Zombie *horde = new Zombie[n];
    for (int i = 0; i < n; i++)
    {
        horde[i].setName(name);
    }
    return (horde);
}