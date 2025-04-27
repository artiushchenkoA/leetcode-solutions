class Solution {
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
            std::unordered_map<int, int> count;
            for (int n : nums) {
                count[n]++;
            }
            std::vector<std::pair<int, int>> arr(count.begin(), count.end());
            std::sort(arr.begin(), arr.end(), [](const std::pair<int,int> &a, const std::pair<int,int> &b){return b.second < a.second;});
    
            std::vector<int> res;
            for (int i = 0; i < k; ++i) {
                res.push_back(arr[i].first);
            }
            return res;
        }
    };