class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> visited(rooms.size(),false);

        queue<int> q;
        q.push(0);
        visited[0] = true;
        while(!q.empty())
        {
            int first = q.front();
            q.pop();

            for(int child : rooms[first])
            {
                if(!visited[child])
                {
                    q.push(child);
                    visited[child] = true;
                }
            }
        }

        auto it = find(visited.begin(),visited.end(),false);

        if(it != visited.end())
            return false;
        else return true;     
    }
};