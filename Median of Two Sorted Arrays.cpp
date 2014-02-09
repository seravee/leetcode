class Solution {
public:
    double findHelper(int A[], int m, int B[], int n, int k)
    {
        if(m > n) return findHelper(B, n, A, m, k);
        if(m == 0) return B[k-1];
        if(k == 1) return min(A[0], B[0]);
        int posA = min(m, k/2);
        int posB = k-posA;
        if(A[posA-1] < B[posB-1]) return findHelper(A+posA, m-posA, B, n, k-posA);
        else if(A[posA-1] > B[posB-1]) return findHelper(A, m, B+posB, n-posB, k-posB);
        else return A[posA-1];
    }

    double findMedianSortedArrays(int A[], int m, int B[], int n) {
        if((m+n)&1) return findHelper(A, m, B, n, (m+n)/2+1);
        else return (findHelper(A, m, B, n, (m+n)/2) + findHelper(A, m, B, n, (m+n)/2+1))/2;
    }
};
