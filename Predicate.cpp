#include "Predicate.h"

Predicate::Predicate(){}

Predicate::Predicate(string ID, vector<Parameter*> parameters){
    this->ID = ID;
    this->parameters = parameters;
}

std::string Predicate::toString(){
    string text = ID + "(";
    for (unsigned int i = 0; i < parameters.size(); i++){
        //text += parameters[i]->toString();
        text += "(Temporary Param)";
    }
    text += ")\n";
    return text;
}