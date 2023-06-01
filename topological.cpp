#include<bits/stdc++.h>
using namespace std ;
#define p cout
vector<int> v[200005];
#define fo(i,n) for(int i=0;i<n;i++)
stack<int>s;
void dfs(int ver,int vis[])
{
    vis[ver]=1;
    for(auto x:v[ver])
    {
        if(vis[x]!=1)dfs(x,vis);
    }
    s.push(ver);
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
        v[x].push_back(y);
    }
    fo(i,n)
    {
        if(vis[i]!=1)dfs(i,vis);
    }
    while(!s.empty()){p<<s.top()<<' ';
    s.pop();}

}
