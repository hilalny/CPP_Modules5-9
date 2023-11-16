/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:24:37 by hyolasig          #+#    #+#             */
/*   Updated: 2023/11/15 11:57:19 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename Type>
void swap(Type &v1, Type &v2)
{
    Type b = v1;
    v1 = v2;
    v2 = b;
}

template <typename Type>
Type min(Type v1, Type v2)
{
    if(v1 < v2)
        return v1;
    return v2;
}

template <typename Type>
Type	max(Type v1, Type v2) {
	if (v1 > v2)
		return v1;
	return v2;
}

#endif
