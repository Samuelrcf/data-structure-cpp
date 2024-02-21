#include <iostream>
#include "filadinamica.h"
#include <cstddef>
#include <new>

using namespace std;

    FilaDinamica::FilaDinamica(){
        first = NULL;
        last = NULL;
    } // construtora

    FilaDinamica::~FilaDinamica(){
        Node * temp;
        while(first != NULL){
            temp = first;
            first = first->next;
            delete temp;
        }
        last = NULL;
    } // destrutora

    bool FilaDinamica::isfull(){
        Node * newNode;
        try{
            newNode = new Node;
            delete newNode;
            return false;
        } catch(bad_alloc exception){
            return true;
        }
    } // verifica se a pilha está cheia

    bool FilaDinamica::isempty(){
        return (first == NULL);
    }

    void FilaDinamica::push(TipoItem item){
        if(!isfull()){
            Node * newNode = new Node;
            newNode->value = item;
            newNode->next = NULL;
            if(first == NULL){
                first = newNode;
            }else{
                last->next = newNode;
            }
            last = newNode;
        } else{
            cout << "A pilha está cheia\n";
            cout << "Não há espaço para ser utilizado.";
        }
    } // inserir

    TipoItem FilaDinamica::pop(){
        if(!isempty()){
            Node * temp;
            temp = first;
            TipoItem item = first->value;
            first = first->next;
            if(first == NULL){
                last = NULL;
            }
            delete temp;
            return item;
        } else{
            cout << "A pilha está vazia.\n";
            cout << "Não há elemento para ser removido.";
            return 0;
        }
    } // remover

    void FilaDinamica::print(){
        Node * temp = first;
        cout << "Fila Dinâmica: [ ";
        while(temp != NULL){
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << "]";
        cout << endl;
    }

    int FilaDinamica::length(){
        int cont = 0;
        Node * temp;
        temp = first;
        while(temp != NULL){
            temp = temp->next;
            cont++;
        }
        return cont;
    } // tamanho