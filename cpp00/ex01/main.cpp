#include "PhoneBook.hpp"

int main ()
{
    std::string command;
    PhoneBook Repertoire;
    int count = 0;
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
            std::cout<<"ENTER THE PHONENUMBER>> ";
            std::getline(std::cin, PhoneNumber);
            std::cout << std::endl;
            std::cout<<"ENTER THE FIRSTNAME >> ";
            std::getline(std::cin, FirstName);
            std::cout << std::endl;
            std::cout<<"ENTER THE LASTNAME >> ";
            std::getline(std::cin, LastName);
            std::cout << std::endl;
            std::cout<<"ENTER THE NICKNAME >> ";
            std::getline(std::cin, NickName);
            std::cout << std::endl;
            std::cout<<"ENTER THE DARKSECRET >> ";
            std::getline(std::cin, DarkestSecret);
            std::cout << std::endl;
            if (count >= 8)
                count = 0;
            if (FirstName.empty() || LastName.empty() || NickName.empty() || PhoneNumber.empty() || DarkestSecret.empty())
                std::cout<< "some fields are empty try again"<<std::endl;
            else
            {
                Contact c =  Contact(count,FirstName, LastName, NickName, PhoneNumber, DarkestSecret);
                Repertoire.ADD(c, count);
                count++;
            }
        }
        else if (command.compare("SEARCH") == 0)
        {
            Repertoire.DispalyAll();
            std::string in;
            int id;
            std::cout<<"ENTER THE INDEX OF THE CONTACT >> ";
            std::getline(std::cin, in);
            std::istringstream iss(in);
            if (iss >> id)
                Repertoire.SEARCH(atoi(in.c_str()));
            else
                std::cout << "Invalid input." << std::endl;
        }
        else if (command.compare("EXIT") == 0)
             exit(1);
        else
             std::cout<< "Command not fund"<< std::endl;
    }
}