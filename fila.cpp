#include <iostream>
#include "fila.h"

using namespace std;

    Fila::Fila(){
        first = 0;
        last = 0;
        estrutura = new TipoItem[max_itens];
    } // construtora

    Fila::~Fila(){
        delete [] estrutura;
    } // destrutora

    bool Fila::isfull(){
        return (last - first == max_itens);
    } // verifica se a pilha está cheia

    bool Fila::isempty(){
        return (first == last);
    }

    void Fila::push(TipoItem item){
        if(!isfull()){
            estrutura[last%max_itens] = item;
            last++;
        } else{
            cout << "A fila está cheia\n";
            cout << "Não há espaço para ser utilizado.";
        }
    } // inserir

    TipoItem Fila::pop(){
        if(!isempty()){
            first++;
            return estrutura[(first-1) % max_itens];
        } else{
            cout << "A fila está vazia.\n";
            cout << "Não há elemento para ser removido.\n";
            return 0;
        }
    } // remover

    void Fila::print(){
        cout << "Fila: [ ";
        for (int i=first; i<last; i++){
            cout << estrutura[i] << " ";
        }
        cout << "]\n";
    }

    int Fila::length(){
        return last-first;
    } // tamanho

