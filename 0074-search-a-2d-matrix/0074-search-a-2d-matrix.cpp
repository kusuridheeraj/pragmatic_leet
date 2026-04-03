class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int left = 0, right = m * n - 1;
        int mid =0;
        while(left<=right){
            mid = left + (right-left)/2;
            if(matrix[mid/n][mid%n]== target){
                return true;
            }else if(matrix[mid/n][mid%n]<target){
                left = mid + 1;
            }else{
                right = mid -1;
            }
        }
        return false;
    }
};