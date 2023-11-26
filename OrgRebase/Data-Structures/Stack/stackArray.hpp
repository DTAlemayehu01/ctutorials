#ifndef STACK_H_
#define STACK_H_
#include<iostream>
#include<string>

class Stack {
    private:
        int maxSize;
        int StackHead;
        int numOfElments;
        type *stack;
    public;
        Stack();
        Stack(int size);
        ~Stack();
        bool isEmpty();
        bool isFull();
        void push(type key);
        void pop();
        Node* peek();
        int size();
};
