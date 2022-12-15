#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;
class Student{
 public:
  Student();
  void setID();
  int getID();
 protected:
  int ID = 0;
};

#endif
