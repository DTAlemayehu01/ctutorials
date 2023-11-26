#ifndef STACK_H_
#define STACK_H_
#include<iostream>
#include<string>

struct Node{
    std::string key;
    Node *next;
}

class Stack {
    private:
        Node* StackHead;
        int maxSize;
        int numOfElements;
    public;
        Stack();
        ~Stack();
        bool isEmpty();
        bool isFull();
        void push(std::string key);
        void pop();
        Node* peek();
        int size();
};
