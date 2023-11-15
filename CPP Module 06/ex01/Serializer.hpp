/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:53:30 by hyolasig          #+#    #+#             */
/*   Updated: 2023/11/09 17:53:31 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

struct Data;

class Serializer
{
	public:

		static uintptr_t serialize(Data *);
		static Data* deserialize(uintptr_t);

		Serializer();
		Serializer(const std::string &);
		Serializer(Serializer &);
		~Serializer();

		Serializer &operator=(const Serializer &);
};