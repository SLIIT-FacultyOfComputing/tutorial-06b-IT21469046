#include "Box.h"
#include <iostream>

using namespace std;
void Box::setLenght(int l){
  lenght =l;
}
void Box::setHeight (int h){
  height=h;
}
 void Box::setWidth(int w){
   width = w;
   
 }

int Box::getLenght (){
  return lenght;
}
int Box::getHeight (){
  return height;
}
int Box::getwidth (){
  return width;
}


// Implement setters and getters

// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return lenght*height*width;
}
