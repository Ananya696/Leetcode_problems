class Solution {
public:
    void dfs(int city,vector<vector<int>>&isconnected,vector<bool>&visited)
    {
        visited[city]=true;
        for(int j=0;j<isconnected.size();j++){
            if(isconnected[city][j]==1 && visited[j]==false)
                dfs(j,isconnected,visited);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<bool>visited(n,false);
        int provinces=0;
        for(int i=0;i<n;i++)
        {
            if(visited[i]==false)
            {
                provinces++;
                dfs(i,isConnected,visited);
            }
        }
        return provinces;
    }
};