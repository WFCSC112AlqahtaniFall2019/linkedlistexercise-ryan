#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Node.h"

using namespace std;

int main() {
    int x;
    int count=1;
    Node* temp;
    Node* head= new Node();
    Node* current= head;
    int min ;
    cout<<"enter a list of integers and -1 to stop"<<endl;
    cin>>x;
    //populate the linked list with at least 7 nodes
    while(x!=-1){
       Node* n= new Node(x);
       current->InsertAfter(n);
       current=n; //current=current->getNext;
       cin>>x;

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
    while(count <4){
        current = current->getNext();
        count++;
    }
    cout << "4th value: " << current->getValue()<<endl;
    temp = current->getNext();

    current = head->getNext();
    count = 1;
    while(count < 3)
    {
        current = current->getNext();
        count++;
    }
    current = temp;
    cout<<"current: "<<current->getValue();

    current=head->getNext();
    while(current!=nullptr)
    {
        current->printNode();
        current=current->getNext();
    }

    //3) remove the last node

    //4) remove the first node

    //6) delete all nodes
    return 0;
}