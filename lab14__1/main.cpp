#include <iostream>
#include <algorithm>

using namespace std;
template<class itemtype>
void heap_sort(itemtype* begin, itemtype* end)
{
std::make_heap(begin, end);
std::sort_heap(begin, end);
}
int main ()
{
cout<<"For numbers in ascending order "<<endl;
int array[9] = {2,5,7,4,3,8,1,6,9};
heap_sort(&array[0],&array[9]);

for(int index=0;index<9;index++)
{
   cout<<array[index]<<"  ";
}
cout<<endl<<"For characters in ascending order "<<endl;
char letters[9]= {'t','q','k','s','p','v','m','g','z'};
heap_sort(&letters[0],&letters[9]);
for(int index=0;index<9;index++)
{
   cout<<letters[index]<<"  ";

}

return 0;
}

