/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 21:33:43 by ybutkov           #+#    #+#             */
/*   Updated: 2026/02/01 22:43:09 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
    std::string type;
public:
    Weapon() = default;
    Weapon(const std::string& type): type(type) {};
    ~Weapon(void) = default;
    void setType(const std::string& type);
    const std::string& getType() const;
};

#endif
