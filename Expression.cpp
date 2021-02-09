#include "Expression.h"



Expression::Expression(Parameter *Left, string _operator, Parameter *Right){
    this->Left = Left;
    this->_operator = _operator;
    this->Right = Right;
}

string Expression::toString(){
    return Left->toString() + _operator + Right->toString();
}