
#include"itemtype.cpp"
#include "unsortedtype.cpp"
int main()
{
    ItemType A,B,C,D,E,F,G,H,I,J;
    UnsortedType list;


     A.Initialize(10);
    list.InsertItem(A);
    B.Initialize(13);
    list.InsertItem(B);
    C.Initialize(3);
    list.InsertItem(C);
    D.Initialize(17);
    list.InsertItem(D);
    E.Initialize(21);
    list.InsertItem(E);
    F.Initialize(19);
    list.InsertItem(F);
    G.Initialize(2);
    list.InsertItem(G);
    H.Initialize(8);
    list.InsertItem(H);
    I.Initialize(9);
    list.InsertItem(I);
    J.Initialize(10);
    list.InsertItem(J);
    list.printlist(1);
    cout<<endl;
    list.printlist(2);
    cout<<endl;
    list.printlist(3);

}
