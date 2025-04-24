#include <iostream>
#include <vector>

class More_Effective_Solution {
    public:
    std::vector<int> minOperations(std::string boxes) {
        std::vector<int> ans(boxes.size(), 0);
        // cast input to an array type <int>
        std::vector<int> input;
        for (char ch : boxes) {
            if (isdigit(ch)) {
                input.push_back(ch - '0');
            }
        }

        int balls = 0, moves = 0;
        for (int i = 0; i < input.size(); ++i) {
            ans[i] = balls + moves;
            moves = moves + balls;
            balls += input[i];
        }
        balls = 0;
        moves = 0;
        for (int i = input.size() - 1; i >= 0; --i) {
            ans[i] += balls + moves;
            moves = moves + balls;
            balls += input[i];
        }
        return ans;
    }
};

class Solution {
    public:
        std::vector<int> minOperations(std::string boxes) {
            std::vector<int> ans(boxes.size(), 0);
            std::vector<int> input;
            for (char ch : boxes) {
                if (isdigit(ch)) {
                    input.push_back(ch - '0');
                }
            }
    
            for (int i = 0; i < input.size(); ++i) {
                for (int j = 0; j < input.size(); ++j) {
                    if (input[j] == 1) {
                        ans[i] += abs(i - j);
                    }
                }
            }
            return ans;
        }
    };