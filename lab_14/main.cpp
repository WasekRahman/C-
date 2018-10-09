#include <iostream>
#include "src\pqtype.cpp"
using namespace std;

void isEmpty(PQType<int> pqtype)
{
    if(pqtype.IsEmpty()==true)
    {
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }
}


int main()
{
    PQType<int> pqtype;
    isEmpty(pqtype);
}
