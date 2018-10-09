#ifndef GRAPHTYPE_H_INCLUDED
#define GRAPHTYPE_H_INCLUDED
#include "stacktype.h"
#include "quetype.h"
template <class vertextype>
class Graphtype
{
public:
    Graphtype();
    Graphtype(int Max);
    ~Graphtype();
    void MakeEmpty();
    bool IsEmpty();
    bool IsFull();
    void AddVertex(vertextype);
    void AddEdge(vertextype,vertextype,int);
    int weightIs(vertextype,vertextype);
    void GetToVertices(vertextype, QueType<vertextype>&);
    void ClearMarks();
    void Markvertex(vertextype);
    bool Ismarked(vertextype);
    void DepthFirstSearch(vertextype,vertextype);
    void BreadhFirstSearch(vertextype,vertextype);
private:
    int numVertices;
    int maxVertices;
    vertextype* vertices;
    int **edges;
    bool* marks;
};

#endif // GRAPHTYPE_H_INCLUDED
