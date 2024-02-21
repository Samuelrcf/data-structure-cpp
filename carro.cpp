    #include <iostream>
    #include "carro.h"

    using namespace std;
    
    Carro::Carro(int ano, int km, float valor){
        this->ano = ano;
        this->km = km;
        this->valor = valor;

    }

    Carro::Carro(){

    }

    int Carro::getAno(){
        return this->ano;
    }

    int Carro::getKm(){
        return this->km;
    }

    int Carro::getValor(){
        return this->valor;
    }

    void Carro::setAno(int ano){
        this->ano = ano;
    }

    void Carro::setKm(int km){
        this->km = km;
    }

    void Carro::setValor(int valor){
        this->valor = valor;
    }