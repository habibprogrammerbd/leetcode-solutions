class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        vector<bool> visited(n,false);
        vector<vector<int>> adj_list(n);
        for(int i = 0 ; i < edges.size() ; i++)
        {
            adj_list[edges[i][0]].push_back(edges[i][1]);
            adj_list[edges[i][1]].push_back(edges[i][0]);
        }

        queue<int> q;
        q.push(source);
        visited[source] = true;


        while(!q.empty())
        {
            int first = q.front();
            q.pop();

            for(int child : adj_list[first])
            {
                if(!visited[child])
                {
                    q.push(child);
                    visited[child] = true;
                }
            }
        }

        if(!visited[destination])
            return false;
        else return true; 
    }
};