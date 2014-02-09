class Solution {
public:
    int search(int A[], int n, int target) {
        if(n <= 0) return -1;
        int left = 0;
        int right = n-1;
        while(left <= right)
        {
            int middle = left + (right-left)/2;
            if(A[middle] == target) return middle;
            if(A[left] <= A[middle])
            {
                if(A[left] <= target && A[middle] > target) right = middle-1;
                else left = middle+1;
            }
            else if(A[middle] <= A[right])
            {
                if(A[middle] < target && target <= A[right]) left = middle+1;
                else right = middle-1;
            }
        }
        return -1;
    }
};
