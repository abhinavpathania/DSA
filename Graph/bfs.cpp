#include<iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;

class Graph{
    unordered_map <int,vector<int>> Adjlist; // Adjacency list or list of neighbours
public:
    Graph(vector<int> & vertices){
        for(int vertex : vertices){
            Adjlist[vertex]=vector<int>(); //empty adjacency list for all vertices
        }
    }

    void addEdge(int src,int des){
        Adjlist[src].push_back(des); 
        Adjlist[des].push_back(src); //undirected graph
    }

    void bfs(int st_vertex){
        unordered_map <int,bool> visited(false);
        queue <int> q;

        visited[st_vertex]=true;
        q.push(st_vertex); // starting index to be added to queue.

        while(!q.empty()){
            int currindex=q.front(); // add
            cout<<currindex<<" ";
            q.pop();
            for(int neighbour : Adjlist[currindex]){
                if(visited[neighbour]==false){
                    visited[neighbour]=true;
                    q.push(neighbour);
                }
            }
        }
    }

};
int main()
{
    vector <int> vertices={0,3,1,2,4};
    Graph g1(vertices);

    g1.addEdge(0,3);
    g1.addEdge(1,3);
    g1.addEdge(2,1);
    g1.addEdge(1,4);
    g1.bfs(0);
     
    return 0;
}