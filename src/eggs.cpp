#include "../include/eggs.h"
#include <iostream>

/*************************************************************** PRIVATE INTERFACE ****************************************************************/

Eggs::Eggs(int identifier, float price){
    this->setIdentifier(identifier);
    this->setPrice(price);
    this->setNext(NULL);
}

int Eggs::getIdentifier(){return this->identifier;}

float Eggs::getPrice(){return this->price;}

Eggs *Eggs::getNext(){return this->next;}

void Eggs::setIdentifier(int identifier){
    if(identifier > 0){this->identifier = identifier;}
    else{
        std::cout << "ERRO em setIdentifier" << std::endl;
        std::cout << "O identificador é menor que zero (0)" << std::endl;
        exit(EXIT_FAILURE);   
    }
}

void Eggs::setPrice(float price){
    if(price > 0.0){this->price = price;}
    else{
        std::cout << "ERRO em setPrice" << std::endl;
        std::cout << "O preço é menor que zero (0)" << std::endl;
        exit(EXIT_FAILURE);   
    }
}

void Eggs::setNext(Eggs *next){this->next = next;}

/**************************************************************************************************************************************************/