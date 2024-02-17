/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:58:49 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/15 16:57:20 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MutantStack.hpp"

int main ()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "top: " << mstack.top() << std::endl;
    std::cout << "size Befor: " << mstack.size() << std::endl;
    mstack.pop();
    std::cout << "size after: " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    std::cout << "stack: ";
    while (it != ite)
    {
        std::cout << *it << " ";
        ++it;
    }
    std::cout << std::endl;
    std::stack<int> s(mstack);
    std::cout << "top: " << s.top() << std::endl;
    return 0;
}

// int main() {
//     // Create a MutantStack of integers
//     MutantStack<int> myStack;

//     // Push some elements onto the stack
//     myStack.push(1);
//     myStack.push(2);
//     myStack.push(3);
//     myStack.push(4);

//     // Use iterators to print elements in the stack
//     std::cout << "Elements in MutantStack: ";
//     for (MutantStack<int>::iterator it = myStack.begin(); it != myStack.end(); ++it) {
//         std::cout << *it << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }