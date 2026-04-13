from typing import List

class Solution:
    def search(self, nums: List[int], target: int) -> int:
        return self._binary_search(nums, target, 0, len(nums) - 1)

    def _binary_search(self, nums: List[int], target: int, left: int, right: int) -> int:
        if left > right:
            return -1
        
        mid = (left + right) // 2

        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            return self._binary_search(nums, target, mid + 1, right)
        else:
            return self._binary_search(nums, target, left, mid - 1)
        
sol = Solution()
print(sol.search([-1, 0, 3, 5, 9, 12], 9))