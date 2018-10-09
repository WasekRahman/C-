#include "pqtype.cpp"
int main()
{
    PQType<int> p(10);
    if(p.IsEmpty())
        cout<<"Empty"<<endl;
        p.Enque(4);
         p.Enque(9);
          p.Enque(2);
           p.Enque(7);
            p.Enque(3);
             p.Enque(11);
              p.Enque(17);
               p.Enque(0);
                p.Enque(5);
                 p.Enque(1);



        if(!p.IsEmpty())
            cout<<"Not Empty"<<endl;

            p.Printque();
            cout<<endl;

            int x;
            p.Deque(x);
            cout<<x<<endl;

            p.Deque(x);
            cout<<x<<endl;

            p.Printque();
            cout<<endl;

            p.Deque(x);
            p.Deque(x);
            p.Deque(x);

            p.Printque();
int d;
cin<<d;

}
