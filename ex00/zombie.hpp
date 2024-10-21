/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 19:20:15 by mkadri            #+#    #+#             */
/*   Updated: 2024/10/21 11:51:44 by mkadri           ###   ########.fr       */
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
        ~Zombie(void);
        void    announce();
    
};

#endif