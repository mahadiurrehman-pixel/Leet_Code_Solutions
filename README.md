# LeetCode Solutions

This repository contains my LeetCode problem solutions implemented in **C++** and **Python**. The goal of this repository is to improve problem-solving skills, strengthen data structures and algorithms concepts, and maintain consistency through regular practice.

## Problems Solved

| # | Problem | Language | Difficulty | Approach |
|---|---------|----------|------------|----------|
| 1523 | Count Odd Numbers in an Interval Range | C++, Python | Easy | Mathematical Formula |
| 412 | Fizz Buzz | C++, Python | Easy | Conditional Logic / Simulation |
| 1365 | How Many Numbers Are Smaller Than the Current Number | Python | Easy | Sorting + Hash Map |

## Solutions

### 1. Count Odd Numbers in an Interval Range
**Approach**
- Instead of iterating through the range, use a mathematical formula.
- Count odd numbers from `0` to `high` and subtract the count from `0` to `low - 1`.
- This gives the answer in constant time.

**Time Complexity:** `O(1)`

**Space Complexity:** `O(1)`

---

### 2. Fizz Buzz
**Approach**
- Iterate from `1` to `n`.
- Check divisibility:
  - Divisible by both `3` and `5` → `"FizzBuzz"`
  - Divisible by `3` → `"Fizz"`
  - Divisible by `5` → `"Buzz"`
  - Otherwise, return the number as a string.

**Time Complexity:** `O(n)`

**Space Complexity:** `O(n)` *(output array)*

---

### 3. How Many Numbers Are Smaller Than the Current Number
**Approach**
- Sort a copy of the array.
- Store the first occurrence index of every number in a hash map.
- The first occurrence index represents how many numbers are smaller.
- Build the result using the stored indices.

**Time Complexity:** `O(n log n)`

**Space Complexity:** `O(n)`

---

## Languages Used

- C++
- Python

## Purpose

- Practice Data Structures & Algorithms
- Improve problem-solving skills
- Prepare for coding interviews
- Maintain a consistent LeetCode progress log

⭐ Feel free to explore the solutions and compare different implementations.