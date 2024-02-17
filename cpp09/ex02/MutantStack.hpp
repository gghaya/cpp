/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:56:33 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/14 18:26:39 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <stack>
#include <deque>

template<typename T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;

    iterator begin() { return iterator(this->c.begin()); }
    iterator end() const{ return iterator(this->c.end()); }
    iterator begin() const { return iterator(this->c.begin()); }
    iterator end() { return iterator(this->c.end()); }
    MutantStack() {}  // Default constructor
    ~MutantStack() {} // Destructor
    
    MutantStack(const MutantStack& ref) : std::stack<T, Container>(ref) {} // Copy constructor
    MutantStack& operator=(const MutantStack& ref) // Assignment operator
    {
        if (this != &ref)
            std::stack<T, Container>::operator=(ref);
        return *this;
    }
};