bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m = mat.size();
        int n = mat[0].size();
        int low = 0;int high = m*n-1;
        while(low <= high)
        {
            int mid = low + ((-low + high)>>1);
            int idx = mat[mid/n][mid%n];
            if(idx == target)
                return true;
            else if(idx < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return false;
}
