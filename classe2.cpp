#include <iostream>

using namespace std;

class Carro{
    private:

    int ano, km;
    float valor;
    
    public:

    int getAno(){
        return this->ano;
    }

    int getKm(){
        return this->km;
    }

    int getValor(){
        return this->valor;
    }

    void setAno(int ano){
        this->ano = ano;
    }

    

};

int main(){

    Carro Wolksvagem;
    Wolksvagem.setAno(1990);
    cout << Wolksvagem.getAno();

    return 0;
}