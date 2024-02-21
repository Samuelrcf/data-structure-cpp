typedef int TipoItem;
const int max_itens = 100;

class Fila{

    private:

        int first, last;
        TipoItem * estrutura;

    public:

    Fila(); // construtora
    ~Fila(); // destrutora
    bool isfull(); // verifica se a pilha está cheia
    bool isempty();
    void push(TipoItem item); // inserir
    TipoItem pop(); // remover
    void print();
    int length(); // tamanho

};