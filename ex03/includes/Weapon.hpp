/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 21:33:43 by ybutkov           #+#    #+#             */
/*   Updated: 2026/02/09 16:18:26 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
# include <string>

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
