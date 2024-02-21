#include <iostream>
#include "pilha.h"

using namespace std;

int main(){

    Pilha pilha1;
    TipoItem item;
    int opcao;
    int length_pilha;
    cout << "Programa para gerar pilha:\n";

    do {
        cout << "Digite 0 para parar o programa.\n";
        cout << "Digite 1 para inserir um elemento.\n";
        cout << "Digite 2 para remover um elemnto.\n";
        cout << "Digite 3 para imprimir a pilha.\n";
        cout << "Digite 4 para verificar o tamanho da pilha.\n";

        cin >> opcao;

        switch (opcao){
            case 1:
                cout << "Digite o elemento a ser inserido:\n";
                cin >> item;
                pilha1.push(item);
                break;

            case 2:
                item = pilha1.pop();
                cout << "Elemento removido: " << item << endl;
                break;

            case 3:
                pilha1.print();
                break;

            case 4:
                length_pilha = pilha1.length();
                cout << "A pilha possui " << length_pilha << " elementos" << endl;
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