class Solution {
        public:
                vector<vector<int> > fourSum(vector<int> &num, int target) {
                        // Note: The Solution object is instantiated only once and is reused by each test case.
                        if(num.size() < 4) return vector<vector<int> > ();
                        set<vector<int> > S;
                        vector<int> oneResult(4, 0);

                        sort(num.begin(), num.end());
                        for(int i = 0; i < num.size()-3; i++)
                        {
                                for(int j = i+1; j < num.size()-2; j++)
                                {
                                        int k = j+1;
                                        int l = num.size()-1;
                                        while(k < l)
                                        {
                                                int result = num[i] + num[j] + num[k] + num[l];
                                                if(result == target)
                                                {
                                                        oneResult[0] = num[i];
                                                        oneResult[1] = num[j];
                                                        oneResult[2] = num[k];
                                                        oneResult[3] = num[l];
                                                        S.insert(oneResult);
                                                        k++;
                                                        l--;
                                                }
                                                else if(result < target) k++;
                                                else l--;
                                        }
                                }
                        }
                        vector<vector<int > > result(S.begin(), S.end());
                        return result;
                }
};
