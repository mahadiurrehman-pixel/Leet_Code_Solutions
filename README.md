# Problem: Sum and Multiply

## Intuition
The result depends on two values:
- The sum of all digits.
- The number formed after removing all `0` digits.

Multiply these two values to obtain the final answer.

## Approach
1. Convert the integer to a string.
2. Iterate through each digit.
3. Add every digit to the sum.
4. Append only non-zero digits to a new string.
5. If the new string is empty, return `0`.
6. Convert the string back to an integer.
7. Return the product of the filtered number and the digit sum.

## Complexity

- **Time Complexity:** `O(d)`
- **Space Complexity:** `O(d)`

Where `d` is the number of digits.

## Code (C++)

```cpp
class Solution {
public:
    long long sumAndMultiply(int n) {
        string str = to_string(n);
        string a = "";
        long long sum = 0;

        for (int i = 0; i < str.length(); i++) {
            sum += (str[i] - '0');
            if (str[i] != '0') {
                a += str[i];
            }
        }

        if (a == "") return 0;

        long long num = stoll(a);
        return num * sum;
    }
};
```