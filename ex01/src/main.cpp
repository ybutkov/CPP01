/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:26:19 by ybutkov           #+#    #+#             */
/*   Updated: 2026/02/01 15:51:57 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name);

int main(void)
{
    int amountOfZombies = 5;
    Zombie *theWhiteWalkersHost = zombieHorde(amountOfZombies, "Bob-");
    for(int i = 0; i < amountOfZombies; ++i)
        theWhiteWalkersHost[i].announce();
    delete []theWhiteWalkersHost;
    return 0;
}
