class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        new_s = sorted(s.lower())
        new_t = sorted(t.lower())
        if new_s == new_t:
            return True
        else: return False