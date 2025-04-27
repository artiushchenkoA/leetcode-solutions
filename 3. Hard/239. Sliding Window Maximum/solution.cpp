class Solution {
    public:
        vector<int> maxSlidingWindow(vector<int>& nums, int k) {
            std::vector<int> ans;
            std::deque<int> q;
            int left = 0;
            int right = 0;
    
            while(right < nums.size()) {
                while (!(q.empty()) && nums[q.back()] < nums[right]) {
                    q.pop_back();
                }
                q.emplace_back(right);
                if (left > q.front()) {
                    q.pop_front();
                }
                if ((right + 1) >= k) {
                    ans.push_back(nums[q[0]]);
                    left += 1;
                }
                right += 1;
            }
            return ans;
        }
    };