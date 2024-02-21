#include <iostream>

using namespace std;

int main(){

    int matriz[3][3];

    matriz[0][0] = 11;
    matriz[0][1] = 12;
    matriz[0][2] = 13;
    matriz[1][0] = 21;
    matriz[1][1] = 22;
    matriz[1][2] = 23;
    matriz[2][0] = 31;
    matriz[2][1] = 32;
    matriz[2][2] = 33;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}