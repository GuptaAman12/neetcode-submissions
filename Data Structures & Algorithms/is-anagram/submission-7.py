class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        charT = {}
        charS = {}
        for i in range(len(s)):
            charT[t[i]] = 1 + charT.get(t[i], 0)
            charS[s[i]] = 1 + charS.get(s[i], 0)
        return charT == charS
