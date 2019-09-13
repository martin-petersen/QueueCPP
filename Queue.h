#ifndef QUEUE_H
#define QUERE_H

#include <vector>
#include <iostream>

class Queue {
    std::vector<int> *queue;
    public:
        Queue();
        ~Queue();
        bool empty();
        int size();
        int front();
        int back();
        void push_back(int valor);
        void pop_front();
};
#endif