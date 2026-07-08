# Add Two Numbers - LeetCode #2

## Problem Statement

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each node contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

---

## Example

**Input**

l1 = [2,4,3]

l2 = [5,6,4]

**Output**

[7,0,8]

**Explanation**

342 + 465 = 807

---

## Approach

- Create a dummy node to simplify linked list construction.
- Traverse both linked lists simultaneously.
- Add corresponding digits along with any carry from the previous addition.
- Store the current digit (`sum % 10`) in a new node.
- Update the carry (`sum / 10`).
- Continue until both lists are completely traversed and no carry remains.
- Return the linked list starting after the dummy node.

---

## Time Complexity

**O(max(n, m))**

Where:

- `n` = length of first linked list
- `m` = length of second linked list

Each node is visited exactly once.

---

## Space Complexity

**O(max(n, m))**

A new linked list is created to store the result.

---

## Concepts Used

- Singly Linked List
- Dummy Node
- Carry Handling
- Simulation
- Pointer Manipulation

---

## C++ Solution

```cpp
// See solution.cpp
```

---

## Author

Mahadi Ur Rehman