#include <iostream>

using namespace std;

int main(){

    int vect[4] = {5, 10, 15};
    //int vect[] = {5, 10, 15}; // quando não definimos o tamanho, ele aloca o tamanho de acordo com a quantidade de valores
    //vect[0] = 5;
    //vect[1] = 10;
    //vect[2] = 15;

    //cout << vect << endl;
    //cout << &vect[0] << endl;
    //cout << vect[0] << endl;
    //cout << vect[1] << endl;
    //cout << vect[2] << endl;
    //cout << vect[3] << endl; // vira 0, já que não foi declarado na inicialização

    for (int i=0; i<4; i++){
        cout << vect[i] << endl;
    }

    int x = sizeof(vect);
    cout << "Tamanho do vetor: " << x << endl;

    return 0;
}