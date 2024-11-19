/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 19:20:15 by mkadri            #+#    #+#             */
/*   Updated: 2024/11/08 13:06:19 by mkadri           ###   ########.fr       */
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