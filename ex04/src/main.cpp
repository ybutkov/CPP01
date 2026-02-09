/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 15:11:39 by ybutkov           #+#    #+#             */
/*   Updated: 2026/02/09 16:32:49 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

namespace
{
std::string replaceString(const std::string& str,
							const std::string& findStr,
							const std::string& replace)
{
	if (findStr.empty() || findStr.compare(replace) == 0)
		return (str);
	std::stringstream res;
	std::size_t pos = 0;
	std::size_t foundPos = 0;
	std::size_t findStrLength = findStr.length();
	while ((foundPos = str.find(findStr, pos)) != std::string::npos)
	{
		res << str.substr(pos, foundPos - pos);
		res << replace;
		pos = foundPos + findStrLength;
	}
	res << str.substr(pos, str.length() - pos);
	return (res.str());
}
} // namespace

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error: Program takes 3 parameters: a filename and 2 strings"
					<< std::endl;
		return (1);
	}
	std::string fileName = argv[1];
	std::ifstream originFile(argv[1]);
	if (!originFile.is_open())
	{
		std::cout << "Error: File "
					<< fileName
					<< " doesn't exist"
					<< std::endl;
		return (1);
	}
	std::ofstream replaceFile(fileName + ".replace");
	if (!replaceFile.is_open())
	{
		std::cout << "Error: Could not create "
					<< fileName + ".replace"
					<< std::endl;
		originFile.close();
		return (1);
	}
	std::string line;
	while (getline(originFile, line))
	{
		replaceFile << replaceString(line, argv[2], argv[3]);
		if (!originFile.eof())
			replaceFile << "\n";
	}
	originFile.close();
	replaceFile.close();
	return (0);
}
