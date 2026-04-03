class NumMatrix {
public:
    vector<vector<int>>mat;
    NumMatrix(vector<vector<int>>& matrix) {
        mat=matrix;//we can directly equalise the matrix;
        //directly copying it ,cuz if we change matrix directly we may lose the original data;
        int n = matrix.size();//row no.
        int m = matrix[0].size(); //col no.
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int top = (i>0) ? mat[i-1][j] : 0;
                int left = (j>0) ? mat[i][j-1] : 0; 
                int topleft = (i>0 && j>0) ? mat[i-1][j-1] : 0;

                mat[i][j] = mat[i][j] + top + left - topleft;
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
       int total = mat[row2][col2];
       int top = (row1>0)? mat[row1-1][col2]:0;
       int left = (col1>0)? mat[row2][col1-1]:0;
       int topleft= (row1>0 && col1>0) ? mat[row1-1][col1-1]: 0;

       return total - top - left + topleft;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */