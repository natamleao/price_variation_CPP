#include "../include/list.h"
#include <iostream>

/*************************************************************** PRIVATE INTERFACE ****************************************************************/

List::List(){
    this->size = 0;
    this->begin = NULL;
}

size_t List::getSize(){return this->size;}
Eggs *List::getBegin(){return this->begin;}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 

void List::setBegin(Eggs *egg){this->begin = egg;}

void List::add(int identifier, float price){
    Eggs *eggAlloc = new Eggs(identifier, price);
    eggAlloc->setNext(this->getBegin());
    this->setBegin(eggAlloc);
    this->sizeIncrement(1);
}

void List::sizeIncrement(size_t size){this->size += size;}

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

List::~List(){
    Eggs *previous = NULL, *actual = this->getBegin();
    while(actual != NULL){
        previous = actual, actual = actual->getNext();
        delete previous;
    }
    this->setBegin(NULL);
    this->sizeIncrement(-(this->getSize()));
}

/**************************************************************************************************************************************************/