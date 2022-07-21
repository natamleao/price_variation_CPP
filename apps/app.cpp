#include "easterEggs.h"
#include <iostream>

int main(){

    List *listEggs = new List();

    int numberEggs, identifier;
    float price;

    std::cout << "+----------------------------- ADICIONAR NA LISTA -----------------------------+" << std::endl << std::endl;
    std::cout << "INFORME A QUANTIDADE DE OVOS: ";
    std::cin >> numberEggs;
    std::cout << std::endl;
    for(int i = 0; i < numberEggs; i++){
        std::cout << "INFORME O IDENTIFICADOR E O PREÇO DO " << (i + 1) << "º OVO: ";
        std::cin >> identifier, std::cin >> price;
        listEggs->ListAdd(identifier, price);
    }

    listEggs->ListEggsSearchPrice();

    return 0;
}