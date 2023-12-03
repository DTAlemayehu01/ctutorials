#ifndef MINHEAP_H_
#define MINHEAP_H_
#include<iostream>
#include<string>

class MinHeap {
    public:
        MinHeap(int cap);
        ~MinHeap();
        void push(std::string k);
        int pop();
        int peek();
        void printHeap();
    private:
        int *heap;
        int capacity;
        int currentSize;
        void MinHeapify(int index);
        int parent(int i);
        int right(int i);
        int left(int i);
};
