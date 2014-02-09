class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if(n <= 1) return n;
        int pos = 0;
        for(int i = 1; i < n; i++)
        {
            if(A[pos] != A[i])
            {
                pos++;
                A[pos] = A[i];
            }
        }
        return pos+1;

    }
};
