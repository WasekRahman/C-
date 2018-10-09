#include <iostream>

using namespace std;

int main()
{
    int maximum_difficulty,questions,difficulty;
    int count=0;
    int pause=0;
    cout<<"Enter number of questions: ";
    cin>>questions;
    cout<<"Enter maximum difficulty: ";
    cin>>maximum_difficulty;
    int array[questions];
    for(int index=0;index<questions;index++){
        cin>>difficulty;
        array[index]=difficulty;
    }
    for(int index=0;index<questions;index++){
       if(array[index]<=maximum_difficulty)
       {
           count=pause + 1;
       }
       else{
        pause=pause + 1;
       }

    }
    cout<<"Points: "<<count;

}
