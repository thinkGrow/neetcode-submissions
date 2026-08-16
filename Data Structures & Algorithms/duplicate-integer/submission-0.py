from typing import List

class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        seen = set()

        for num in nums:

            if num in seen:
                return True
            seen.add(num)

        return False


        



s = Solution()
result = s.hasDuplicate([1, 2, 3, 4, 1])
print(result)
