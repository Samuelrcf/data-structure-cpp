#include <iostream>

using namespace std;

class Anuncio{
    private:



    public:

    void inscrever(){
        cout << "Visite o meu GitHub\n";
    }

    void curta(){
        cout << "Dê estrela no meu GitHub";
    }

};

int main(){

    Anuncio anuncio;
    anuncio.inscrever();
    anuncio.curta();

    return 0;
}