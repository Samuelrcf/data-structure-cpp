#include <iostream>

using namespace std;

int main(){

    int tam;
    cout << "Digite o tamanho do vetor: " << endl;
    cin >> tam;

    int * vetor = new int[tam];

    int n;
    for (int i=0; i<tam; i++){
        cout << "Digite o valor " << i+1 << " do vetor: " << endl;
        cin >> n;
        vetor[i] = n;
    }

    cout << "[";
    for (int i=0; i<tam; i++){
        cout << vetor[i] << " ";
    }
    cout << "]";

    delete [] vetor;

    return 0;
}