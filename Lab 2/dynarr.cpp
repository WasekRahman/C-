#include "dynarr.h"
#include <iostream>

 using namespace std;

 dynarr::dynarr()
 {
     data=NULL;
     size=0;
 }

 dynarr::dynarr(int s)
 {
     data=new int[s];
     size=s;
 }

 dynarr::~dynarr()
 {
     delete [] data;
 }

int dynarr::get(int index)
{
    return data[index];
}

void dynarr::set(int index,int value)
{
    data[index]=value;
}

void dynarr:: allocate(int s1)
{
    data = new int [s1];
    size=s1;
}

dynarr::dynarr(int row,int column)
{
      int x=row;
     int y=column;
 data=new int [column];
  //  size=x*y;

}
