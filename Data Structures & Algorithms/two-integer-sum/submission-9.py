class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        s = {}
        for i, n in enumerate(nums):
            l = target - n
            if l in s:
                return [s[l], i]
            s[n] = i
        
