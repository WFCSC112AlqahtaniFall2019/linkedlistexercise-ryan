#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Node.h"

using namespace std;

int main() {
    int x;
    int count=0;
    Node* temp;
    Node* head= new Node();
    Node* now = head;
    Node* current= head;
    Node* previousNode;
    int min ;
    cout<<"enter a list of integers and -1 to stop"<<endl;
    cin>>x;
    //populate the linked list with at least 7 nodes
    while(x!=-1){
       Node* n= new Node(x);
       current->InsertAfter(n);
       current=n; //current=current->getNext;
       cin>>x;
       count++;

    }

    //print the nodes of the linked list
    current=head->getNext();
    while(current!=nullptr)
    {
        current->printNode();
        current=current->getNext();
    }

    current = head->getNext();
    min=current->getValue();
    //1) find the node that has the minimum value
    while (current!=nullptr){
        if (current->getValue() < min){
            min = current->getValue();
        }
        current=current->getNext();
    }
    cout<< "Minimum is: " << min << endl;

    //2) remove the 4th node from the list

        current = head->getNext();
        previousNode = head;
       // cout << "hello";
        for (int i = 0; i < 3; i++) {
        current=current->getNext();
        previousNode = previousNode->getNext();
        }
            previousNode->setNext(current->getNext()); //set the previous value to the address of the current value
            current->setNext(nullptr); //null so that element 4 doesn't point to anything
       // cout <<"hey";
        delete current; //delete element 4
        //cout <<"hi";
        current=head->getNext(); //reassign the current
        while(current!=nullptr) //iterate through to reprint
        {
        current->printNode();
        current=current->getNext();
        }
        count--;
    cout << "Deleted 4th element" << endl;

    //3) remove the last node
    current = head->getNext();
    previousNode = head;
   // cout << "hello";
   while (current->getNext() != nullptr){
        current=current->getNext();
        previousNode = previousNode->getNext();
    }
    previousNode->setNext(nullptr); //set the previous value to the address of the current value
    //current->setNext(nullptr); //null so that element 4 doesn't point to anything
   cout <<"hey";
    delete current; //delete last element
    cout <<"hi" << endl;
    current=head->getNext(); //reassign the current
    while(current!=nullptr) //iterate through to reprint
    {
        current->printNode();
        current=current->getNext();
    }
    cout << "Deleted last element" << endl;
    count--;
    //4) remove the first node

    current = head->getNext();
    previousNode = head;

    previousNode->setNext(current->getNext()); //set the previous value to the address of the current value
    cout <<"hey";
    delete current; //delete last element
    cout <<"hi" << endl;
    current=head->getNext(); //reassign the current
    while(current!=nullptr) //iterate through to reprint
    {
        current->printNode();
        current=current->getNext();
    }
    cout << "Deleted first element" << endl;
    count--;

    //6) delete all nodes
     while (now != nullptr){

         current = head->getNext();
         previousNode = head;
         cout << "hello";
         for (int i = 0; i < count; i++) {
             current=current->getNext();
             previousNode = previousNode->getNext();
             cout << "Hello";
         }
         previousNode->setNext(current->getNext()); //set the previous value to the address of the current value
         current->setNext(nullptr); //null so that element 4 doesn't point to anything
          cout <<"hey";
         delete current; //delete element 4
         cout <<"hi";
         current=head->getNext(); //reassign the current
         while(current!=nullptr) //iterate through to reprint
         {
             current->printNode();
             current=current->getNext();
         }
         count--;
     }
    cout << "Deleted all elements" << endl;

    return 0;
}