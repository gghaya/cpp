/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:06:39 by gghaya            #+#    #+#             */
/*   Updated: 2023/10/23 19:33:37 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//std::ios::trunc |
#include <iostream>
#include <fstream>
#include <string>
int main (int ac, char **av)
{
    if (ac == 4)
    {
        int i = 0;
        size_t j = 0;
        std::string line;
        std::string concat;
        std::string strr(av[1]);
        std::string s1(av[2]);
        std::string s2(av[3]);
        std::string nwline;
        concat = strr + ".replace";
        std::fstream MyFile;
        std::fstream CopyFile;
        MyFile.open(av[1],   std::ios::out | std::ios::in);
        CopyFile.open(concat,  std::ios::trunc |std::ios::out | std::ios::in);
        if (MyFile.fail() || CopyFile.fail())
            std::cout << "Fail to Open file"<<std::endl;
        getline (MyFile, line, '\0');
        j = line.find(s1, 0);
        while (j != std::string::npos && s1.compare(s2) != 0)
        {
            line = line.substr(0,j) + s2+ line.substr(j+s1.length(),-1);
            j = line.find(s1, j);
        }
        CopyFile << line;
        MyFile.close();
    }
    else   
        std::cout << "Enexpected number of arguments"<<std::endl;
}