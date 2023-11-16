/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:24:52 by hyolasig          #+#    #+#             */
/*   Updated: 2023/11/16 18:46:11 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename Type>
void	iter(Type *array, size_t len, void(*f)(Type const &value))
{
	for (size_t i = 0; i < len; i++)
		f(array[i]);
}

template<typename T>
void print(T a)
{
	std::cout << a << " ";
}

#endif