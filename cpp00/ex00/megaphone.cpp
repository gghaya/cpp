#include<iostream>
#include <cctype>

std::string UpperCaseStr(std::string s)
{
    int i = 0;
    while (s[i])
    {
        s[i] = toupper(s[i]);
        i++;
    }
    return (s);
}
void Megaphone (char **av, int ac)
{
    int i = 1;
     while (i < ac)
        {
            std::cout << UpperCaseStr(av[i]);
            i++;
        }
}

int main (int ac, char **av)
{
    // av[1] = (char * )"ghaya ghizlane";
    // av[2] = (char *)" hello cpp";
    // ac = 2;
   if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
       Megaphone (av, ac);
    }
     std::cout << "\n";
}