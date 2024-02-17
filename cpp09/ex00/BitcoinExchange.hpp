/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 11:01:07 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/17 02:37:44 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BitcoinExchange_HPP
#define BitcoinExchange_HPP
#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>
#include <map>
#include <stdexcept>
#include <sstream>
#include <iomanip>
#include <cstring>

class BitcoinExchange
{
private:
    std::map<std::string, double> data;
public:
    BitcoinExchange(/* args */);
    void read_csv(std::string fdata);
    void read_input(std::string finput);
    ~BitcoinExchange();
};



#endif