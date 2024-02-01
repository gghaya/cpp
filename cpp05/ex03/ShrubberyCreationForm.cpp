#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): AForm("ShrubberyCreationForm", 145, 137)
{
    this->target = target;
}
std::string ShrubberyCreationForm::get_target()const
{
    return(this->target);
}

void ShrubberyCreationForm::execute(const Bureaucrat &B)
{
    std::string filename = get_target() + "_shrubbery";
    std::ofstream outFile(filename);
    try{
        if (B.get_grade() > this->get_gradeToExecute())
            throw GradeTooLowException();
        if (outFile.is_open()) {
            outFile << "ASCII trees content here..." << std::endl;
            outFile.close();
        } 
        else {
            throw std::runtime_error("Error opening file for shrubbery creation");
        }
    }
    catch (const GradeTooLowException& e) {
    std::cout << e.what() << std::endl;
    }
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
