#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;
void Student::assignDetails(int id ,char pname[ ] ) {

    Studentid = id;
    strcpy(name,pname);
  
}

// Display StudentId and Name
void Student::display() {
  cout << "student id  " << Studentid << endl;
  cout << "Student name   " << name << endl;
}
