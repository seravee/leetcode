class Solution {
public:
    bool search(int A[], int n, int target) {
        if(n <= 0) return false;
        int left = 0;
        int right = n-1;
        while(left <= right)
        {
            int middle = left + (right-left)/2;
            if(A[middle] == target) return true;

            if(A[left] < A[middle])
            {
                if(A[left] <= target && A[middle] > target) right = middle-1;
                else left = middle+1;
            }
            else if(A[middle] < A[right])
            {
                if(A[right] >= target && A[middle] < target) left = middle+1;
                else right = middle-1;
            }
            else //A[middle] == A[left] || A[middle] == A[right]
            {
                if(A[middle] == A[left]) left++;
                else right--;
            }
        }
        return false;
    }
};
