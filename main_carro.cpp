#include <iostream>
#include "carro.h"

using namespace std;

int main(){

    Carro Wolksvagem(1990, 200, 20000);
    cout << Wolksvagem.getAno() << endl;
    cout << Wolksvagem.getKm() << endl;
    cout << Wolksvagem.getValor() << endl;

    return 0;
}