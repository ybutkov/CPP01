/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:03:42 by ybutkov           #+#    #+#             */
/*   Updated: 2026/02/09 16:07:12 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    std::string name;
public:
    Zombie() = default;
    Zombie(std::string name): name(name) {};
    ~Zombie(void);
    void    announce(void);
    void    setName(std::string name);
};

#endif
