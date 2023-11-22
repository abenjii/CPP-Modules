/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:35:55 by alex              #+#    #+#             */
/*   Updated: 2023/10/31 16:33:05 by alexfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex04.h"
#include "ex04.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Error! Wrong arguments" << std::endl;
        return (0);
    }
    std::ifstream mainFile(av[1]);
    std::string replacefile_name(av[1]);
    replacefile_name.append(".replace");
    std::ofstream replaceFile(replacefile_name.c_str());
    if (!replaceFile.is_open())
    {
        std::cout << "Error open replaceFile" << std::endl;
        return 1;
    }
    if (!mainFile.is_open())
    {
        std::cout << "Error open mainFile" << std::endl;
        return 1;
    }
    char current_char;
    std::string line;
    std::string subline;
    std::string s1(av[2]);
    std::string s2(av[3]);
    while (mainFile.get(current_char))
    {
        subline += current_char;
        if (subline == s1)
        {
            replaceFile << s2;
            subline.clear();
        }
        else if ((subline.length() == s1.length()) && (subline != s1))
        {
            replaceFile.put(subline[0]);
            subline.erase(0, 1);
        }
    }
    replaceFile << subline;
    replaceFile.close();
    mainFile.close();
    return (0);
}