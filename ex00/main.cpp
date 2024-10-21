/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 19:19:34 by mkadri            #+#    #+#             */
/*   Updated: 2024/10/21 11:52:04 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie *newZombie(std::string name);

void randomChump(std::string);

int main()
{
    Zombie *rick = newZombie("Rick");
    rick->announce();
    randomChump("Negan");
    delete rick;
    return(0);
}