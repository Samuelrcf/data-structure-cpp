typedef int TipoItem;

struct Node{
    TipoItem value;
    Node * next;
};

class FilaDinamica{

    private:

    Node * first;
    Node * last;

    public:

    FilaDinamica(); // construtora
    ~FilaDinamica(); // destrutora
    bool isfull(); // verifica se a pilha está cheia
    bool isempty();
    void push(TipoItem item); // inserir
    TipoItem pop(); // remover
    void print();
    int length(); // tamanho

};