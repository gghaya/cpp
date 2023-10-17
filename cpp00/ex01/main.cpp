#include "ClassPhoneBook.hpp"

int main ()
{
    std::string command;
    PhoneBook Repertoire;
    while(std::cin.good())
    {
        std::cout<<"ENTER A COMMAND >> ";
        std::getline(std::cin, command);
        std::cout << std::endl;
        if (command.compare("ADD") == 0)
        {
            int Index;
            std::string FirstName;
            std::string LastName;
            std::string NickName;
            std::string PhoneNumber;
            std::string DarkestSecret;
            std::cout<<"ENTER THE Index OF THE CONTACT>> ";
            std::cin>>Index;
            std::cin.ignore();
            std::cout << std::endl;
            std::cout<<"ENTER THE PhoneNUMBER OF THE CONTACT>> ";
            std::getline(std::cin, PhoneNumber);
            std::cout << std::endl;
            std::cout<<"ENTER THE FIRSTNAME OF THE CONTACT>> ";
            std::getline(std::cin, FirstName);
            std::cout << std::endl;
            std::cout<<"ENTER THE LASTNAME OF THE CONTACT>> ";
            std::getline(std::cin, LastName);
            std::cout << std::endl;
            std::cout<<"ENTER THE NICKNAME OF THE CONTACT>> ";
            std::getline(std::cin, NickName);
            std::cout << std::endl;
            std::cout<<"ENTER THE DARKSECRET OF THE CONTACT>> ";
            std::getline(std::cin, DarkestSecret);
            std::cout << std::endl;
            Contact c =  Contact(1,FirstName, LastName, NickName, PhoneNumber, DarkestSecret);
            Repertoire.ADD(c, Index);
            std::cout << FirstName<<std::endl;

        }
        else if (command.compare("SEARCH") == 0)
        {
            Repertoire.DispalyAll();
            int in;
            std::cout<<"ENTER THE INDEX OF THE CONTACT>> ";
            std::cin>>in;
            std::cin.ignore();
            Repertoire.SEARCH(in);
        }
        else if (command.compare("EXIT") == 0)
        {
             std::cout<< "EXIT";
             exit(0);
        }
        else
        {
             std::cout<< "Command not fund"<< std::endl;
        }
    }
}