#include "minheap.hpp"

MinHeap::MinHeap(int cap) {
    currentSize = 0;
    capacity = cap;
    heap = new <<type>>[capacity];
}

MinHeap::~MinHeap(){

    delete [] heap;
}

void MinHeap::push(<<type>> k){
    if (currentSize < capacity) {
        <<type>> temp;
        heap[currentSize] = k;
        i = currentSize;
        while(i != 0 && heap[parent(i)]  > heap[i]){
            temp = heap[i];
            heap[i] = heap[parent(i)];
            heap[parent(i)] = temp;
            i = parent(i);
        }

    } else {
        return;
    }
}

<<type>> MinHeap::pop(){
    if (currentSize == 1) {
        currentSize = 0;
        return heap[0];
    } else if (currentSize > 1) {
        <<type>> poppedVal = heap[0];
        heap[0] = heap[currentSize - 1];
        currentSize--;
        MinHeapify(0);
        return poppedVal;
    } else {
        return;
    }
}

void MinHeap::peek() {
    return heap[1];
}

void MinHeap::printHeap() {
    for(int i = 0; i < currentSize; i++) {
        std::cout << heap[i] << " ";
    }
}

void MinHeap::MinHeapify(int i) {
    MinHeapify(left(i));
    MinHeapify(right(i));
    if(i > currentSize - 1) {
        return;
    }
    int leftChild = left(i);
    int righthild = right(i);

    int smallest = i;

    if (heap[leftChild] < heap[i]) {
        smallest = leftChild;
    }

    if (heap[rightChild] < heap[smallest]) {
        MinHeapifty(smallest);
    }
}

int MinHeap::parent(int i){
    return (i-1)/2;
}

int MinHeap::left(int i){
    return (2*i+1);
}

int MinHeap::right(int i){
    return (2*i+2);
}
