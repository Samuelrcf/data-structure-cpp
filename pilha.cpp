#include <iostream>
#include "pilha.h"

using namespace std;

    Pilha::Pilha(){
        tam = 0;
        estrutura = new TipoItem[max_itens];
    } // construtora

    Pilha::~Pilha(){
        delete [] estrutura;
    } // destrutora

    bool Pilha::isfull(){
        return (tam == max_itens);
    } // verifica se a pilha está cheia

    bool Pilha::isempty(){
        return (tam == 0);
    }

    void Pilha::push(TipoItem item){
        if(!isfull()){
            estrutura[tam] = item;
            tam++;
        } else{
            cout << "A pilha está cheia\n";
            cout << "Não há espaço para ser utilizado.";
        }
    } // inserir

    TipoItem Pilha::pop(){
        if(!isempty()){
            tam--; // mesmo eu removendo essa posição do vetor, o conteudo que está nessa posição, continua armazenado ou é deletado?
            return estrutura[tam];
        } else{
            cout << "A pilha está vazia.\n";
            cout << "Não há elemento para ser removido.";
            return 0;
        }
    } // remover

    void Pilha::print(){
        cout << "Pilha: [ ";
        for (int i=0; i<tam; i++){
            cout << estrutura[i] << " ";
        }
        cout << "]\n";
    }

    int Pilha::length(){
        return tam;
    } // tamanho