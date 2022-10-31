/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchAndReplace.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 01:59:00 by gbertin           #+#    #+#             */
/*   Updated: 2022/10/30 07:55:37 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string	searchAndReplace(std::string occurence, std::string s1, std::string s2)
{
	int index;
	
	if (!s1.empty())
	{
		index = occurence.find(s1, 0);
		while (index != -1)
		{
			occurence.erase(index, s1.length());
			occurence.insert(index, s2);
			index = occurence.find(s1);
		}
	}
	return (occurence);
}