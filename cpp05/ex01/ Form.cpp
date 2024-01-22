#include " Form.hpp"

Form::Form(): name("default Form")
{
}

Form::Form(const std::string &name,bool signedStatus, const int gradeToSign, const int gradeToExecute): name(name) , gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    this.signedStatus = signedStatus;
}

Form::Form(const Form &ref)
{
    
}

Form &Form::operator=(const Form &ref)
{
    // TODO: insert return statement here
}

Form::~Form()
{
}

bool Form::get_signedStatus()
{
    return false;
}

int Form::get_gradeToSign()
{
    return 0;
}

int Form::get_gradeToExecute()
{
    return 0;
}
