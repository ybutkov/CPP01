/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 18:50:36 by ybutkov           #+#    #+#             */
/*   Updated: 2026/02/09 17:18:30 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl
{
	static constexpr int amountOfLevel = 4;
	std::string levels[amountOfLevel];
	void (Harl::*levelActions[amountOfLevel])(void) const;
	void debug(void) const;
	void info(void) const;
	void warning(void) const;
	void error(void) const;
	

  public:
	Harl();
    ~Harl() = default;
	void complain(const std::string& level) const;
};

#endif
