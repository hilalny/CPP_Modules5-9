/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:53:24 by hyolasig          #+#    #+#             */
/*   Updated: 2023/11/09 17:53:25 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

struct Data
{
	int		x;
	double	y;
};

Data *move(uintptr_t test)
{
    Data *comp = Serializer::deserialize(test);

    std::cout << "comp->x++ = " << comp->x++ << " , comp->y++ = " << comp->y++ << std::endl;
    return (comp);
}