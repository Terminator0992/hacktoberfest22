#include <bits/stdc++.h>

using namespace std;

#define INF 1e7+7


void djistra()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int,int>> edge[n+1];

    for (int i = 0; i < m; i++)
    {
        int a, b, wt;
        cin >> a >> b >> wt;
        edge[a].push_back({b, wt});
        edge[b].push_back({a, wt});
    }

    int source = 1;
    vector<int>par(n+1,-1);
    vector<int>vis(n+1,-1);

    vector<int> dis(n+1, INF);

    set<pair<int, int>> q;

    q.insert({0, source});
    dis[source] = 0;

    while(q.size()>0)
    {
        auto node = *q.begin();
        int parent = node.second;
        int dist = node.first;

        q.erase(node);
        if(vis[parent]!=-1) 
        {
            continue;
        }   
        vis[parent] = 1;

        for (auto child : edge[parent])
        {
            int child_node = child.first;
            int wt = child.second;

            if (wt + dist < dis[child_node])
            {
                dis[child_node] = wt + dist;
                q.insert({dis[child_node], child_node});
                par[child_node] = parent;
            }
        }
    }
    for(int i = 1;i<=n;i++)
    {
        cout<<dis[i]<<" ";
    }

    if(par[n]==-1)
        cout<<-1<<endl;
    else
    {
        int curr_parr = n;
        vector<int>path;
        path.push_back(n);
        while(curr_parr!=1)
        {
            curr_parr = par[curr_parr];
            path.push_back(curr_parr);
        }
        reverse(path.begin(),path.end());
        for(auto it:path)
        {
            cout<<it<<" ";
        }
    }
}

int main()
{
    std::ios::sync_with_stdio(false), cin.tie(__null), cout.tie(__null);

    djistra();
}
