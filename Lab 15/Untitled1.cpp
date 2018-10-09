#include <iostream>

using namespace std;

int main()
{
	int n;

	cout<<"Enter a number: ";

	cin>>n;

	for (int a = 1; a <= 7; a=a+2)
	{
		for (int b = 1; b <= a; b++)
		{
			cout<<"*"<<" ";
		}



		cout<<endl;
	}


	for (int a = 6; a >= 1; a--)
	{
		for (int b = 1; b<=a ; b++)
		{
			cout<<"*"<<" ";
		}


		cout<<endl;
	}

	return 0;
}
