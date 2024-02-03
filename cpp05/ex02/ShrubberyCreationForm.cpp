#include "ShrubberyCreationForm.hpp"
#include <fstream>

void printSpaces(std::ofstream& file, int numSpaces) {
    for (int i = 0; i < numSpaces; ++i) {
        file << ' ';
    }
}

void printStars(std::ofstream& file, int numStars) {
    for (int i = 0; i < numStars; ++i) {
        file << '*';
    }
}

void printTree(std::ofstream& file, int levels) {
    for (int i = 0; i < levels; ++i) {
        printSpaces(file, levels - i - 1);
        printStars(file, 2 * i + 1);
        file << '\n';
    }
    printSpaces(file, levels - 1);
    file << '|';
    file << '\n';
}

void generateTreeToFile(const std::string& filename, int levels) {
    std::ofstream outputFile(filename);

    if (!outputFile.is_open()) {
        std::cerr << "Error: Unable to open file for writing." << std::endl;
        return;
    }

    printTree(outputFile, levels);

    outputFile.close();
}


ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): AForm("Shrubbery Creation", 145, 137)
{
    this->target = target;
}
std::string ShrubberyCreationForm::get_target()const
{
    return(this->target);
}

void ShrubberyCreationForm::execute(const Bureaucrat &B)
{
    std::string outputFile = get_target() + "_shrubbery";
    try{
        if (B.get_grade() > this->get_gradeToExecute())
            throw GradeTooLowException();
            generateTreeToFile(outputFile, 10);

    }
    catch (const GradeTooLowException& e) {
    std::cout << e.what() << std::endl;
    }
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &ref):AForm(ref), target(ref.target)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &ref)
{
    *this = ref;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
