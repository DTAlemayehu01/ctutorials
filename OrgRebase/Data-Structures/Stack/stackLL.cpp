#include "stackLL.hpp"

Stack::Stack(){
    StackHead = nullptr;
    numOfElements = 0;
    std::cout << " Enter a max size: " << std::endl;
    cin >> maxSize;
}

Stack::~Stack(){
    Node* crawler = StackHead;
    while(crawler != nullptr){
        crawler = crawler->next;
        delete StackHead;
        StackHead = crawler;
    }
}



bool Stack::isFull(){
    if(numOfElements == maxSize) {
        return true;
    } else {
        return false;
    }
}

void Stack::push(std::string key){
    Node* newNode = new Node;
    Node->key = key;
    if(isEmpty()){
        StackHead = newNode;
        StackHead->next = nullptr;
    } else if (!isFull()){
        newNode->next = StackHead;
        StackHead = newNode;
    }
}

void Stack::pop(){
    if(!isEmpty()){
        Node* deleteNode = StackHead;
        StackHead = StackHead -> next;
        delete deleteNode;
        deleteNode = nullptr;
    }
}

Node* Stack::peek(){
    return StackHead;
}

int Stac::size(){
    return numOfElements;
}
