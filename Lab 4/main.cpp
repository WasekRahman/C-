#include"itemtype.cpp"
#include "unsortedtype.cpp"
int main()
{
    ItemType A,B,C,D,E;
    UnsortedType list;
    int y;
    A.Initialize(5);
    list.InsertItem(A);
    B.Initialize(7);
    list.InsertItem(B);
    C.Initialize(6);
    list.InsertItem(C);
    D.Initialize(9);
    list.InsertItem(D);
    list.printlist(y);

     cout<<endl;
    cout<<list.LengthIs();
    cout<<endl;

    E.Initialize(1);
    list.InsertItem(E);
    list.printlist(y);
    cout<<endl;

if(list.isFull()==true)
    cout<<"list is full"<<endl;
else
    cout<<"list is not full"<<endl;



    bool f;
    ItemType s,p,d,h;
    s.Initialize(4);
    list.RetrieveItem(s,f);
    if(f==false)
        cout<<"4 was not Found"<<endl;
    else
        cout<<"4 was  Found"<<endl;



         p.Initialize(5);
    list.RetrieveItem(p,f);
    if(f==false)
        cout<<"5 was not Found"<<endl;
    else
        cout<<"5 was  Found"<<endl;




         d.Initialize(9);
    list.RetrieveItem(d,f);
    if(f==true)
        cout<<"9 was Found"<<endl;
    else
        cout<<"9 was Not Found"<<endl;



         h.Initialize(10);
    list.RetrieveItem(h,f);
    if(f==true)
        cout<<"10 was Found"<<endl;
    else
        cout<<"10 was Not Found"<<endl;




     ItemType k;
     k.Initialize(5);
     list.DeleteItem(k);
    list.printlist(y);


    if(list.isFull()==true)
    cout<<"list is full"<<endl;
else
    cout<<"list is not full"<<endl;
     cout<<endl;


    k.Initialize(1);
     list.DeleteItem(k);
    list.printlist(y);
     cout<<endl;


    k.Initialize(6);
     list.DeleteItem(k);
    list.printlist(y);
     cout<<endl;

    return 0;

}


