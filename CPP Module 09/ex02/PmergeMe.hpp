/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 07:47:33 by hyolasig          #+#    #+#             */
/*   Updated: 2023/12/10 07:47:34 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <time.h>

class PMergeMeDeque
{
public:
	int total_deque;

	PMergeMeDeque();
	~PMergeMeDeque();

	std::deque<int> deque;

	void	addDeque(char **argv, std::deque<int> *pdeque);
	void	printDeque(std::deque<int> &pdeque);
};

class PMergeMeVector
{
public:
	int total_vector;

	PMergeMeVector();
	~PMergeMeVector();

	std::vector<int> vector;

	void	addVector(char **argv, std::vector<int> *pvector);
	void	printVec(std::vector<int> &pvector);
};

#endif
