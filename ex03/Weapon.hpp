/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:29:35 by mkadri            #+#    #+#             */
/*   Updated: 2024/10/22 15:20:31 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_HPP

# define WEAPON_HPP

#include <iostream>

class Weapon {

    private:
        std::string     _type;
    
    public:
    Weapon(std::string type);
    ~Weapon(void);
    
    std::string     getType(void) const;
    void            setType(std::string type);
};

#endif