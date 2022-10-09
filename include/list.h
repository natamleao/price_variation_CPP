/*************************************************************** PUBLIC INTERFACE *****************************************************************/

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
        void getSizeIncrement(size_t size); 
        void setSize(size_t size);
        void setBegin(Eggs *egg);
        void add(int identifier, float price);
        float averagePrice();
        void searchPrice();
        ~List();
};

#endif

/**************************************************************************************************************************************************/