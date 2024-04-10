
    void dfs(vector<int> adj[],vector<int> &vis,int node,vector<int> &ans){
        ans.push_back(node);
        vis[node] = 1;
        
        for(auto it:adj[node]){
            if(!vis[it]){
                dfs(adj,vis,it,ans);
            }
        }
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> vis(V,0);
        vector<int> ans;
        dfs(adj,vis,0,ans);
        return ans;
    }
