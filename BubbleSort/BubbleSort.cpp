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


void bubbleSortUsingVector(vector<int> vector)

{
    int temp;
    for (int index = 0; index < vector.size()-1; index++)

        for (int index2 = 0; index2 < vector.size()-index-1; index2++)
        {
            if (vector[index2] > vector[index2+1])
            {
               temp = vector[index2+1];
               vector[index2+1] = vector[index2];
               vector[index2] = temp;
                printVector(vector);
            }
        }

    }
void bubbleSortUsingArray(int array[], int length)
{
    for (int index = 0; index < length-1; index++)

        for (int index2 = 0; index2 < length-index-1; index2++)
        {
            if (array[index2] > array[index2+1])
            {
                swap(&array[index2], &array[index2+1]);
                printArray(array,length);
            }
        }
}

int main()
{

    int array[]= {14,33,27,10,35,19,48,44};
    vector<int> vector = {14,33,27,10,35,19,48,44};
    int length = sizeof(array)/sizeof(array[0]);
    cout<<"For Array.."<<endl;
    bubbleSortUsingArray(array,length);
    cout<<"For Vector.."<<endl;
    bubbleSortUsingVector(vector);

}
