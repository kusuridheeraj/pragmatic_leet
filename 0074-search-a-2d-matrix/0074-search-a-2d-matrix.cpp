class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size()-1;
        int n = matrix[0].size()-1;
        int left, row = -1, right, mid =0;
        for(int i=0;i<=m;i++){
            if(matrix[i][0]<=target && target<=matrix[i][n]){
                row = i;
                break;
            }
        }
        if(row == -1)return false;
        
        right = n; left =0;
        while(left<=right){
            mid = left + (right-left)/2;

            if(matrix[row][mid]==target){
                return true;
            }else if(matrix[row][mid]<target){
                left = mid +1;
            }else{
                right = mid-1;
            }
        }
        return false;
    }
};