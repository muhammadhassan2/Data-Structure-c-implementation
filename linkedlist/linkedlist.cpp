#include"linkedlist.hpp"

template class linkedlist<int>;

template<class T>
linkedlist<T>::linkedlist():Head{nullptr}
{
    std::cout<<"LinkedList No-args constractor\n";
}

template<class T>
void linkedlist<T>::insertData(T data){
    std::cout<<"InsertData function\n";
    Node<T> *tempNode = new Node<T>(data);
    tempNode->next = this->Head;
    this->Head = tempNode;
}

template<class T>
void linkedlist<T>::deleteData(T data){
    std::cout<<"deleteData function\n";
    Node<T>* tempList = this->Head;
    Node<T>* prevPart = this->Head;

    if(tempList->mData == data){
        this->Head = this->Head->next; 
        delete tempList;
        return ;
    }

    while(tempList->mData != data && tempList != nullptr){
         prevPart = tempList; 
         tempList = tempList->next;
    }

    if(tempList == nullptr){
        std::cout<<"the Value is not fount in the list\n";
        return ;
    }
     
    prevPart->next = tempList->next;
    std::cout<<"the key is deleted from the list\n";
    delete tempList;
    delete prevPart;
    return ; 
}
template<class T>
bool linkedlist<T>::isExist(T value){
    Node<T>* tempList = this->Head;
    while(!tempList) {

        if(tempList->mData == value){
            return true;
            break;
        }
        else{
            tempList = tempList->next;
        }
    }
    return false;
}
template<class T>
bool linkedlist<T>::isEmpty(){
     std::cout<<"isEmpty function\n";
     return (this->getSize() == 0)?true : false ; 
}
template<class T>
void linkedlist<T>::printList(){
      std::cout<<"printList function\n";
      Node<T>* tempList = this->Head;
      while(tempList){

        std::cout<<tempList->mData<<" \n";
        tempList = tempList->next;
      }
      
}
template<class T>
size_t linkedlist<T>::getSize(){
    return this->_size;
}
template<class T>
linkedlist<T>::~linkedlist()
{
    delete Head;
}

