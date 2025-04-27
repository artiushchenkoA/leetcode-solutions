class Solution {
    public:
        vector<vector<string>> groupAnagrams(vector<string>& strs) {
            std::unordered_map<std::string, std::vector<std::string>> mp;
    
            for (std::string str : strs) {
                std::string word = str;
                std::sort(word.begin(), word.end());
                mp[word].push_back(str);
            }
            std::vector<std::vector<std::string>> ans;
            for (auto x: mp) {
                ans.push_back(x.second);
            }
            return ans;
        }
    };