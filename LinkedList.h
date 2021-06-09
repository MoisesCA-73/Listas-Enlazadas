#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

class LinkedList
{
private:
    int size; 
    Node *head;
public:
    //Constructores
    LinkedList(Node* head, int sz);
    LinkedList();
    LinkedList(const LinkedList &list);

    //Getters
    int get_size() const;
    Node* get_head() const;

    //Metodos
    void insert(Node x);
    void remove(int pos);
    void print() const;
    void clear();

    //Destructor
    ~LinkedList();

    //Sobrecarga de salida <<
    friend std::ostream &operator << (std::ostream &out,const LinkedList &l);

};

std::ostream &operator << (std::ostream &out,const LinkedList &l);

#endif  //LINKEDLIST_H