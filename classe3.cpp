#include <iostream>

using namespace std;

class Carro{
    private:

    int ano, km;
    float valor;
    
    public:

    Carro(int ano, int km, float valor);

    Carro();

    int getAno();

    int getKm();

    int getValor();

    void setAno(int ano);

    void setKm(int km);

    void setValor(int valor);

};

int main(){

    Carro Wolksvagem(1990, 200, 20000);
    cout << Wolksvagem.getAno() << endl;
    cout << Wolksvagem.getKm() << endl;
    cout << Wolksvagem.getValor() << endl;

    return 0;
}

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
