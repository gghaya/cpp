/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 21:00:45 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/17 13:24:13 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"BitcoinExchange.hpp"


bool is_double(const std::string input) {
    size_t index = 0;
    bool hasDot = false;
    bool hasDigits = false;

    // std::cout<<"******|"<<input<<"|"<<std::endl;
    while (index < input.length() && input[index] != '.') {
        if(std::isdigit(input[index]))
            index++;
        else
            return(false);
        hasDigits = true;
    }
    if (input[index] == '.') {
        hasDot = true;
        index++;
        hasDigits = false;
        while (std::isdigit(input[index])) {
            hasDigits = true;
            index++;
        }
    }
    return index == (input.length() && hasDigits && hasDot) || (input.length() && hasDigits);
}

int is_digit(std::string str)
{
    int i = 0;
    while (str[i])
    {
        if (!isdigit(str[i]))
            return(0);
        i++;
    }
    return(1);
}

int ft_atoi(std::string str) {
    int result = 0;
    int sign = 1;
    size_t index = 0;

    if (index < str.length() && (str[index] == '-' || str[index] == '+')) {
        if((str[index] = '-'))
            sign = -1;
        index++;
    }

    while (index < str.length() && str[index] >= '0' && str[index] <= '9') {
        result = result * 10 + (str[index] - '0');
        index++;
    }
    return sign * result;
}

std::string strTrim( std::string s1,  std::string set) {
    size_t start = 0;
    size_t end = s1.length();
    // Find the first character not in 'set' from the start
    while (start < end && set.find(s1[start]) != std::string::npos) {
        start++;
    }

    // Find the first character not in 'set' from the end
    while (end > start && set.find(s1[end - 1]) != std::string::npos) {
        end--;
    }

    // Substring from start to end
    return s1.substr(start, end - start);
}

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::~BitcoinExchange()
{
}

