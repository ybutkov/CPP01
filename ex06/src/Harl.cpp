/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 18:59:43 by ybutkov           #+#    #+#             */
/*   Updated: 2026/02/09 17:33:18 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>

const Harl::LevelAction Harl::levelMap[amountOfLevel + 1] = {
	{DEBUG, "DEBUG", &Harl::debug},
	{INFO, "INFO", &Harl::info},
	{WARNING, "WARNING", &Harl::warning},
	{ERROR, "ERROR", &Harl::error},
	{INVALID, "Probably complaining about insignificant problems", nullptr}};

void Harl::debug(void) const
{
	std::cout << "I love having extra bacon for my\n"
				<< "7XL-double-cheese-triple-pickle-specialketchup burger.\n"
				<< "I really do!"
				<< "\n"
				<< std::endl;
}

void Harl::info(void) const
{
	std::cout << "I cannot believe adding extra bacon costs more money.\n"
				<< "You didn't put enough bacon in my burger!\n"
				<< "If you did, I wouldn't be asking for more!"
				<< "\n"
				<< std::endl;
}

void Harl::warning(void) const
{
	std::cout << "I think I deserve to have some extra bacon for free.\n"
				<< "I've been coming for years, \n"
				<< "whereas you started working here just last month."
				<< "\n"
				<< std::endl;
}

void Harl::error(void) const
{
	std::cout << "This is unacceptable! I want to speak to the manager now."
				<< "\n"
				<< std::endl;
}

Harl::LevelAction Harl::getLoggingLevel(const std::string &level) const
{
	for (int i = 0; i < amountOfLevel; ++i)
	{
		if (Harl::levelMap[i].name.compare(level) == 0)
		{
			return (Harl::levelMap[i]);
		}
	}
	return (Harl::levelMap[amountOfLevel]);
}

void Harl::complain(const std::string &level) const
{
	Harl::LevelAction levelAction = getLoggingLevel(level);
	switch (levelAction.level)
	{
	case DEBUG:
		std::cout << "[ " << levelMap[0].name << " ]" << std::endl;
		(this->*levelMap[0].action)();
	case INFO:
		std::cout << "[ " << levelMap[1].name << " ]" << std::endl;
		(this->*levelMap[1].action)();
	case WARNING:
		std::cout << "[ " << levelMap[2].name << " ]" << std::endl;
		(this->*levelMap[2].action)();
	case ERROR:
		std::cout << "[ " << levelMap[3].name << " ]" << std::endl;
		(this->*levelMap[3].action)();
		break ;
	default:
		std::cout << "[ " << levelAction.name << " ]" << std::endl;
	}
}

// void Harl::complain(const std::string& level) const
// {
// 	Harl::LevelAction levelAction = getLoggingLevel(level);
//     if (levelAction.level == INVALID)
//     {
// 		std::cout << "[ " << levelAction.name << " ]" << std::endl;
//         return ;
//     }
// 	for (int i = 0; i < amountOfLevel; ++i)
// 	{
// 		if (levelMap[i].level >= levelAction.level && levelMap[i].level != INVALID)
// 		{
// 			std::cout << "[ " << levelMap[i].name << " ]" << std::endl;
// 			(this->*levelMap[i].action)();
// 		}
// 	}
// }
