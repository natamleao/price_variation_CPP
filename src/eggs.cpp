#include "../include/eggs.h"
#include <iostream>

/*************************************************************** PRIVATE INTERFACE ****************************************************************/

Eggs::Eggs(int identifier, float price){
    this->identifier = identifier;
    this->price = price;
    this->next = NULL;
}

int Eggs::getIdentifier(){return this->identifier;}
float Eggs::getPrice(){return this->price;}
Eggs *Eggs::getNext(){return this->next;}

void Eggs::setIdentifier(int identifier){
    if(identifier > 0){this->identifier = identifier;}
}

void Eggs::setPrice(float price){
    if(price > 0.0){this->price = price;}
}

void Eggs::setNext(Eggs *next){this->next = next;}

/**************************************************************************************************************************************************/