#include <iostream>
#include "Queue.h"

Queue::Queue(){
    queue = new std::vector<int>();
}
Queue::~Queue(){
    delete queue;
}
bool Queue::empty(){
    if(queue->size()==0){
        return false;
    }
    return true;
}

int Queue::size(){
    return queue->size();
}

int Queue::front(){
    if(queue->size()!=0){
        return queue->front();
    }
    std::cout << "Sem elemento\n";
}

int Queue::back(){
    if(queue->size()!=0){
        return queue->back();
    }
    std::cout << "Sem elemento\n";
}

void Queue::push_back(int valor){
    queue->push_back(valor);
}

void Queue::pop_front(){
    if(queue->size()==1) {
        queue->pop_back();
    }
    else if(queue->size()>1) {
        int var;
        std::vector<int>::iterator it;
        it = queue->begin();
        for(int i=0; i < queue->size()-1; ++i) {
            var = queue->back();
            queue->pop_back();
            queue->insert(it,1,var);
        }
        queue->pop_back();
    } else {
        std::cout << "Sem elementos\n";
    }
}

