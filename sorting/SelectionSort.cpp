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
void swap(int *num1,int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void selectionSort(int array[],int length)
{
    for(int index = 0; index<length-1; index++)
    {
        int minIndex = index;
        for (int index2 = index+1; index2< length; index2++)
            if (array[index2] < array[minIndex])
            {
                minIndex = index2;
            }

        swap(&array[minIndex], &array[index]);

        printArray(array,length);


    }
}
void selectionSortForVector(vector<int>& vector)
{
    int temp, minIndex;

    for( int index = 0; index < vector.size()-1; index++)
    {
        minIndex = index;
        for (int index2 = index + 1; index2 < vector.size(); index2++)
        {
            if (vector[index2] < vector[minIndex])
            {
                minIndex = index2;
            }
        }
        temp = vector[index];
        vector[index] = vector[minIndex];
        vector[minIndex] = temp;
        printVector(vector);
    }
}

int main()
{
    int array[]= {14,33,27,10,35,19,48,44};
    vector<int> vector = {14,33,27,10,35,19,48,44};
    int length = sizeof(array)/sizeof(array[0]);
    cout<<"For Array.."<<endl;
    selectionSort(array,length);
    cout<<"For Vector.."<<endl;
    selectionSortForVector(vector);

}
