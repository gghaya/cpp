#include "PhoneBook.hpp"

void print_menu()
{
    std::cout << "choice one of those commands "<< std::endl;
    std::cout << "ADD   :  Use this command to include a new contact to the list."<< std::endl;
    std::cout << "SEARCH:  Utilize this command to find existing contacts in the list."<< std::endl;
    std::cout << "EXIT  :  to exit from the program."<< std::endl;
}

int is_empty(std::string str)
{
    int i = 0;
    if (str.empty())
        return (0);
    while (str[i])
    {
        if (str[i] == ' ')
            i++;
        else
            return (1);
        i++;
    }
    return (0);
}
std::string PrintAndFill(std::string s, std::string gets)
{
    std::cout<<s;
    std::getline(std::cin, gets);
    std::cout << std::endl;
    return (gets);
}
int save_contact (int count, PhoneBook *Repertoire)
{
    std::string FirstName;
    std::string LastName;
    std::string NickName;
    std::string PhoneNumber;
    std::string DarkestSecret;
    FirstName = PrintAndFill("Enter the first name >> ", FirstName);
    while (is_empty(FirstName) == 0)
        FirstName = PrintAndFill("Enter the first name >> ", FirstName);
    LastName = PrintAndFill("Enter the last name >> ", LastName);
    while (is_empty(LastName) == 0)
        LastName = PrintAndFill("Enter the last name >> ", LastName);
    NickName = PrintAndFill("Enter the nick name >> ", NickName);
    while(is_empty(NickName) == 0)
        NickName = PrintAndFill("Enter the nick name >> ", NickName);
    DarkestSecret = PrintAndFill("Enter the Darkest Secret >> ", DarkestSecret);
    while (is_empty(DarkestSecret) == 0)
        DarkestSecret = PrintAndFill("Enter the Darkest Secret >> ", DarkestSecret);
    PhoneNumber = PrintAndFill("Enter the Phone Number >>", PhoneNumber);
    while (is_empty(PhoneNumber) == 0)
        PhoneNumber = PrintAndFill("Enter the Phone Number >>", PhoneNumber);
    if (count >= 8)
        count = 0;
    Contact c =  Contact(count,FirstName, LastName, NickName, PhoneNumber, DarkestSecret);
    Repertoire->ADD(c, count);
    count++;
    return (count);
}

void search_conta(PhoneBook *Repertoire)
{
    std::string in;
    int id;
    std::cout<<"enter the index >> ";
    std::getline(std::cin, in);
    std::istringstream iss(in);
    if (iss >> id)
        Repertoire->SEARCH(atoi(in.c_str()));
    else
        std::cout << "Invalid input" << std::endl;
}
int main ()
{
    std::string command;
    PhoneBook Repertoire;
    int count = 0;
    print_menu();
    while(std::cin.good())
    {
        std::cout<<"Enter a command >> ";
        std::getline(std::cin, command);
        std::cout << std::endl;
        if (command.compare("ADD") == 0)
            count = save_contact (count, &Repertoire);
        else if (command.compare("SEARCH") == 0)
        {
            Repertoire.DispalyAll();
            search_conta(&Repertoire);
        }
        else if (command.compare("EXIT") == 0)
             exit(1);
        else if (is_empty(command) == 0)
             std::cout<< std::endl;
        else
            std::cout<< "Command not found"<< std::endl;
    }
}