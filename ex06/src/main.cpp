/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 19:08:21 by ybutkov           #+#    #+#             */
/*   Updated: 2026/02/02 19:46:01 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: Format: ./harl <LEVEL>" << std::endl;
		return 1;
	}
	Harl harl;
	harl.complain(argv[1]);
	return (0);
}
