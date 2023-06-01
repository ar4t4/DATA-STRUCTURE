#include<bits/stdc++.h>
using namespace std;
#define p cout
vector <int> adj[200005];
int dis[200005];
#define fo(i,n) for(int i=0;i<n;i++)
void BFS(int s,int n)
{
    vector<bool> visited;
    dis[s]=0;
    visited.resize(n, false);
    queue<int>q;
    visited[s] = true;
    q.push(s);

    while (!q.empty()) {
        s = q.front();
        cout << s << " ";
        q.pop();
        for (auto adjacent : adj[s]) {
            if (!visited[adjacent]) {
                visited[adjacent] = true;
                dis[adjacent]=dis[s]+1;
                q.push(adjacent);
            }
        }
    }
}
int main()
{
    int vis[200005];
    int n,e;
    cin>>n>>e;
    fo(i,n)vis[i]=0;
    fo(i,e)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
    }
    BFS(2,n);
    fo(i,n)p<<dis[i+1];
}
