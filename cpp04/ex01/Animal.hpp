#if !defined(ANIMAL_HPP)
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
    std::string type;
public:
    Animal(/* args */);
    Animal(const Animal &ref);
    Animal &operator=(const Animal &ref);
    virtual ~Animal();
    std::string getType () const;
    virtual void makeSound() const;
};


#endif 
