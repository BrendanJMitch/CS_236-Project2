#include "Id.h"

Id::Id(string name){
    this->name = name;
}

string Id::toString(){
    cout << "Added an ID" << endl;
    return name;
}

