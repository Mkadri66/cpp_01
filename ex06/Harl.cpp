/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:26:00 by mkadri            #+#    #+#             */
/*   Updated: 2024/10/26 17:52:56 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

Harl::Harl() {}
Harl::~Harl() {}

void	Harl::complain(std::string level) {

	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i;

	for (i = 0; i < 4; i++) {
		if (levels[i] == level) {
			break;
		}
	}

	switch (i) {
		case 0:
			std::cout << "[DEBUG]\n";
			std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
            break;
		case 1:
			std::cout << "[INFO]\n";
			std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
            break;
		case 2:
			std::cout << "[WARNING]\n";
			std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
            break;
		case 3:
			std::cout << "[ERROR]\n";
			std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
			break;
		default:
			std::cout << "[inaudible grumping]" << std::endl;
	}
}