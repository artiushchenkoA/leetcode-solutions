class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        res = sorted(list(dict.fromkeys(nums).keys()))
        if len(res) == 1:
            return res[0]
        if len(res) <= 2:
            if res[0] < res[1]:
                return res[1]
            return res[0]
        return res[-3]
        