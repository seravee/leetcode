
class Solution {
public:
    int threeSumClosest(vector<int> &num, int target) {
        sort(num.begin(), num.end());
        int result = 0;
        int maxDiff = INT_MAX;
        int n = num.size();
        for(int i = 0; i < n-2; ++i)
        {
            int j = i+1;
            int k = n-1;
            while(j < k)
            {
                int sum = num[i] + num[j] + num[k];
                int diff = sum<target?(target-sum):(sum-target);
                if(diff == 0) return sum;
                if(diff < maxDiff)
                {
                    maxDiff = diff;
                    result = sum;
                }
                if(sum > target) k--;
                else j++;
            }
        }
        return result;
    }
};
