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