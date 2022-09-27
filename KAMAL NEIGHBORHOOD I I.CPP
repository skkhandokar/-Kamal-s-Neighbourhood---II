#include <bits/stdc++.h>
using namespace std;

class graph{
     int v;
     list<int>*adj;
 public:
     graph(int v)
     {
         this->v=v;
         adj=new list<int>[v];
     }
void addedge(int u,int v)
 {
     adj[u].push_back(v);

     //adj[v].push_back(u);
 }

int BFS(int source)
 {
     vector<bool>visited(v,false);  //vector er all sob size false kore deya holo
     queue<int>q;

     visited[source]=true;

     q.push(source);

     int countt=0;
    while(!q.empty())
    {
        int c=q.front();

        q.pop();

{

  for(auto i:adj[c])
    {
     if(visited[i]!=true)
     {
       visited[i]=true;
       q.push(i);
       countt++;
     }
    }
    }


 }
return countt;
 }

};
int main()
{

int n,e;
   cin>>n>>e;

   graph g (n);

   for(int i=0;i<e;i++)
   {
       int a,b;
       cin>>a>>b;
       g.addedge(a,b);
   }
   int l;
   cin>>l;
   cout<<g.BFS(l);


}
