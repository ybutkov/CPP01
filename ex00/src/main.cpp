/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:03:29 by ybutkov           #+#    #+#             */
/*   Updated: 2026/02/09 16:04:53 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

namespace 
{

void    randomChump(std::string name)
{
    Zombie zombie(name);
    zombie.announce();
}

Zombie* newZombie(std::string name)
{
    return new Zombie(name);
}

} // end namespace

int main(void)
{
    Zombie* formerHuman = newZombie("Foo");
    formerHuman->announce();
    randomChump("Boo");
    delete formerHuman;
    return 0;
}
