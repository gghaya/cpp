#include "PhoneBook.hpp"
void PhoneBook::disp_ten(std::string str, int i)
{
    int j = 0;
    while (str[j] && j < 9)
    {
        std::cout<<str[j];
        j++;
    }
    if (str.length() > j + 1 && i == 0)
        std::cout<< ".";
    else
        std::cout << str.substr(j, str.length());
        
}
void PhoneBook::displayContact(Contact contact, int i)
{
        std::cout << "Index: " << contact.get_index()+ 1;
        std::cout << std::setw(11);
        std::cout << "  |  ";
        std::cout << "FirstName: " ;
        std::cout << std::setw(11 - contact.get_FirstName().length());
        disp_ten(contact.get_FirstName(),0) ;
        std::cout << "  |  ";
        std::cout << "LastName: " ;
        std::cout << std::setw(11 - contact.get_LastName().length());
        disp_ten(contact.get_LastName(),0);
        std::cout << "  |  ";
        std::cout << "DarkestSecret: ";
        std::cout << std::setw(11 - contact.get_DarkestSecret().length());
        disp_ten(contact.get_DarkestSecret(),0);
        std::cout<<std::endl;
}

void PhoneBook::display_allfields(Contact contact)
{
        std::cout << "Index        : " << contact.get_index()+ 1<<std::endl;
        std::cout << "FirstName    : " ;
        std::cout << contact.get_FirstName()<<std::endl;
        std::cout << "LastName     : " ;
        std::cout << contact.get_LastName()<<std::endl;
        std::cout << "DarkestSecret: ";
        std::cout << contact.get_DarkestSecret()<<std::endl;
        std::cout << "NickName     : ";
        std::cout << contact.get_NickName()<<std::endl;
        std::cout << "PhoneNumber  : ";
        std::cout << contact.get_PhoneNumber()<<std::endl;
}

void PhoneBook::ADD(Contact c, int count)
{
    this->contacts[count] = c;
}

 PhoneBook::PhoneBook()
{
}

void PhoneBook::SEARCH(int index)
{
    if (index >= 1 && index <= 8)
        display_allfields(this->contacts[index - 1]);
    else
        std::cout<< "Contact not found"<<std::endl;
}

void PhoneBook::DispalyAll()
{
    int i = 0;
    while (i < 8 && this->contacts[i].get_index() >= 0 && !this->contacts[i].get_PhoneNumber().empty())
    {
        displayContact(this->contacts[i], 0);
        std::cout<<std::endl;
        i++;
    }
}
