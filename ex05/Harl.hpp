/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:17:49 by mkadri            #+#    #+#             */
/*   Updated: 2024/10/24 22:17:51 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>

class Harl {

	private:

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

	public:

	Harl(void);
	~Harl(void);

	void	complain(std::string level);
};

#endif