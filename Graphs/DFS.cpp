    void dfshelper(int node,vector<vector<int>>&adj,vector<bool>&visited,vector<int>&dfs){
        visited[node]=true;
        dfs.push_back(node);
        
        for(int neighbor:adj[node]){
            if(!visited[neighbor]){
                dfshelper(neighbor,adj,visited,dfs);
            }
        }
    }
    vector<int> dfsOfGraph(vector<vector<int>>& adj) {
        // Code here
        int V=adj.size();
        vector<int>dfs;
        vector<bool>visited(V,false);
        
        dfshelper(0,adj,visited,dfs);
        return dfs;
    }
