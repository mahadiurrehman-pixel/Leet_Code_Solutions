class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        sorted_nums = sorted(nums)
        mapping = {}

        for index, num in enumerate(sorted_nums):
            if num not in mapping:
                mapping[num] = index

        return [mapping[num] for num in nums]