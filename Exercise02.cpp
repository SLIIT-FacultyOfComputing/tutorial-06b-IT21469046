#include <iostream>
using namespace std;
#include "Box.h"

int main() {
  
   // 1. Create a Box type object called box1
  Box box1;
  
  
   // ======= DO NOT CHANGE THE INPUT ===========
   int lenght,height,width;
    cout << "Enter the Length of the Box : ";
   cin >> lenght;
   cout << "Enter the Height of the Box : ";
   cin >> height;
 
   cout << "Enter the width of the Box : ";
   cin >> width;
   // ===========================================
  
   // 2. Use setters assign height, length, width throw
   box1.setLenght(lenght);
   box1.setHeight(height);
   box1.setWidth(width);
   // === DO NOT CHANGE THE OUTPUT ============
    cout << "Box Length " << box1.getLenght() << endl;
   cout << "Box Height " << box1.getHeight() << endl;
   cout << "Box Width " << box1.getwidth() << endl;
   cout << "Volume of Box is " << box1.calcVolume() << endl;
   // ==========================================
      return 0;
}

