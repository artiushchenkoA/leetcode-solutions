class Solution {
    public:
        int numIdenticalPairs(vector<int>& nums) {
            int ans = 0;
            unordered_map<int, int> count;
            for (int x : nums) {
                ans += count[x]++;
            }
            return ans;
        }
    };