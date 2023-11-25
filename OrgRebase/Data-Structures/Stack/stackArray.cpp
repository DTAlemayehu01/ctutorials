#include "stackArray.hpp"

Stack::Stack(){
    StackHead = -1;
    numOfElements = 0;
    std::cout << " Enter a max size: " << std::endl;
    cin >> maxSize;
    stack = new int [maxSize];
}

Stack::~Stack(){
    delete[] stack;
}



bool Stack::isFull(){
    if(StackHead+1 == maxSize) {
        return true;
    } else {
        return false;
    }
}

void Stack::push(std::string key){
    if(!isFull()){
        StackHead++;
        stack[StackHead] = key;
    }
}

void Stack::pop(){
    if(!isEmpty()){
        StackHead--;
    }
}

Node* Stack::peek(){
    return stack[StackHead];
}
