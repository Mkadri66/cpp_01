/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:01:42 by mkadri            #+#    #+#             */
/*   Updated: 2024/10/21 14:36:53 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie *zombieHorde(int n, std::string);

int main()
{
    int n;

    n = 15;
    Zombie *horde = zombieHorde(n, "Rick");
    for (int i = 0; i < n; i++)
    {
        horde[i].announce();
    }
    delete [] horde;
}