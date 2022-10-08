/*************************************************************** PUBLIC INTERFACE *****************************************************************/

#ifndef EGGS_H
#define EGGS_H

#include <stddef.h>
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
class Eggs{
    private:
        int identifier;
        float price;
        Eggs *next;
    public:
        Eggs(int identifier, float price);
        int getIdentifier();
        void setIdentifier(int identifier);
        float getPrice();
        void setPrice(float price);
        Eggs *getNext();
        void setNext(Eggs *next);
};

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

/**************************************************************************************************************************************************/