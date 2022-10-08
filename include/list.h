#ifndef LIST_H
#define LIST_H

#include "eggs.h"

class List{
    private:
        size_t size;
        Eggs *begin;
    public:
        List();
        size_t getSize();
        Eggs *getBegin();
        void setBegin(Eggs *egg);
        void add(int identifier, float price);
        void sizeIncrement(size_t size);
        float averagePrice();
        void searchPrice();
        ~List();
};

#endif