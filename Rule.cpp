#include "Rule.h"

Rule::Rule(Predicate headPredicate, vector<Predicate> bodyPredicates){
    this->headPredicate = headPredicate;
    this->bodyPredicates = bodyPredicates;
}

std::string Rule::toString(){
    return "";
}