#ifndef NODE_H
#define NODE_H

#include <iostream>

class LinkedList;

std::ostream &operator << (std::ostream &out,const LinkedList &l);

class Node
{
private:
    int elem;
    Node* next;
public:
    //Constructor
    Node(int x);
    Node();
    Node(const Node &node);
    //Getters
    int get_elem() const;
    Node* get_next() const;
    //Setters
    void set_elem(int elem);
    void set_next(Node* next);
    //Destructor
    //~Node();
    //Clase amiga
    friend class LinkedList;
    //Sobrecarga a <<
    friend std::ostream &operator << (std::ostream &out, const Node &n);
    friend std::ostream &operator << (std::ostream &out,const LinkedList &l);

};


#endif  //NODE_H