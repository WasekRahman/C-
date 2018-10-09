#include <iostream>

using namespace std;

int main()
{
    int row, column;
    cout << "Please enter number of row: " << endl;
    cin >> row;
    cout << "Please enter number of column: " << endl;
    cin >> column;
    int arr[row][column];
    cout << "Enter the numbers: " << endl;
    for( int index=0;index<row;index++)
    {
        for(int index2=0;index2<column;index2++){
        cin >> arr[index][index2];
        }
    }
    cout << "2D Array: " << endl;
     for( int index=0;index<row;index++)
    {
        for(int index2=0;index2<column;index2++){
        cout << arr[index][index2];
        cout << " ";
        }
        cout << "\n";
    }
    cout << "Transpose: "<< endl;
    for(int index2=0;index2<column;index2++){
       for( int index=0;index<row;index++)
    {
           cout << arr[index][index2] ;
           cout << " ";
    }
    cout << "\n";
    }

    return 0;
}
