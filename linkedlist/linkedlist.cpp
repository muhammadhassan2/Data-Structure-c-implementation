#include"linkedlist.hpp"
template<class T>
linkedlist<T>::linkedlist(T data):mData{data}
{
    std::cout<<"LinkedList 1-args constractor\n";
}

template<class T>
void linkedlist<T>::insertData(T data){
    Node<T> *tempNode = new Node(data);
    tempNode->next = this->Head;
    this->Head = tempNode;


}
template<class T>
linkedlist<T>::~linkedlist()
{
    delete mData;
}
