# 🔢 Valid Perfect Square - LeetCode

## 🔗 Problem Link

[LeetCode - Valid Perfect Square](https://leetcode.com/problems/valid-perfect-square/)

---

## ❓ Problem Statement

Given a positive integer `num`, return `true` if `num` is a perfect square or `false` otherwise. Do **not** use any built-in library function like `sqrt()`.

---

## 🚀 Approach

To avoid overflow and improve performance:
1. Use **binary search** between `1` and `num`.
2. Instead of comparing `mid * mid == num` directly (which may overflow), check:  
   - This ensures both correctness and safety.

---

## 🧠 Time & Space Complexity

| Metric          | Value     |
|-----------------|-----------|
| Time Complexity | O(log n)  |
| Space Complexity| O(1)      |

---

## 🧪 Sample Outputs

### ✅ Input: `num = 16`
Output: `true`

### ❌ Input: `num = 14`
Output: `false`

---

## 👨‍💻 Author

- **Name:** Ashish Modhawala
- **Challenge:** Day 5 – Dr. G. Viswanathan 100 Days Coding Challenge
- **Language:** C++

---

## 📽️ Video Explanation