void BitcoinExchange::read_csv(std::string fdata)
{
    std::ifstream file(fdata);
    std::string date;
    double floatValue;
    std::string value;
    std::string line;
    if (!file.is_open())
    {
        std::cerr << "Error opening file." << std::endl;
        exit(1);
    }
    std::getline(file, line);
    while (std::getline(file, line)) {
        date = line.substr(0, 10);
        value = line.substr(11, line.length() - 1);
        floatValue = std::atof(value.c_str());
        // std::cout <<date << "|"<< value<< "|"<<floatValue << "|" << std::endl;
        data.insert(std::make_pair(date, floatValue));
    }
    // for (std::map<std::string, double>::iterator it = data.begin(); it != data.end(); ++it) {
    //     if (data.upper_bound("esf"))
    //         std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
            
    // }
}
int valide_m2(std::string year, std::string day)
{
	int y = std::atof(year.c_str());
	if ((y % 4) == 0)
	{
		if ((std::atof (day.c_str()) < 0) || (std::atof(day.c_str()) > 29))
			return(0);
	}
	else
	{
		if ((std::atof(day.c_str()) < 0) || (std::atof(day.c_str()) > 28))
			return (0);
	}
	return (1);
}
int valide_days(std::string year, std::string  month, std::string day)
{
        if(((std::atof(year.c_str()) < 2000) || (std::atof(year.c_str())) > 2023))
        {
            std::cout << "Error: bad input1" << std::endl;
            return (0);
        }
        if ( ((std::atof(month.c_str()) < 0) || (std::atof(month.c_str())) > 12))
        {
            std::cout << "Error: bad input1" << std::endl;
            return (0);
        }
        if (std::atof(month.c_str()) >= 1 && std::atof(month.c_str()) <= 7)
        {
            if (std::atof(month.c_str()) == 2)
            {
                if (valide_m2(year ,day) == 0)
                {
                    std::cout << "Error: bad input2" << std::endl;
                    return (0);
                }
            }
            else
            {
                int m = std::atof(month.c_str());
                if ((m % 2) == 0)
                {
                    if (std::atof(day.c_str()) < 0 || std::atof(day.c_str()) > 30)
                    {
                        std::cout << "Error: bad input3" << std::endl;
                        return(0);
                    }
                }
                else
                {
                    if (std::atof(day.c_str()) < 0 || std::atof(day.c_str()) > 31)
                    {
                        std::cout << "Error: bad input4" << std::endl;
                        return(0);
                    }
                }
            }
        }
        else if (std::atof(month.c_str()) >= 8 && std::atof(month.c_str()) <= 12)
        {
            int m = std::atof(month.c_str());
            if ((m % 2) == 0)
            {
                if (std::atof(day.c_str()) < 0 || std::atof(day.c_str()) > 31)
                {
                    std::cout << "Error: bad input5" << std::endl;
                    return(0);
                }
            }
            else
            {
                if (std::atof(day.c_str()) < 0 || std::atof(day.c_str()) > 30)
                {
                    std::cout << "Error: bad input6" << std::endl;
                    return(0);
                }
            }
        }
	return (1);
}
int valide_date(std::string date)
{
    size_t index;
            // std::cout << "daaaaaaateeeee: |" <<date<<"|";

    index = date.find("-");
    if (index != std::string::npos)
    {
        std::string year = date.substr(0,index);
        // std::cout << "year: |" <<year<<"|";
        date = date.substr(index+1 ,date.length());
            // std::cout << "daaaaaaateeeee: |" <<date<<"|";
        index = date.find("-");
        if(index != std::string::npos)
        {
            std::string month = date.substr(0 ,index);
            // std::cout << "month: |" <<month<<"|";
                std::string day  = date.substr(index+1 ,date.length());
                // std::cout << "day: |" <<day<<"|"<<std::endl;
                if(is_digit(year) && is_digit(month) && is_digit(day) &&  valide_days( year,  month, day))
                   return(1);
                else
                {
                    std::cout << "Error: bad input8" << std::endl;
                    return(0);
                }
        }
        else
            return(0);
    }
    return(0);   
}
void BitcoinExchange::read_input(std::string finput)
{
    std::ifstream file(finput);
    std::string date;
    double floatValue;
    std::string value;
    std::string line;
    std::string trim;
    std::string firstline;
    std::string set = " \t\n\r\f\v";
    size_t index;
    if (!file.is_open())
    {
        std::cerr << "Error opening file." << std::endl;
        exit(1);
    }
    std::getline(file, line);
    firstline = strTrim(line.substr(0, line.length()) , set);
    index = firstline.find("|");
    if(index != std::string::npos)
    {
        line = strTrim(firstline.substr(0, index), set);
        trim =  strTrim(firstline.substr(index+1,firstline.length() ), set);
    // std::cout << line << "||"<< trim << std::endl;
        if (line != "date" || trim != "value")
        {
            std::cout << "Error: bad input"<< std::endl;
            exit(1);
        }
    }
    // if (firstline == "date | value")
    // {
        while (std::getline(file, line)) {
        trim =  strTrim(line.substr(0, line.length()), set);
        // std::cout << "trim   |"<< trim<< "|"<<std::endl;
        index = trim.find("|");
        if (index != std::string::npos)
        {
            date = strTrim(trim.substr(0, index), set);
            value = strTrim(trim.substr(index + 1,trim.length() - 1), set);
            // std::cout << "date:|"<< date<< "|   value:|"<<value<< "|"<<std::endl;       
        }
        else
        {
            date = strTrim(trim.substr(0, trim.length()), set);
            value = "";      
        }
        if(value.empty())
        {
            std::cout << "Error: bad input =>"<< date << std::endl;
            continue;
        }
        int i = 0;
        int j = 0;
        while (value[j])
        {
            if (value[i] == '-')
                i++;
            j++;
        }
        if (i <= 1)
        {
            if (i == 1)
            {
                std::cout << "Error: not a positive number."<< std::endl;
                continue;
            }            
            else if (is_double(value) == 0)
            {
                std::cout << "Error: bad input9"<< std::endl;
                continue;
            }
            else
            {
                floatValue = std::atof(value.c_str());
                // std::cout << "float value : "<< floatValue<<std::endl;
            }
        }
        else
        {
            std::cout << "Error: bad input =>"<< date << std::endl;
            continue;
        }
        if (valide_date(date) == 1 && floatValue >= 0 && floatValue <= 1000)
        {
            std::map<std::string, double>::iterator upper = data.lower_bound(date);
            if (date == upper->first)
                std::cout << date << " ==> " << floatValue << " = " << upper->second*floatValue << std::endl;
            else
            {
                if (upper != data.begin())
                {
                    upper--;
                    std::cout << date << " ==> " << floatValue << " = " << upper->second*floatValue << std::endl; 
                }
            }
        }
        else if (floatValue > 10000)
            std::cout << "Error: too large a number."<< std::endl;
    }
    // }
    // else
    //     std::cout << "Error: bad input =>"<< date << std::endl;
   
    //     for (std::map<std::string, double>::iterator it = data.begin(); it != data.end(); ++it) {
    //     std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
    // }
}
