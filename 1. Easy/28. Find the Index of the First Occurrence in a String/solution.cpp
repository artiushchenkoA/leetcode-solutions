class Solution {
    public:
        int strStr(string haystack, string needle) {
            
            int inputSize = needle.size();
            int haystackSize = haystack.size();
            for (int i = 0; i <= haystackSize - inputSize; ++i) {
                int j = 0;
                for (; j < inputSize; ++j) {
                    if (haystack[i + j] != needle[j]) {
                        break;
                    }
                }
                if (j == inputSize) {
                    return i;
                }
                
            }
            return -1;
        }
    };