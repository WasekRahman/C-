#include "binarysearchtree.cpp"
int main()
{
    TreeType<int> t;
    if(t.Isempty())
        cout<<"Empty"<<endl;

    t.Insertitem(4);
     t.Insertitem(9);
      t.Insertitem(2);
       t.Insertitem(7);
        t.Insertitem(3);
         t.Insertitem(11);
          t.Insertitem(17);
           t.Insertitem(0);
            t.Insertitem(5);
             t.Insertitem(1);

    if(!t.Isempty())
        cout<<"Not Empty"<<endl;

        cout<<"Length is: "<<t.Lengthis()<<endl;

        bool f;
        int x=3;
        t.Retrieveitem(x,f);
        if(f==true)
            cout<<"Found"<<endl;

            t.ResetTree(IN_ORDER);
            for(int i=0;i<t.Lengthis();i++)
            {
                t.Getnextitem(x,IN_ORDER,f);
                cout<<x<<" ";
            }
            cout<<endl;

            t.ResetTree(PRE_ORDER);
            for(int i=0;i<t.Lengthis();i++)
            {
                t.Getnextitem(x,PRE_ORDER,f);
                cout<<x<<" ";
            }
            cout<<endl;

            t.ResetTree(POST_ORDER);
            for(int i=0;i<t.Lengthis();i++)
            {
                t.Getnextitem(x,POST_ORDER,f);
                cout<<x<<" ";
            }
            cout<<endl;

            t.leaves();
            int s;
            t.smallest(s);

}
