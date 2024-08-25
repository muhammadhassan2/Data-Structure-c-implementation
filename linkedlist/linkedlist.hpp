
#pragma once
#include<iostream>
template<class T>
struct Node{
    T mData;
    Node<T>* next;
    Node():mData{0},next{nullptr} {
        std::cout<<"Node struct No-args constractor\n";
    }

    Node(T data):mData{data},next{nullptr}{
        std::cout<<"Node struact 1-args constractor\n";
    }
};

template<class T>
class linkedlist
{
private:
    Node<T>*Head;
    size_t _size;
public:
    linkedlist();
    void insertData(T data);
    void deleteData(T data);
    Node<T> *getNode(T value);
    bool isExist(T value);
    bool isEmpty();
    void printList();

    size_t getSize();


    ~linkedlist();

};
