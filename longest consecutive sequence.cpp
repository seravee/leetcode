class Solution {
public:
    int longestConsecutive(vector<int> &num) {
        unordered_set<int> M;
        for(int i = 0; i < num.size(); i++)
        {
            M.insert(num[i]);
        }
        int maxresult = 0;

        for(int i = 0; i < num.size(); i++)
        {
            if(M.find(num[i]) != M.end())
            {
                M.erase(num[i]);
                int result = 1;
                //for left
                int left = num[i]-1;
                while(M.find(left) != M.end())
                {
                    result++;
                    M.erase(left);
                    left--;
                }
                int right = num[i]+1;
                while(M.find(right) != M.end())
                {
                    result++;
                    M.erase(right);
                    right++;
                }
                maxresult = max(maxresult, result);
            }
        }
        return maxresult;
    }
};
