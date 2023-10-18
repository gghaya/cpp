#ifndef CLASSCONTACT_HPP
#define CLASSCONTACT_HPP
# include <iostream>

class Contact {
    private :
        int Index;
        std::string FirstName;
        std::string LastName;
        std::string NickName;
        std::string PhoneNumber;
        std::string DarkestSecret;
    public :
        Contact();
        Contact(int Index,std::string FirstName, std::string LastName, std::string NickName, std::string PhoneNumber, std::string DarkestSecret);
        int get_index();
        std::string get_FirstName ();
        std::string get_LastName();
        std::string get_NickName();
        std::string get_PhoneNumber();
        std::string get_DarkestSecret();

        void set_index(int id);
        void set_FirstName ( std::string FirstName);
        void set_LastName(std::string LastName);
        void set_NickName(std::string NickName);
        void set_PhoneNumber(std::string PhoneNumber);
        void set_DarkestSecret(std::string DarkestSecret);
};
#endif 
