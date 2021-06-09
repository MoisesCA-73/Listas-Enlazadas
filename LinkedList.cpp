#include "LinkedList.h"
#include <iostream>

//Constructores

LinkedList::LinkedList(Node* head, int sz)
{
    this->size = sz;
    this->head = head;
}

LinkedList::LinkedList()
{
    this->size  = 0;
    this->head = nullptr;
}

LinkedList::LinkedList(const LinkedList &list)
{
    this->size = list.size;
    this->head = list.head;
}

//Getters

int LinkedList::get_size() const
{
    return this->size;
}
Node* LinkedList::get_head() const
{
    return this->head;
}

//Metodos

void LinkedList::insert(Node x)
{
    Node* nuevo = new Node();
    nuevo->elem = x.elem;

    Node* aux = this->head;

    Node* aux2;

     while(aux && aux->elem < x.elem)  //la condicion es true siempre y cuando aux no sea nullptr
    {
        aux2 = aux;
        aux = aux->next;
    }
    if (this->head == aux)
    {
        this->head = nuevo;
    }
    else
    {
        aux2->set_next(nuevo);
    }
    nuevo->next = aux;

    this->size++;
}
void LinkedList::remove(int pos)
{
    if(pos == 0)
    {
        this->head = this->head->next;
    }
    else
    {
        Node* aux = new Node();
        aux = this->head;
        for(int i = 0; i < pos-1; i++)
        {
            aux = aux->next;
        }
        aux->next = aux->next->next;
    }
    this->size--;

}
void LinkedList::print() const
{
    Node* aux = new Node();
    aux->elem = this->head->get_elem();
    aux->next = this->head->get_next();
    while(aux)
    {
        std::cout << aux->get_elem() << " -> ";
        aux = aux->get_next();
    }
}

void LinkedList::clear()
{
    delete head;
    this->head = nullptr;
    this->size = 0;
}

//Destructor
LinkedList::~LinkedList()
{
    delete head;
}

//Sobrecarga de salida <<
std::ostream &operator << (std::ostream &out,const LinkedList &l)
{
    Node* aux = new Node();
    aux->elem = l.head->get_elem();
    aux->next = l.head->get_next();
    while(aux)
    {
        out << aux->elem << " -> ";
        aux = aux->next;
    }
    delete aux;
    return out;
}
