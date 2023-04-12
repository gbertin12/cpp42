/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:53 by gbertin           #+#    #+#             */
/*   Updated: 2023/04/11 05:26:18 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_H
# define PMERGEME_H

#include "PmergeMe.hpp"
#include <vector>
#include <deque>
#include <string>

class PmergeMe {

	public:

	PmergeMe(char **list, size_t size);
	~PmergeMe(void);
	PmergeMe(void);
	PmergeMe(const PmergeMe& obj);
	PmergeMe& operator=(const PmergeMe& rhs);
	
	void	handleDeque();
	void	handleVector();
	
	void	sortDeque();
	void	sortVector();

	void	output();
	
	private:

	std::string								_output;
	
	char**									_list;
	std::size_t								_sizeList;

	int										_last;
	bool									_odd;
	
	std::vector<std::pair<int, int> >		_vector;
	std::deque<std::pair<int, int> >		_deque;
	
	std::deque<int>							_dequeSorted;
	std::vector<int>						_vectorSorted;

};

#endif