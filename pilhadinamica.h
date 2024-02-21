typedef int TipoItem;

struct Node{
    TipoItem value;
    Node * next;
};

class PilhaDinamica{

    private:

    Node * top;

    public:

    PilhaDinamica(); // construtora
    ~PilhaDinamica(); // destrutora
    bool isfull(); // verifica se a pilha está cheia
    bool isempty();
    void push(TipoItem item); // inserir
    TipoItem pop(); // remover
    void print();
    int length(); // tamanho

};