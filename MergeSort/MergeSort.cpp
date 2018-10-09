#include <iostream>
#include <vector>
#include <queue>

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
void mergeForArray(int array[], int first, int mid, int last)
{
    int index = first;
    queue<int> left;
    queue<int> right;

    for (int index2 = first; index2 <= mid; ++index2)
    {
        left.push(array[index2]);
    }
    for (int index2 = mid + 1; index2 <= last; ++index2)
    {
        right.push(array[index2]);
    }

    while (!left.empty() && !right.empty())
    {
        if (left.front() < right.front())
        {
            array[index] = left.front();
            left.pop();
        }
        else
        {
            array[index] = right.front();
            right.pop();
        }
        index++;
    }
    while (!left.empty())
    {
        array[index] = left.front();
        left.pop();
        index++;
    }

    while (!right.empty())
    {
        array[index] = right.front();
        right.pop();
        index++;
    }


}


void mergeSortUsingArray(int array[],int first,int last)
{

    if (first < last)
    {
        int middle = (first + last) / 2;
        mergeSortUsingArray(array, first, middle);
        mergeSortUsingArray(array, middle + 1, last);
        mergeForArray(array, first, middle, last);
    }
    printArray(array,last+1);
}


void mergeForVector(vector<int> &Vector, int first, int mid, int last)
{
    int index = first;
    queue<int> left;
    queue<int> right;

    for (int index2 = first; index2 <= mid; ++index2)
    {
        left.push(Vector[index2]);
    }
    for (int index2 = mid + 1; index2 <= last; ++index2)
    {
        right.push(Vector[index2]);
    }

    while (!left.empty() && !right.empty())
    {
        if (left.front() < right.front())
        {
            Vector[index] = left.front();
            left.pop();
        }
        else
        {
            Vector[index] = right.front();
            right.pop();
        }
        index++;
    }
    while (!left.empty())
    {
        Vector[index] = left.front();
        left.pop();
        index++;
    }

    while (!right.empty())
    {
        Vector[index] = right.front();
        right.pop();
        index++;
    }


}


void mergeSortUsingVector(vector<int> &Vector,int first,int last)
{

    if (first < last)
    {
        int middle = (first + last) / 2;
        mergeSortUsingVector(Vector, first, middle);
        mergeSortUsingVector(Vector, middle + 1, last);
        mergeForVector(Vector, first, middle, last);
    }
    printVector(Vector);
}

int main()
{

    int array[]= {14,33,27,10,35,19,48,44};
    vector<int> vector = {14,33,27,10,35,19,48,44};
    int length = sizeof(array)/sizeof(array[0]);
    cout<<"For Array.."<<endl;
    mergeSortUsingArray(array,0,length-1);
    cout<<"For Vector.."<<endl;
    mergeSortUsingVector(vector,0,vector.size()-1);

}
