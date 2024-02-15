/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 12:07:28 by gghaya            #+#    #+#             */
/*   Updated: 2024/02/08 14:57:31 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Array_HPP
#define Array_HPP

#include <iostream>

template<typename T>
class Array {
private:
    T *element;
    int len;
public:
    Array();
    Array(Array &ref);
    Array(int n);
    Array &operator=(  Array &ref);
    int size(void);
    T& operator[](int index);
    const T& operator[](int index) const;
    ~ Array();
    class OutOfBoundsException : public std::exception {
        public:
            virtual const char* what() const throw() { return "Index is out of bounds";}
    };
};


template <typename T>
T& Array<T>::operator[](int index)
{
    if (index < this->len)
        return (this->element[index]);
    else
        throw OutOfBoundsException();
}

template <typename T>
Array<T>::Array()
{
    len = 0;
    this->element = NULL;
}

template <typename T>
Array<T>::Array( Array &ref)
{
    
    *this = ref;
}

template <typename T>
Array<T>::Array(int n)
{
   this->element =  new T[n];
    len = n;
}

template <typename T>
Array<T> &Array<T>::operator=(Array<T> &ref)
{
    int len = ref.size();
    int i = 0;
    delete[] this->element;
    this->element  = new T(len);

    while (i  < ref.size())
    {
        this->element[i] = ref.element[i];
        i++;
    }
    this->len = ref.len;
    return(*this);
}


template <typename T>
int Array<T>::size()
{
    return (this->len);
}

template <typename T>
Array<T>::~ Array()
{
    delete[] element;
}

#endif
