#pragma once
#include <iostream>
#include <string>

class Parameter{

    private:
    int myvar = 137;
    public:
    Parameter(){}
    virtual std::string toString() = 0;
    int myfunc(){
        return myvar;
    }
};