#include "heaptype.cpp"
int main()
{
    Graphtype<char> g(10);
    g.AddVertex('A');
    g.AddVertex('B');
    g.AddVertex('C');
    g.AddVertex('D');
    g.AddVertex('E');
    g.AddVertex('F');
    g.AddVertex('G');
    g.AddVertex('H');
    g.AddEdge('A','B',1);
    g.AddEdge('B','A',1);
    g.AddEdge('A','C',1);
    g.AddEdge('A','D',1);
    g.AddEdge('D','A',1);
    g.AddEdge('D','E',1);
    g.AddEdge('D','G',1);
    g.AddEdge('G','F',1);
    g.AddEdge('F','H',1);
    g.AddEdge('H','E',1);
 //   g.AddEdge('E','D',1);
    g.BreadhFirstSearch('B','E');
    g.DepthFirstSearch('B','E');
    g.DepthFirstSearch('E','B');
    g.BreadhFirstSearch('E','B');



}
