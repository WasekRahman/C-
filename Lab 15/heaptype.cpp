#include "graph.h"
#include "quetype.cpp"
#include "stacktype.cpp"

using namespace std;
const int NULL_EDGE=0;
template <class vertextype>
Graphtype<vertextype>::Graphtype()
{
    numVertices=0;
    maxVertices=50;
    vertices=new vertextype[50];
    edges=new int*[50];
    for(int i=0;i<50;i++)
    {
        edges[i]=new int[50];

    }
    marks=new bool[50];

}
template <class vertextype>
Graphtype<vertextype>::Graphtype(int Maxv)
{
    numVertices=0;
    maxVertices=Maxv;
    vertices=new vertextype[Maxv];
    edges=new int*[Maxv];
    for(int i=0;i<Maxv;i++)
    {
        edges[i]=new int[Maxv];

    }
    marks=new bool[Maxv];

}

template <class vertextype>
Graphtype<vertextype>::~Graphtype()
{
    delete [] vertices;
    delete [] marks;
    for(int i=0;i<maxVertices;i++)
        delete [] edges[i];
    delete [] edges;
}

template <class vertextype>
void Graphtype<vertextype>::MakeEmpty()
{
    numVertices=0;
}

template <class vertextype>
bool Graphtype<vertextype>::IsEmpty()
{
    return(numVertices==0);
}

template <class vertextype>
bool Graphtype<vertextype>::IsFull()
{
    return (numVertices==maxVertices);
}

template <class vertextype>
void Graphtype<vertextype>::AddVertex(vertextype vertex)
{
    vertices[numVertices]=vertex;
    for(int index=0;index<numVertices;index++)
    {
        edges[numVertices][index]=NULL_EDGE;
        edges[index][numVertices]=NULL_EDGE;
    }
    numVertices++;
}

template <class vertextype>
int IndexIs(vertextype* vertices,vertextype vertex)
{
    int index=0;
    while(!(vertex==vertices[index]))
        index++;
    return index;
}

template <class vertextype>
void Graphtype<vertextype>::ClearMarks()
{
    for(int i=0;i<maxVertices;i++)
        marks[i]=false;
}

template <class vertextype>
void Graphtype<vertextype>::Markvertex(vertextype vertex)
{
    int index=IndexIs(vertices,vertex);
    marks[index]=true;
}

template <class vertextype>
bool Graphtype<vertextype>::Ismarked(vertextype vertex)
{
    int index=IndexIs(vertices,vertex);
    return marks[index];
}

template <class vertextype>
void Graphtype<vertextype>::AddEdge(vertextype fromvertex,vertextype tovertex,int weight)
{
    int row= IndexIs(vertices,fromvertex);
    int col=IndexIs(vertices,tovertex);
    edges[row][col]=weight;
}

template <class vertextype>
int Graphtype<vertextype>::weightIs(vertextype fromvertex,vertextype tovertex)
{
    int row=IndexIs(vertices,fromvertex);
    int col=IndexIs(vertices,tovertex);
    return edges[row][col];
}

template <class vertextype>
void Graphtype<vertextype>::GetToVertices(vertextype vertex,QueType<vertextype>& adjVertices)
{
    int fromIndex,toIndex;
    fromIndex=IndexIs(vertices,vertex);
    for(toIndex=0;toIndex<numVertices;toIndex++)
        if(edges[fromIndex][toIndex]!=NULL_EDGE)
            adjVertices.EnQue(vertices[toIndex]);
}


template <class vertextype>
void Graphtype<vertextype>::DepthFirstSearch(vertextype startvertex,vertextype endvertex)
{
    StackType<vertextype> Stack;
    QueType<vertextype> vertexQ;
    vertextype vertex,item;
    bool found =false;

    ClearMarks();
    Stack.push(startvertex);
    do
    {
        vertex=Stack.top();
        Stack.Pop();
        if(vertex==endvertex)
        {
            cout<<vertex<<" ";
            found=true;
        }
        else
        {
            if(!Ismarked(vertex))
            {
                Markvertex(vertex);
                cout<<vertex<<" ";
                GetToVertices(vertex,vertexQ);
                while(!vertexQ.IsEmpty())
                {
                    vertexQ.DeQue(item);
                    if(!Ismarked(item))
                        Stack.push(item);
                }
            }
        }
    }
    while(!Stack.IsEmpty()&& !found);
    cout<<endl;
    if(!found)
        cout<<"path not Found"<<endl;
}

template <class vertextype>
void Graphtype<vertextype>::BreadhFirstSearch(vertextype startvertex,vertextype endvertex)
{
    QueType<vertextype> que;
    QueType<vertextype> vertexQ;
    bool found= false;
    vertextype vertex,item;

    ClearMarks();
    que.EnQue(startvertex);
    do
    {
        que.DeQue(vertex);
        if(vertex==endvertex)
        {
            cout<<vertex<<" ";
            found=true;
        }
        else
        {
            if(!Ismarked(vertex))
            {
                Markvertex(vertex);
                cout<<vertex<<" ";
                GetToVertices(vertex,vertexQ);
                while(!vertexQ.IsEmpty())
                {
                    vertexQ.DeQue(item);
                    if(!Ismarked(item))
                        que.EnQue(item);

                }
            }
        }
    }while(!que.IsEmpty()&& !found);
    cout<<endl;
    if(!found)
        cout<<"Path not FOund"<<endl;
}
