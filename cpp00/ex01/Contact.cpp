#include "Contact.hpp"

Contact::Contact()
{
   std::cout<<"";
}

Contact::Contact(int Index, std::string FirstName, std::string LastName,
                 std::string NickName, std::string PhoneNumber, std::string DarkestSecret)
{
    this->Index = Index;
    this->FirstName = FirstName;
    this->LastName = LastName;
    this->NickName = NickName;
    this->PhoneNumber = PhoneNumber;
    this->DarkestSecret = DarkestSecret;
 }
void Contact::set_index(int id)
{
    this->Index = id;
}
int Contact::get_index()
{
   return (this->Index);
}

void Contact::set_DarkestSecret(std::string DarkestSecret)
{
    this->DarkestSecret = DarkestSecret;
}
std::string Contact::get_DarkestSecret()
{
   return (this->DarkestSecret);
}

void Contact::set_LastName(std::string LastName)
{
    this->LastName = LastName;
}
std::string Contact::get_LastName()
{
   return (this->LastName);
}

 void Contact::set_FirstName ( std::string FirstName)
 {
    this->FirstName = FirstName;
 }
 std::string Contact::get_FirstName ()
 {
    return (FirstName);
 }

void Contact::set_NickName(std::string NickName)
{
    NickName = NickName;
}
std::string  Contact::get_NickName()
{
    return (NickName);
}

void Contact::set_PhoneNumber(std::string PhoneNumber)
{
    PhoneNumber = PhoneNumber;
}
 std::string Contact::get_PhoneNumber()
 {
    return (PhoneNumber);
 }
