/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:24:54 by hyolasig          #+#    #+#             */
/*   Updated: 2023/11/14 18:24:55 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int array[5] = {1, 3, 2, 7, 8};
	iter(array, 5, print);
	std::cout << std::endl;

	std::string arr[6] = {"a", "b", "c", "d", "e", "f"};
	iter(arr, 6, print);
	std::cout << std::endl;

	float a[5] = {1.1, 3.3, 2.2, 7.7, 8.8};
	iter(a, 5, print);
	std::cout << std::endl;
}