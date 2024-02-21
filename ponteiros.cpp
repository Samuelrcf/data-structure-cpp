#include <iostream>
#include <cstddef>

using namespace std;

int main(){
    int var1;
    int * pont1;
    var1 = 5;
    pont1 = &var1;

    cout << "ENDEREÇO ARMAZENADO NO PONTEIRO: " << pont1 << endl; 
    cout << "VALOR DA VARIÁVEL NO PONTEIRO: " << *pont1 << endl;

    //int var2;

    //var2 = *pont1;
    //cout << var2;

    //*pont1 = 30;
    //cout << var1;

    //var2 = 100;
    //pont1 = &var2;
    //cout << *pont1;

    //int * pont2;
    //pont2 = NULL;
    //cout << *pont2;

    int *pont3 = new int;
    *pont3 = 10;
    cout << *pont3 << endl;

    //*pont3 = *pont1;
    delete pont3;
    pont3 = pont1;
    cout << *pont3;

    return 0;
}