/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:26:47 by ybutkov           #+#    #+#             */
/*   Updated: 2026/02/01 15:50:00 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name)
{
    Zombie *theWhiteWalkersHost = new Zombie[n];
	for (int i = 0; i <n; ++i)
		theWhiteWalkersHost[i].setName(name + std::to_string(i + 1));
    return theWhiteWalkersHost;
}
