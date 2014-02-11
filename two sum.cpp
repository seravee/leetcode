
class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        unordered_map<int, vector<int> > M;
        for(int i = 0; i < numbers.size(); i++)
        {
            M[numbers[i]].push_back(i);
        }
        vector<int> result(2, 0);
        for(int i = 0; i < numbers.size(); i++)
        {
            int a = numbers[i];
            int b = target - numbers[i];
            if(M.find(b) != M.end())
            {
                if(a == b)
                {
                    if(M[a].size() >= 2)
                    {
                        result[0] = M[b][0]+1;
                        result[1] = M[b][1]+1;
                        return result;
                    }
                    else continue;
                }
                else
                {
                    result[0] = M[a][0]+1;
                    result[1] = M[b][0]+1;
                    return result;
                }
            }
        }
    }
};
