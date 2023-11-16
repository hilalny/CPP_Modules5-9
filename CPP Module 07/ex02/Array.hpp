/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:25:07 by hyolasig          #+#    #+#             */
/*   Updated: 2023/11/14 18:25:08 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
	private:
		T				*array;
		unsigned int	len;
	public:
		Array();
		Array(unsigned int length);
		Array(const Array &oth);
		~Array();

		Array	&operator=(const Array &obj);
		T		&operator[](unsigned int index);
		const T	&operator[](unsigned int index) const;
		unsigned int size() const;
		class OutofBounds : public std::exception
		{
			virtual const char *what() const throw()
			{
				return ("ARRAYEXCEPTION: The Index is Out of Bounds");
			}
		};
};

template<typename T>
Array<T>::Array()
{
	len = 0;
	array = new T[0];	
}

template <typename T>
Array<T>::Array(unsigned int length)
{
	len = length;
	array = new T[length];
	for (unsigned int i = 0; i < len; i++)
	{
		array[i] = 0;
	}
}

template<typename T>
Array<T>::Array(const Array &oth)
{
	len = oth.size();
	array = new T[len];
	for (unsigned int i = 0; i < len; i++)
	{
		array[i] = oth[i];
	}
}

template <typename T>
Array<T>::~Array(){
	delete[] array;
}

template<typename T>
Array<T>	&Array<T>::operator=(const Array &obj)
{
	delete[] array;
	len = obj.size();
	array = new T[len];
	for (unsigned int i = 0; i < len; i++)
		array[i] = obj[i];
	return (*this);
}

template<typename T>
T	&Array<T>::operator[](unsigned int index)
{
	if (index >= len)
		throw Array::OutofBounds();
	return (array[index]);
}

template<typename T>
const T	&Array<T>::operator[](unsigned int index) const
{
	if (index >= len)
		throw Array::OutofBounds();
	return (array[index]);
}

template <typename T>
unsigned int Array<T>::size() const
{
	return len;
}

#endif