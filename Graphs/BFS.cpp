vector<int> bfsOfGraph(vector<vector<int>> &adj) {
       int V=adj.size();
       vector<int>bfs;
       vector<bool>visited(V,false);
       queue<int>q;
       visited[0]=true;
       q.push(0);
       while(!q.empty()){
           int node=q.front();
           q.pop();
           bfs.push_back(node);
           //visit all adj vertices of the current node
           for(auto neighbor:adj[node]){
               if(!visited[neighbor]){
                   visited[neighbor]=true;
                   q.push(neighbor);
               }
           }
       }
       return bfs;
    }
