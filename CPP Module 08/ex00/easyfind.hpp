/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 00:21:51 by hyolasig          #+#    #+#             */
/*   Updated: 2023/11/17 15:47:51 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>

template <typename T>
int EasyFind(T container, int x)
{
    std::vector<int>::iterator it;
    it = container.begin(); 
    while(it != container.end())
    {
        if(*it == x)
            return (*it);
        it++;
    }
    std::cerr << "Selected Number Couldn't Find! Error Code ";
    return(-1);
}

#endif