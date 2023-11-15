/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:53:27 by hyolasig          #+#    #+#             */
/*   Updated: 2023/11/09 17:53:28 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t Serializer::serialize(Data *ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
};

Data* Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
};

Serializer::Serializer()
{};

Serializer::Serializer(const std::string &name)
{
    (void)(name);
};

Serializer::Serializer(Serializer &obj)
{
    (void)obj;
};

Serializer::~Serializer()
{};

Serializer &Serializer::operator=(const Serializer &obj)
{
	(void)obj;
	return (*this);
};