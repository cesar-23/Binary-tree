#include <iostream>

template <typename T>
class Node;

template <typename T>
class Node
{
   public:
   T datum;
   Node<T> *m_son[2];
   Node(T);
};

template <typename T>
Node::Node(T datum)
{
    this->datum = datum;
    this->m_son[0] = nullptr;
    this->m_son[1] = nullptr;
}