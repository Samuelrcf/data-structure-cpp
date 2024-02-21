#include <iostream>
#include "pilhadinamica.h"
#include <cstddef>

using namespace std;

    PilhaDinamica::PilhaDinamica(){
        top = NULL;
    } // construtora

    PilhaDinamica::~PilhaDinamica(){
        Node * temp;
        while(top != NULL){
            temp = top;
            top = top->next;
            delete temp;
        }
    } // destrutora

    bool PilhaDinamica::isfull(){
        Node * newNode;
        try{
            newNode = new Node;
            delete newNode;
            return false;
        } catch(bad_alloc exception){
            return true;
        }
    } // verifica se a pilha está cheia

    bool PilhaDinamica::isempty(){
        return (top == NULL);
    }

    void PilhaDinamica::push(TipoItem item){
        if(!isfull()){
            Node * newNode = new Node;
            newNode->value = item;
            newNode->next = top;
            top = newNode;
        } else{
            cout << "A pilha está cheia\n";
            cout << "Não há espaço para ser utilizado.";
        }
    } // inserir

    TipoItem PilhaDinamica::pop(){
        if(!isempty()){
            Node * temp;
            temp = top;
            TipoItem item = top->value;
            top = top->next;
            delete temp;
            return item;
        } else{
            cout << "A pilha está vazia.\n";
            cout << "Não há elemento para ser removido.";
            return 0;
        }
    } // remover

    void PilhaDinamica::print(){
        Node * temp = top;
        cout << "Pilha Dinâmica: [ ";
        while(temp != NULL){
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << "]";
        cout << endl;
    }

    int PilhaDinamica::length(){
        int cont = 0;
        Node * temp;
        temp = top;
        while(temp != NULL){
            temp = temp->next;
            cont++;
        }
        return cont;
    } // tamanho