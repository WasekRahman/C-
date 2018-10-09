#include <iostream>
#include "UnsortedType.h"


using namespace std;

int main()
{
  UnsortedType <int> list1;
  int numberofinputs;
  int numbers;
  cout<<"Enter number of inputs: "<<endl;
  cin>>numberofinputs;
  cout<<"Please enter values: "<<endl;
  while(numberofinputs!=0)
  {
      cin>>numbers;
      list1.InsertItem(numbers);
      numberofinputs--;
  }
  list1.print();
    cout<<endl<<"The length is: " <<list1.LengthIs()<<endl;
    int addnumber;
    cout<<"Add a new number: "<<endl;
    cin>>addnumber;

    list1.InsertItem(addnumber);
    list1.print();
    bool result;
    int searchnumber;
    while(result!=true)
    {
    cin>>searchnumber;
    list1.RetrieveItem(searchnumber,result);
    if(!result)
        {
            cout<<endl<<"Not Found"<<endl;
        }
    else cout<<endl<<"Found";
    }

}
