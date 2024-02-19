/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 19:48:03 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/19 02:56:14 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PmergeMe.hpp"


int ft_atoi(char *str) {
    
    std::string s = str;
   
    long long result = 0;
    int sign = 1;
    size_t index = 0;

    if (index < s.length() && (s[index] == '-' || s[index] == '+')) {
        if((s[index] = '-'))
            sign = -1;
        index++;
    }

    while (index < s.length() && s[index] >= '0' && s[index] <= '9') {
        result = result * 10 + (s[index] - '0');
        index++;
    }
    if ((result) > 2147483647)
        return(-1);
    return sign * result;
}

void PmergeMe::find_Vpairs()
{
    size_t i = 0;
    int tmpf;
    int tmps;
    struggler =  -1;
    if (myVector.size()%2 != 0)
    {
        struggler = myVector[myVector.size() - 1];
        myVector.pop_back();
    }
    for (i = 0;i < myVector.size();i+=2)
    {
        std::pair<int, int> newPair = std::make_pair(myVector[i], myVector[i+1]);
        myVOfPairs.push_back(newPair);
    }
    for (i = 0; i < myVOfPairs.size(); i++) {
       if (myVOfPairs[i].first < myVOfPairs[i].second)
        std::swap(myVOfPairs[i].first, myVOfPairs[i].second);
    }
    for (i = 0; i < myVOfPairs.size() - 1; i++) {
        for (size_t j = i + 1; j < myVOfPairs.size(); j++)
        {
            if (myVOfPairs[i].first > myVOfPairs[j].first)
            {
                tmpf = myVOfPairs[i].first;
                tmps = myVOfPairs[i].second;
                myVOfPairs[i].first = myVOfPairs[j].first;
                myVOfPairs[i].second = myVOfPairs[j].second;
                myVOfPairs[j].first = tmpf;
                myVOfPairs[j].second = tmps;
            }
        }
    }
    for (i = 0; i < myVOfPairs.size(); i++) {
       mainV.push_back(myVOfPairs[i].first);
    }
    for (i = 0; i < myVOfPairs.size(); i++) {
       std::vector<int>::iterator it = std::lower_bound(mainV.begin(), mainV.end(), myVOfPairs[i].second);
            mainV.insert(it, myVOfPairs[i].second);
    }
    if (struggler != -1)
    {
        std::vector<int>::iterator it = std::lower_bound(mainV.begin(), mainV.end(), struggler);
        mainV.insert(it, struggler);
    }
}

void PmergeMe::find_Dpairs()
{
    size_t i = 0;
    int tmpf;
    int tmps;
    struggler =  -1;
    if (myDeque.size()%2 != 0)
    {
        struggler = myDeque[myDeque.size() - 1];
        myDeque.pop_back();
    }
    for (i = 0;i < myDeque.size();i+=2)
    {
        std::pair<int, int> newPair = std::make_pair(myDeque[i], myDeque[i+1]);
        myDOfPairs.push_back(newPair);
    }
    for (i = 0; i < myDOfPairs.size(); i++) {
       if (myDOfPairs[i].first < myDOfPairs[i].second)
        std::swap(myDOfPairs[i].first, myDOfPairs[i].second);
    }
    for (i = 0; i < myDOfPairs.size() - 1; i++) {
        for (size_t j = i + 1; j < myDOfPairs.size(); j++)
        {
            if (myDOfPairs[i].first > myDOfPairs[j].first)
            {
                tmpf = myDOfPairs[i].first;
                tmps = myDOfPairs[i].second;
                myDOfPairs[i].first = myDOfPairs[j].first;
                myDOfPairs[i].second = myDOfPairs[j].second;
                myDOfPairs[j].first = tmpf;
                myDOfPairs[j].second = tmps;
            }
        }
    }

    for (i = 0; i < myDOfPairs.size(); i++) {
       mainDeque.push_back(myDOfPairs[i].first);
    }


    
    for (i = 0; i < myDOfPairs.size(); i++) {
       std::deque<int>::iterator it = std::lower_bound(mainDeque.begin(), mainDeque.end(), myDOfPairs[i].second);
        mainDeque.insert(it, myDOfPairs[i].second);
    }
    if (struggler != -1)
    {
        std::deque<int>::iterator it = std::lower_bound(mainDeque.begin(), mainDeque.end(), struggler);
        mainDeque.insert(it, struggler);
    }
}

void PmergeMe::sorted_deque()
{
    std::cout << "After  :";
    for (std::deque<int>::iterator it = mainDeque.begin(); it != mainDeque.end(); it++) {
        std::cout << " " << *it  << " " ;
    }
    std::cout << std::endl;
}
void PmergeMe::sorted_vector()
{
    std::cout << "After  :";
    for (std::vector<int>::iterator it = mainV.begin(); it != mainV.end(); it++) {
        std::cout << " " << *it  << " " ;
    }
    std::cout << std::endl;
}
void PmergeMe::unsorted_vector()
{
    std::cout << "Before :";
    for (std::vector<int>::iterator it = myVector.begin(); it != myVector.end(); it++) {
        std::cout << " " << *it  << " " ;
    }
    if (struggler != -1)
        std::cout << " " << struggler  << " " ;
    std::cout << std::endl;
}
void PmergeMe::unsorted_deque()
{
    std::cout << "Before :";
    for (std::deque<int>::iterator it = myDeque.begin(); it != myDeque.end(); it++) {
        std::cout << " " << *it  << " " ;
    }
    if (struggler != -1)
        std::cout << " " << struggler  << " " ;
    std::cout << std::endl;
}
PmergeMe::PmergeMe(/* args */)
{
}
int is_positive_d(std::string str)
{
    int i = 0;
    if(str[i] == '-')
        return(0);
    while (str[i])
    {
        if (!isdigit(str[i]))
            return(0);
        i++;
    }
    return(1);
}
int PmergeMe::valide_args(char **str)
{
    int i = 1;
    while (str[i])
    {
        if (is_positive_d(str[i]) == 0)
            return(0);
        i++;
    }
    return(1);
}

void PmergeMe::fill_containers(char **str, int len)
{
    int num;
    if (valide_args(str) == 1)
    {
        for(int i = 1; i < len ; i++)
        {
            num = ft_atoi(str[i]);
            if (num == -1)
            {
                std::cout<<"Error"<<std::endl;
                exit(1);
            }
            myVector.push_back(num);
            myDeque.push_back(num);
        }
    }
    else
    {
        std::cout<<"Error"<<std::endl;
        exit(1);
    }
    size = myVector.size();
}
PmergeMe::~PmergeMe()
{
}