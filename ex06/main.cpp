/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:24:50 by mkadri            #+#    #+#             */
/*   Updated: 2024/10/24 22:25:16 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av) {

	if (ac == 2) {
		std::string level = av[1];
		Harl		harl;

		harl.complain(level);
	}
	else 
		std::cout << "Error. Program must take one and only one complaint" << std::endl;
	return 0;
}