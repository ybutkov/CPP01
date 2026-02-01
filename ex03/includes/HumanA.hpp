/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 21:37:08 by ybutkov           #+#    #+#             */
/*   Updated: 2026/02/01 22:46:26 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanA
{
	std::string name;
	const Weapon& weapon;

  public:
	HumanA(const std::string& name, const Weapon& weapon)
		: name(name), weapon(weapon){};
    ~HumanA() = default;
	void attack() const;
};

#endif
