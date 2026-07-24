class Solution {
public:
    void  rotate(vector<vector<int>>& matrix) {
        int n =matrix[0].size();

        int arr[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
             arr[i][j]=matrix[n-j-1][i];
            }
        }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            matrix[i][j]=arr[i][j];
        }
    }

    
    }
};