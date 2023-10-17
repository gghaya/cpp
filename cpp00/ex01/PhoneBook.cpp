#include "ClassPhoneBook.hpp"
void displayContact(Contact contact)
{
        std::cout << "Index " <<contact.get_index() << "|";
        std::cout << "FirstName: " << contact.get_FirstName() << "|";
        std::cout << "LastName: " << contact.get_LastName() << "|";
        std::cout << "DarkestSecret: " << contact.get_DarkestSecret();
}
void PhoneBook::ADD(Contact c, int i)
{
    this->contacts[i - 1] = c;
}

 PhoneBook::PhoneBook()
{
    std::cout << "" << std::endl;
}

void PhoneBook::SEARCH(int index)
{
    if (index >= 1 && index <= 8)
        displayContact(this->contacts[index]);
    else
        std::cout<< "Contact not found";
}

void PhoneBook::DispalyAll()
{
    int i = 0;
    while (i < 8 &&this->contacts[i].get_index() > 0)
    {
        displayContact(this->contacts[i]);
        std::cout<<std::endl;
        i++;
    }
}
