# Two Sum

## Intuition
The simplest way is to check every possible pair of numbers. If the sum of a pair equals the target, return their indices immediately.

## Approach
1. Use two nested loops.
2. The outer loop selects the first element.
3. The inner loop checks every element after it.
4. If the sum of the two elements equals the target, return their indices.
5. If no valid pair is found, return an empty vector.

## Complexity

- **Time Complexity:** `O(n²)`
- **Space Complexity:** `O(1)`

## Code

```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};
```