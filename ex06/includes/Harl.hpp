/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 18:50:36 by ybutkov           #+#    #+#             */
/*   Updated: 2026/02/02 20:26:55 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl
{
  private:
	enum LoggingLevel
	{
		DEBUG,
		INFO,
		WARNING,
		ERROR,
		INVALID
	};

	struct LevelAction
	{
		LoggingLevel level;
		std::string name;
		void (Harl::*action)(void) const;
	};

	static constexpr int amountOfLevel = 4;
	static const LevelAction levelMap[amountOfLevel + 1];

	void debug(void) const;
	void info(void) const;
	void warning(void) const;
	void error(void) const;
	LevelAction getLoggingLevel(const std::string& level) const;

  public:
	Harl() = default;
	~Harl() = default;
	void complain(const std::string& level) const;
};

#endif
