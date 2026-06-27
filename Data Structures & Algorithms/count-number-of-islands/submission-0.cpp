class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size(); int res= 0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]=='1'){
                    dfs(grid,i,j);
                    res++;
                }
            }
        }
        return res;

        
    }
    void dfs(vector<vector<char>>& grid, int row, int col){
        if(row<0||col<0||row>=grid.size()||col>=grid[0].size()||grid[row][col]=='0')
            return;
        grid[row][col] = '0';
        dfs(grid,row-1,col);
        dfs(grid,row+1,col);
        dfs(grid,row,col-1);
        dfs(grid,row,col+1);
    }
};
