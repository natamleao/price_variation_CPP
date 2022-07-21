#include "easterEggs.h"
#include <iostream>

/*************************************************************** PRIVATE INTERFACE ****************************************************************/

EasterEggs::EasterEggs(int identifier, float price){
    this->identifier = identifier;
    this->price = price;
    this->next = NULL;
}

int EasterEggs::getIdentifier(){
    return this->identifier;
}

void EasterEggs::setIdentifier(int identifier){
    this->identifier = identifier;
}

float EasterEggs::getPrice(){
    return this->price;
}

void EasterEggs::setPrice(float price){
    this->price = price;
}

EasterEggs *EasterEggs::getNext(){
    return this->next;
}
void EasterEggs::setNext(EasterEggs *next){
    this->next = next;
}

List::List(){
    this->size = 0;
    this->begin = NULL;
}

size_t List::getSize(){
    return this->size;
}

void List::setSize(size_t size){
    this->size += size;
}

EasterEggs *List::getBegin(){
    return this->begin;
}

void List::setBegin(EasterEggs *egg){
    this->begin = egg;
}

bool List::ListIsEmpty(){
    return this->getSize() == 0;
}

void List::ListAdd(int identifier, float price){
    EasterEggs *newEgg = new EasterEggs(identifier, price);
    newEgg->setNext(this->getBegin());
    this->setBegin(newEgg);
    this->setSize(1);
}

void List::ListDestroy(){
    EasterEggs *previous = NULL, *actual = this->getBegin();
    while(actual != NULL){
        previous = actual, actual = actual->getNext();
        delete previous;
    }
    this->setBegin(NULL);
    this->setSize(-this->getSize());
}

float List::ListEggsAveragePrice(){
    float sumEggPrices = 0.0;
    EasterEggs *assistent = this->getBegin();
    while(assistent != NULL){
        sumEggPrices += assistent->getPrice();
        assistent = assistent->getNext();
    }
    return (sumEggPrices / this->getSize());
}

void List::ListEggsSearchPrice(){
    float priceHedging = this->ListEggsAveragePrice();
    EasterEggs *assistent = this->getBegin();
    while(assistent != NULL){
        if(assistent->getPrice() < (priceHedging / 2))
            std::cout << "Ovo de Páscoa " << assistent->getIdentifier() << ": TALVEZ DÊ PARA COMPRAR" << std::endl;
        else if(assistent->getPrice() <= priceHedging)
            std::cout << "Ovo de Páscoa " << assistent->getIdentifier() << ": ACHO QUE É MELHOR COMPRAR O VALOR EM BARRA DE CHOCOLATE" << std::endl;
        else
            std::cout << "Ovo de Páscoa " << assistent->getIdentifier() << ": NEM GOSTO DE CHOCOLATE MESMO, MELHOR COMPRAR UMA BARRA DE OURO COM ESSE DINEHIRO" << std::endl;
        assistent = assistent->getNext();
    }
}
/**************************************************************************************************************************************************/