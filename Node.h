#include <iostream>

template <typename T>
class Node;

template <typename T>
class Node
{
   public:
   T datum;
   Node<T> *son[2];
   Node(T);
};

template <typename T>
Node<T>::Node(T datum)
{
    this->datum = datum;
    this->son[0] = nullptr;
    this->son[1] = nullptr;
}