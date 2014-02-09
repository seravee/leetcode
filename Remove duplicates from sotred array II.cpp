class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if(n <= 2) return n;
        int pos = 0;
        int existed = false;
        for(int i = 1; i < n; i++)
        {
            if(A[i] != A[pos])
            {
                pos++;
                A[pos] = A[i];
                existed = false;
            }
            else if(!existed)
            {
                pos++;
                A[pos] = A[i];
                existed = true;
            }
        }
        return pos+1;
    }
};
