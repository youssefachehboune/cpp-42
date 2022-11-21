/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:33:29 by yachehbo          #+#    #+#             */
/*   Updated: 2022/07/26 20:18:07 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void replace_string(std::string tmp, std::string s1, std::string s2, std::string &new_line)
{
    size_t pos;
    if(tmp.find(s1) == std::string::npos || s1.length() == 0)
        new_line = tmp;
    else
    {
        pos = tmp.find(s1);
        if(pos != std::string::npos)
        {
            if(pos != 0)
                new_line.append(tmp, 0, pos);
            new_line.append(s2);
            pos = pos + s1.length();
            tmp.erase(0, pos);
            if(tmp.find(s1) == std::string::npos)
                new_line.append(tmp);
            else
                replace_string(tmp, s1, s2, new_line);
        }
    }
}

int main(int ac, char **av)
{
    std::string filename;
    std::string s1;
    std::string s2;
    std::string tmp;
    std::string new_line;

    if (ac != 4)
        std::cout << "The program take three Parameters" << std::endl;
    else
    {
        filename = av[1];
        s1 = av[2];
        s2 = av[3];
        std::ifstream inf(filename);
        if(inf.is_open() == false)
        {
            std::cout << " Error Cannot open " << filename << std::endl;
            return(1);
        }
        if(inf.peek() == EOF)
        {
            std::cout << "Error " << filename << " is empty." << std::endl;
            inf.close();
            return(1);
        }
        std::ofstream outf(filename + ".replace", std::ofstream::trunc);
        while(inf.eof() == false)
        {
            getline(inf, tmp);
            replace_string(tmp, s1, s2, new_line);
            outf << new_line;
            new_line.clear();
            if(inf.eof() == false)
                outf << std::endl;
        } 
        inf.close();
        outf.close();
    }
    return(0);
}