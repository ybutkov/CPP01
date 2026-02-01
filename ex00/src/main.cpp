/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:03:29 by ybutkov           #+#    #+#             */
/*   Updated: 2026/02/01 15:19:44 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

int main(void)
{
    Zombie* formerHuman = newZombie("Foo");
    formerHuman->announce();
    randomChump("Boo");
    delete formerHuman;
    return 0;
}
