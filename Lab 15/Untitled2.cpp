#include <iostream>

using namespace std;

int main()
{
	int n;

	cout<<"Enter a number: ";

	cin>>n;

	for (int i= 1; i <= 7; i=i+2)
	{
		for (int j = 1; j <= i; j++)
		{
			cout<<"*"<<" ";
		}



		cout<<endl;
	}
	return 0;
}
