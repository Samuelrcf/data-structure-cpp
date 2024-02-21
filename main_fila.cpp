#include <iostream>
#include "fila.h"

using namespace std;

int main(){

    Fila fila1;
    TipoItem item;
    int opcao;
    int length_fila;
    cout << "Programa para gerar fila:\n";

    do {
        cout << "Digite 0 para parar o programa.\n";
        cout << "Digite 1 para inserir um elemento.\n";
        cout << "Digite 2 para remover um elemnto.\n";
        cout << "Digite 3 para imprimir a fila.\n";
        cout << "Digite 4 para verificar o tamanho da fila.\n";

        cin >> opcao;

        switch (opcao){
            case 1:
                cout << "Digite o elemento a ser inserido:\n";
                cin >> item;
                fila1.push(item);
                break;

            case 2:
                item = fila1.pop();
                cout << "Elemento removido: " << item << endl;
                break;

            case 3:
                fila1.print();
                break;

            case 4:
                length_fila = fila1.length();
                cout << "A fila possui " << length_fila << " elementos" << endl;
                break;
            
            case 0:
                cout << "Programa encerrado.\n";
                break;

            default:
                cout << "Opção inválida. Tente novamente." << endl;
                break;

        }

    } while(opcao !=0);

    return 0;
}