/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 22:29:25 by mkadri            #+#    #+#             */
/*   Updated: 2024/10/22 10:51:06 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string     str;
    std::string     *strPtr;

    str = "HI THIS IS BRAIN";
    strPtr = &str;
    std::string     &strRef = str;
    
    std::cout << "string address: " << &str << std::endl;
	std::cout << "stringPtr address: " << strPtr << std::endl;
	std::cout << "stringRef address: " << &strRef << std::endl;
	std::cout << "stringPtr string: " << *strPtr << std::endl;
	std::cout << "stringRef string: " << strRef << std::endl;
}