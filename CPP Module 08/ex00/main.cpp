/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 00:21:55 by hyolasig          #+#    #+#             */
/*   Updated: 2023/11/17 15:31:12 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    int array[] = {5, 10, 15};
    std::vector<int> vec(array, array + 3);

    std::cout << "First item of the list --> " << EasyFind(vec, 5) << std::endl;
    std::cout << "Second item of the list --> " << EasyFind(vec, 10) << std::endl;
    std::cout << "Third item of the list --> " << EasyFind(vec, 15) << std::endl;
    std::cout << "Fourth item of the list --> " << EasyFind(vec, 20) << std::endl;

    vec.clear();
    return (0);
}