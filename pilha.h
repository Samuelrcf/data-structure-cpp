typedef int TipoItem;
const int max_itens = 100;

class Pilha{

    private:

        int tam;
        TipoItem * estrutura;

    public:

    Pilha(); // construtora
    ~Pilha(); // destrutora
    bool isfull(); // verifica se a pilha está cheia
    bool isempty();
    void push(TipoItem item); // inserir
    TipoItem pop(); // remover
    void print();
    int length(); // tamanho

};