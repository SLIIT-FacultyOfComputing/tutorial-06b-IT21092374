#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int Id,const char sname[]) {
  studentId = Id;
  strcpy(name , sname);
  
}

// Display StudentId and Name
void Student::display() {
  cout << "student id ; " << studentId <<endl;
  cout << "student name ; " << name << endl;
}
