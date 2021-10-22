#include "Node.h"

template <typename T>
class Bitree;

template <typename T>
class Bitree{
    private:
        Node<T>* root;
    public:
        Bitree();
        // We are using 2 times the same funtion becouse it's a trick to make easier the recursive interaction whit the tree itself
        void Insert(T,Node<T>* &);
        void Insert(T);
        void Pre_Order(Node<T>*);
        void Pre_Order();
        void In_Order(Node<T>*);
        void In_Order();
        void Post_Order(Node<T>*);
        void Post_Order();
        bool Search(T,Node<T>*);
        bool Search(T);
        void Remove(T);
};

//defaut constructor
template <typename T>
Bitree<T>::Bitree()
{
    this-> root = nullptr;
}

///////////////////////////////////////////////////////Insert function

template <typename T>
void Bitree<T>::Insert(T data, Node<T>* &h)
{
    if(!h)
    {
        h = new Node<T> (data);
        return;
    }
    if(h->datum == data)
        return;
    if(h->datum > data)
        Insert(data,h->son[0]);
    else
        Insert(data,h->son[1]);
}

template <typename T>
void Bitree<T>::Insert(T data)
{
    Insert(data,root);
}
////////////////////////////////////////////////////Search function

template <typename T>
bool Bitree<T>::Search(T data,Node<T>* aux)
{
    if(aux==nullptr)
        return false;
    else if(aux->datum == data)
        return true;
    else if(data < aux->datum)
        return Search(data,aux->son[0]);
    else
        return Search(data,aux->son[1]);
}

template <typename T>
bool Bitree<T>::Search(T data)
{
    return Search(data, root);
}
////////////////////////////////////////////////////Remove function

template <typename T>
void Bitree<T>::Remove(T data){
    if(Search(data))
    {
        std::cout<<"en construccion";
    }else{
        std::cout<<"No se puede remover el elemento: "<<data<<" Porque no esta en el arbol\n";
    }
}
////////////////////////////////////////////////////Print pre order, in order and post order

template <typename T>
void Bitree<T>::Pre_Order(Node<T> * s)
{
    if(!s) 
        return;
    std::cout<<s->datum<<"\t";
    Pre_Order(s->son[0]);
    Pre_Order(s->son[1]);
}
template <typename T>
void Bitree<T>::Pre_Order()
{
    Pre_Order(root);
}

template <typename T>
void Bitree<T>::In_Order(Node<T> * s)
{
    if(!s) 
        return;
    In_Order(s->son[0]);
    std::cout<<s->datum<<"\t";
    In_Order(s->son[1]);
}
template <typename T>
void Bitree<T>::In_Order()
{
    In_Order(root);
}

template <typename T>
void Bitree<T>::Post_Order(Node<T> * s)
{
    if(!s) 
        return;
    Post_Order(s->son[0]);
    Post_Order(s->son[1]);
    std::cout<<s->datum<<"\t";
}
template <typename T>
void Bitree<T>::Post_Order()
{
    Post_Order(root);
}