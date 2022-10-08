#include "eggs.h"
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
Eggs *List::getBegin(){return this->begin;}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
size_t List::getSize(){return this->size;}

void Eggs::setIdentifier(int identifier){
    if(identifier > 0){this->identifier = identifier;}
}

void Eggs::setPrice(float price){
    if(price > 0.0){this->price = price;}
}

void Eggs::setNext(Eggs *next){this->next = next;}

List::List(){
    this->size = 0;
    this->begin = NULL;
}

void List::setBegin(Eggs *egg){this->begin = egg;}

void List::sizeIncrement(size_t size){this->size += size;}

void List::add(int identifier, float price){
    Eggs *eggAlloc = new Eggs(identifier, price);
    eggAlloc->setNext(this->getBegin());
    this->setBegin(eggAlloc);
    this->sizeIncrement(1);
}

List::~List(){
    Eggs *previous = NULL, *actual = this->getBegin();
    while(actual != NULL){
        previous = actual, actual = actual->getNext();
        delete previous;
    }
    this->setBegin(NULL);
    this->sizeIncrement(-(this->getSize()));
}

float List::averagePrice(){
    float sumEggPrices = 0.0;
    Eggs *auxiliary = this->getBegin();
    while(auxiliary != NULL){
        sumEggPrices += auxiliary->getPrice();
        auxiliary = auxiliary->getNext();
    }
    return (sumEggPrices / this->getSize());
}

void List::searchPrice(){
    float priceHedging = this->averagePrice();
    Eggs *auxiliary = this->getBegin();
    std::cout << "+---------------------------------- RESULTADO ---------------------------------+" << std::endl << std::endl;
    while(auxiliary != NULL){
        if(auxiliary->getPrice() < (priceHedging / 2))
            std::cout << "Ovo de Páscoa " << auxiliary->getIdentifier() << ": TALVEZ DÊ PARA COMPRAR" << std::endl;
        else if(auxiliary->getPrice() <= priceHedging)
            std::cout << "Ovo de Páscoa " << auxiliary->getIdentifier() << ": ACHO QUE É MELHOR COMPRAR O VALOR EM BARRA DE CHOCOLATE" << std::endl;
        else
            std::cout << "Ovo de Páscoa " << auxiliary->getIdentifier() << ": MELHOR COMPRAR UMA BARRA DE OURO COM ESSE DINEHIRO" << std::endl;
        std::cout << std::endl <<"+------------------------------------------------------------------------------+" << std::endl << std::endl;
        auxiliary = auxiliary->getNext();
    }
}

/**************************************************************************************************************************************************/