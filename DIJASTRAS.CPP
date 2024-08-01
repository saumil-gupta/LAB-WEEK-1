// DIJASTRAS ALGORITHM
#include<bits/stdc++.h>
using namespace std;
class graph
{
    public:
    map<int,list<pair<int,int>>>m;
    graph(){}
    void add(int x,int y,int z)
    {
        m[x].push_back({y,z});
        m[y].push_back({x,z});
    }
    void find(int src)
    {
        vector<int>ans(m.size(),INT_MAX);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,src});
        ans[src]=0;
        while(!pq.empty())
        {
            int u=pq.top().second;
            pq.pop();
            for(auto i:m[u])
            {
                if(ans[u]+i.second<=ans[i.first])
                {
                    ans[i.first]=ans[u]+i.second;
                    pq.push({ans[i.first],i.first});
                }
            }
        }
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<"   ";
        }
    }
};
int main()
{
    graph g;
    g.add(0, 1, 2);
    g.add(0, 3, 8);
    g.add(1, 3, 5);
    g.add(1, 4, 6);
    g.add(4, 2, 9);
    g.add(3, 5, 2);
    g.add(5, 2, 3);
    g.add(4, 5, 1);
    g.add(3, 4, 3);
    g.find(0);
    return 0;
}