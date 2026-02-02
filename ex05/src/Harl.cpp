/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 18:59:43 by ybutkov           #+#    #+#             */
/*   Updated: 2026/02/02 19:45:43 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>

Harl::Harl()
{
    levels[0] = "DEBUG";
    levelActions[0] = &Harl::debug;
    levels[1] = "INFO";
    levelActions[1] = &Harl::info;
    levels[2] = "WARNING";
    levelActions[2] = &Harl::warning;
    levels[3] = "ERROR";
    levelActions[3] = &Harl::error;

}

void Harl::debug(void) const
{
	std::cout << "I love having extra bacon for my "
				<< "7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
				<< std::endl;
}

void Harl::info(void) const
{
	std::cout << "I cannot believe adding extra bacon costs more money."
				<< "You didn't put enough bacon in my burger!"
				<< " If you did, I wouldn't be asking for more!"
				<< std::endl;
}

void Harl::warning(void) const
{
	std::cout << "I think I deserve to have some extra bacon for free."
				<< "I've been coming for years, "
				<< "whereas you started working here just last month."
				<< std::endl;
}

void Harl::error(void) const
{
	std::cout << "This is unacceptable! I want to speak to the manager now."
				<< std::endl;
}

void Harl::complain(const std::string& level) const
{
    for (int i = 0; i < amountOfLevel; ++i)
    {
        if (levels[i].compare(level) == 0)
        {
            (this->*levelActions[i])();
            return ;
        }
    }
    std::cout << "No such level" << std::endl;
}
