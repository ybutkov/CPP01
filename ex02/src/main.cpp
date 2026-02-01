/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 16:07:08 by ybutkov           #+#    #+#             */
/*   Updated: 2026/02/01 21:28:25 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int main(void)
{
    std::string simpleString = "HI THIS IS BRAIN";
    std::string* stringPTR = &simpleString;
    std::string& stringREF = simpleString;
    std::string str2 = "Hello";
    
    auto L = std::left;
    auto W20 = std::setw(20);

    std::cout << L << W20 << "The memory addresses:" << std::endl;
    std::cout << L << W20 << "simpleString - " << &simpleString << std::endl;
    std::cout << L << W20 << "stringPTR - " << stringPTR << std::endl;
    std::cout << L << W20 << "stringREF - " << &stringREF << std::endl;

    std::cout << L << W20 << "\nThe value of the strings:" << std::endl;
    std::cout << L << W20 << "simpleString - " << simpleString << std::endl;
    std::cout << L << W20 << "stringPTR - " << *stringPTR << std::endl;
    std::cout << L << W20 << "stringREF - " << stringREF << std::endl;

    stringREF = str2;
    
    std::cout << L << W20 << "\nThe memory addresses:" << std::endl;
    std::cout << L << W20 << "simpleString - " << &simpleString << std::endl;
    std::cout << L << W20 << "str2: " << &str2 << std::endl;
    std::cout << L << W20 << "stringPTR - " << stringPTR << std::endl;
    std::cout << L << W20 << "stringREF - " << &stringREF << std::endl;

    std::cout << L << W20 << "\nThe value of the strings:" << std::endl;
    std::cout << L << W20 << "simpleString - " << simpleString << std::endl;
    std::cout << L << W20 << "str2 - " << str2 << std::endl;
    std::cout << L << W20 << "stringPTR - " << *stringPTR << std::endl;
    std::cout << L << W20 << "stringREF - " << stringREF << std::endl;
    
    return 0;
}
