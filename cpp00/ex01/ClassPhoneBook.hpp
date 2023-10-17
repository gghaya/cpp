#ifndef CLASSPHONEBOOK_HPP
#define CLASSPHONEBOOK_HPP
#include <iostream>
#include <string>
# include <sstream>
#include<stdlib.h>
#include "ClassContact.hpp"

class PhoneBook {
    private :
        Contact contacts[8];
    public:
        PhoneBook();
        void ADD (Contact contact, int index);
        void SEARCH(int index);
        void DispalyAll();
};

#endif 
