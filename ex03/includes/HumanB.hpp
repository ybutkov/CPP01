/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 21:41:37 by ybutkov           #+#    #+#             */
/*   Updated: 2026/02/09 16:21:46 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanB
{
	std::string name;
	const Weapon *weapon;

  public:
	HumanB() = default;
	HumanB(const std::string& name, Weapon *weapon=nullptr)
		: name(name), weapon(weapon){};
	~HumanB() = default;
	void setWeapon(const Weapon& weapon);
	void attack() const;
};

#endif
