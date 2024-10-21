/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:58:52 by mkadri            #+#    #+#             */
/*   Updated: 2024/10/21 14:34:51 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP

#include <iostream>

class   Zombie {
    
    private:
        std::string     _name;
        
    public:
        Zombie(std::string name);
        Zombie(void);
        ~Zombie(void);
        void    announce();
        void    setName(std::string name);
    
};

Zombie*    zombieHorde(int n, std::string name);

#endif