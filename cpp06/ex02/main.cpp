/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:58:49 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/06 20:17:45 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include"B.hpp"
#include"C.hpp"
#include <random>

Base *generate(void)
{
    Base *ptr;
    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<int> distribution(0, 100);
    int random_number = distribution(generator);
    if (random_number <= 30)
        ptr = new A();
    else if (random_number > 30 && random_number < 70)
        ptr = new B();
    else
        ptr = new C();
    return ptr;
}

void identify(Base *p)
{
    if(dynamic_cast<A*>(p))
        std::cout<<"A"<< std::endl;
    else if(dynamic_cast<B*>(p))
        std::cout<<"B"<< std::endl;
    else if(dynamic_cast<C*>(p))
        std::cout<<"C"<< std::endl;
    else
        std::cout << "unknown" << std::endl;
}

void identify(Base &p)
{
    try {
        A& aRef = dynamic_cast<A&>(p);
        std::cout << "A";
    } 
    catch (const std::bad_cast&) {
    try {
            B& bRef = dynamic_cast<B&>(p);
            std::cout << "B";
        } 
    catch (const std::bad_cast&) {
    try {
                C& cRef = dynamic_cast<C&>(p);
                std::cout << "C";
     }
    catch (const std::bad_cast&) {
                std::cout << "unknown";
            }
        }
    }

    std::cout << std::endl;
}
int main()
{
    Base *ptr = new Base();
    Base *ptr1 = generate();
    Base *ptr2 = generate();
    Base *ptr3 = generate();
    identify(*ptr);
    identify(*ptr1);
    identify(*ptr2);
    identify(*ptr3);
    return(0);
}
