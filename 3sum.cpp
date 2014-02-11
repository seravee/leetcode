
class Solution {
public:
    vector<vector<int> > threeSum(vector<int> &num) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        set<vector<int> > RS;
        sort(num.begin(), num.end());
        int n = num.size();
        //this is critical. You could not directly use num.size() and minus it with 2.
        //Because the return of .size(), which is size_type, is unsigned int or unsigned long int

        for(int i = 0; i < n-2; ++i)
        {
            int j = i+1;
            int k = num.size()-1;
            while(j < k)
            {

                int sum = num[i] + num[j] + num[k];
                if(!sum)
                {
                    vector<int> triplet(3, 0);
                    triplet[0] = num[i];
                    triplet[1] = num[j];
                    triplet[2] = num[k];
                    RS.insert(triplet);
                    ++j;
                    --k;
                }
                else if(sum > 0) --k;
                else ++j;
            }
        }

        vector<vector<int> > result (RS.begin(), RS.end());
        return result;
    }
};
