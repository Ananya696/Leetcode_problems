class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<vector<int>>vec(grid);
        for(int i=0;i<k;i++)
        {
            for(int i=0;i<grid.size();i++)
            {
                for(int j=0;j<grid[i].size();j++)
                {
                    if(j<grid[0].size()-1)
                        vec[i][j+1]=grid[i][j];
                    else if(j==grid[0].size()-1&&i!=grid.size()-1)
                        vec[i+1][0]=grid[i][grid[0].size()-1];
                    else
                        vec[0][0]=grid[grid.size()-1][grid[0].size()-1];
                }
            }
            grid=vec;
        }
        return vec;
    }
};