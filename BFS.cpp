

vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> vis(V,0);
        
        vector<int> ans;
        vis[0]=1;
        queue<int> q;
        q.push(0);
        
        
        while(!(q.empty())){
            int node = q.front();
            q.pop();
            
            ans.push_back(node);
            
            for(auto it : adj[node]){
                if(!(vis[it])){
                    vis[it]=1;
                    q.push(it);
                }
            }
        }
        return ans;
    }
