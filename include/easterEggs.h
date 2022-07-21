/*************************************************************** PUBLIC INTERFACE *****************************************************************/

#ifndef EASTEREGGS_H
#define EASTEREGGS_H

#include <stddef.h>

class EasterEggs{
    private:
        int identifier;
        float price;
        EasterEggs *next;
    public:
        EasterEggs(int identifier, float price);
        int getIdentifier();
        void setIdentifier(int identifier);
        float getPrice();
        void setPrice(float price);
        EasterEggs *getNext();
        void setNext(EasterEggs *next);
};

class List{
    private:
        size_t size;
        EasterEggs *begin;
    public:
        List();
        size_t getSize();
        void setSize(size_t size);
        EasterEggs *getBegin();
        void setBegin(EasterEggs *egg);
        bool ListIsEmpty();
        void ListAdd(int identifier, float price);
        void ListDestroy();
        float ListEggsAveragePrice();
        void ListEggsSearchPrice();
};

#endif

/**************************************************************************************************************************************************/