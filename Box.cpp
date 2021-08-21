#include "Box.h"
#include <iostream>
#include <cstring>
using namespace std;

void :: setLength(int l)
{
  length = l;
}
void :: setWidth(int w)
{
  width = w;
}
void :: setHeight(int h)
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

