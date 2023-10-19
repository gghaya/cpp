#ifndef CLASSPHONEBOOK_HPP
#define CLASSPHONEBOOK_HPP
#include <iostream>
#include <string>
#include <cstdlib> 
#include "Contact.hpp"
#include <sstream>
#include <iomanip>

class PhoneBook {
    private :
        Contact contacts[8];
    public:
        PhoneBook();
        void ADD (Contact contact, int count);
        void SEARCH(int index);
        void DispalyAll();
        void displayContact(Contact contact, int i);
        void disp_ten(std::string str, int i);
        void display_allfields(Contact contact);
};

#endif 
