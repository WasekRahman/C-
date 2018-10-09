#include "dynarr.cpp"
int main()
{
    dynarr d1();
    dynarr d2(5);


    cout<<"input 5 values"<<endl;
    for(int i=0;i<5;i++)
    {
        int a;
        cin>>a;
        d2.set(i,a);

    }
        for(int i=0;i<5;i++)
        {
          cout<<d2.get(i)<<endl;
        }
        d2.~dynarr();

        cout<<"enter array size"<<endl;
        int size;
        cin>>size;
         cout<<"enter "<<size<<" numbers"<<endl;
          dynarr d3(size);
         for(int i=0;i<size;i++)
         {
             int b;
             cin>>b;
             d3.set(i,b);
         }

          for(int i=0;i<size;i++)
      {
          cout<<d3.get(i)<<endl;
        }

}
