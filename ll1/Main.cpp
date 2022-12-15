#include <iostream>
#include "Student.h"
#include "Node.h"
using namespace std;
Node* head = NULL;
int main(){
  //add student 1
  Student* one;
  one->setID(1);
  Node* current = head;
  Node* head = new Node(one);
  //print head
  cout << (head->getStudent())->getID() << endl;
  //add student 2
  Student* two;
  two->setID(2);
  current->setNext(new Node());
  current->getNext() = new Node(two);
  //two
  cout << (current->getStudent())->getID << endl;
  return 0;
}
