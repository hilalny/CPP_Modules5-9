/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 00:22:08 by hyolasig          #+#    #+#             */
/*   Updated: 2023/11/17 00:22:09 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
private:
    unsigned int size;
    std::vector<int> vec;
public:
    Span();
    Span(unsigned int N);
    Span &operator=(const Span &copy);
    ~Span();

    void addNumber(int number);
    void addNumbers(int number);
    int shortestSpan();
    int longestSpan();

    std::vector<int> &getVector();

    class OutOfRange : public std::exception
    {
        const char *what() const throw();
    };

    class NumberRange : public std::exception
    {
        const char *what() const throw();
    };
};


#endif