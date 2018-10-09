#include <iostream>
#include <vector>

using namespace std;

void printArray(int *array, int size)
{
    for (int index=0; index < size; index++)
    {
        cout<<array[index]<<" ";
    }
    cout<<endl;
}
void printVector(vector<int>& vector)
{
    for (int index=0; index < vector.size(); index++)
    {
        cout<<vector[index]<<" ";
    }
    cout<<endl;
}


void insertionSortUsingVector(vector<int> vector){
    int key,index2;
    for (int index = 1; index < vector.size(); index++)
    {
        key = vector[index];
        index2= index-1;
        while (index2 >= 0 && vector[index2] > key)
        {
            vector[index2+1] = vector[index2];
            index2 = index2-1;
        }
        vector[index2+1] = key;
        printVector(vector);
    }
}
void insertionSortUsingArray(int array[], int length)
{
    int key,index2;
    for (int index = 1; index < length; index++)
    {
        key = array[index];
        index2= index-1;
        while (index2 >= 0 && array[index2] > key)
        {
            array[index2+1] = array[index2];
            index2 = index2-1;
        }
        array[index2+1] = key;
        printArray(array,length);
    }

}


int main()
{

    int array[]= {14,33,27,10,35,19,48,44};
    vector<int> vector = {14,33,27,10,35,19,48,44};
    int length = sizeof(array)/sizeof(array[0]);
    cout<<"For Array.."<<endl;
    insertionSortUsingArray(array,length);
    cout<<"For Vector.."<<endl;
    insertionSortUsingVector(vector);

}
