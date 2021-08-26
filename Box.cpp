#include "Box.h"
#include <iostream>
#include <cstring>
using namespace std;

void Box:: setLength(int l)
{
  length = l;
}
void Box:: setWidth(int w)
{
  width = w;
}
void Box:: setHeight(int h)
{
  height = h;
}
int Box :: getWidth()
{
  return width;
}
int Box :: getLength()
{
  return length;
}
int Box :: getHeight()
{
  return height;
}



int Box::calcVolume() {

  return width * height * length;

}

