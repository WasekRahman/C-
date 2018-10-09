#include <iostream>
#include <string>
using namespace std;

template <typename T>
class dynArr
{
private:
    int size ;
    T *data;
public:
    dynArr();
    dynArr(T);
    ~dynArr();
    void setValue(T index, T value);
    T getValue(int index);

};
template <typename T>
dynArr<T>:: dynArr()

{
    data = NULL ;
    size = 0;
}
template <typename T>
dynArr<T>:: dynArr(T s)
{

    data = new T[s];
    size = s;
}
template<typename T>
dynArr<T>:: ~dynArr()
{
  delete [] data;
}
template<typename T>
T dynArr<T>::getValue(int index)
{
    return data[index];
}
template<typename T>
void dynArr<T>:: setValue(T index, T value)
{
    data [index]=value;
}

int main()
{
    cout << "Creating object" << endl;
    dynArr <int> *obj = new dynArr<int>(5);
    for(int i=0;i<5;i++)
    {
         obj->setValue(i, i+3);
    }
    int x,value;
    cin>>value;
    x= obj->getValue(value);
    cout<<"value at index " << value<<" is= "<< x <<endl;
    return 0;
}

/*template <class ItemType>
void UnsortedType<ItemType>::printreversed()
{
   NodeType* tempPtr;
   int lengthoflinkedlist=0;
   int index=0;
    while(listData!=NULL)
    {
        lengthoflinkedlist=lengthoflinkedlist+1;

    }
    int array[lengthoflinkedlist-1];
    while(listData!=NULL)
    {

        array[index]=listData->info;
        listData=listData->next;
        index++;

    }
    for(int index=lengthoflinkedlist-1;index>=0;index++)
    {
        cout<<array[index]<<" ";
    }
}*/
