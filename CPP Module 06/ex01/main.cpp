/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:53:21 by hyolasig          #+#    #+#             */
/*   Updated: 2023/11/15 02:37:04 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Data *move(uintptr_t test);

struct Data
{
	int		a;
	double	b;
};

int main()
{
    Data data;

    data.a = 42;
    data.b = 42.42;
    uintptr_t tmp = Serializer::serialize(&data);

    if (&data == move(tmp))
    {
        std::cout << "they have identical address" << std::endl;
        std::cout << "data.a = " << data.a << " , data.b = " << data.b << std::endl;
    }
    else
        std::cout << "they have different address" << std::endl;

    return (0);
}