#include "Node.h"

Node::Node(int x)
{
    this->elem = x;
    this->next = nullptr;
}
Node::Node()
{
    this->elem = 0;
    this->next = nullptr;
}

Node::Node(const Node &node)
{
    this->elem = node.elem;
    this->next = node.next;
}

int Node::get_elem() const
{
    return this->elem;
}

Node* Node::get_next() const
{
    return this->next;
}

//Setters

void Node::set_elem(int elem)
{
    this->elem = elem;
}
void Node::set_next(Node* next)
{
    this->next = next;
}

//Sobrecarga de salida <<

std::ostream &operator << (std::ostream &out, const Node &n)
{
    Node* aux= new Node();
    aux->elem = n.elem;
    aux->next = n.next;
    while(aux)
    {
        out << aux->elem << " -> ";
        aux = aux->next;
    }
    return out;

}