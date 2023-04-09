/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:53 by gbertin           #+#    #+#             */
/*   Updated: 2023/04/09 09:16:48 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_H
# define PMERGEME_H

#include "PmergeMe.hpp"
#include <vector>
#include <deque>

class PmergeMe {

	public:

	PmergeMe(void);
	PmergeMe(char **list, size_t size);
	~PmergeMe(void);
	PmergeMe(const PmergeMe& obj);
	PmergeMe& operator=(const PmergeMe& rhs);

	private:
	

	std::vector<std::pair<int, int> >		_vector;
	std::deque<std::pair<int, int> >		_deque;
	int										_last;
	

};

#endif