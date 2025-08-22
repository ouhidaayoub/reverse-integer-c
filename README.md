# Reverse Integer 🌀

## Problem Description
The task is to reverse the digits of a 32-bit signed integer.

- Input: an integer `x`.
- Output: the reversed digits of `x`.
- Constraint: if the reversed value goes outside the 32-bit signed integer range  
  `[-2,147,483,648, 2,147,483,647]`, return `0` instead.

Examples:
- `123 → 321`
- `-123 → -321`
- `120 → 21`
- `1534236469 → 0` (overflow)

You can read the full problem statement here:  
🔗 [LeetCode – Reverse Integer](https://leetcode.com/problems/reverse-integer/description/)

---

## My Solution Complexity 🚀

- **Time Complexity:** `O(n)`  
  ✅ Beat **100%** of C submissions on LeetCode.  

- **Space Complexity:** `O(n)`  
  📦 Beat **71.5%** of C submissions.  

---

## Screenshots 📸

<table>
  <tr>
    <th>Case</th>
    <th>Screenshot</th>
  </tr>
  <tr>
    <td>Time Complexity</td>
    <td><img src="assets/Time Complexity.png" alt="Performance Screenshot" width="500"/></td>
  </tr>
  <tr>
    <td>Space Complexity</td>
    <td><img src="assets/Space Complexity.png" alt="Performance Screenshot" width="500"/></td>
  </tr>
  <tr>
    <td>Accepted Submission</td>
    <td><img src="assets/LeetCode Submittion.png" alt="Accepted Screenshot" width="500"/></td>
  </tr>
</table>

---

## Self Feedback 💡

Solving this problem was a journey of debugging and optimization.  
At first, I struggled with overflow cases (`1534236469`, `-2147483648`) and the precision issues of `pow()`.  
By switching to an integer-only power function, adding early overflow checks, and handling negatives carefully, I finally built a **robust solution**.  

Seeing the result — **100% time and 71.5% space** — felt rewarding.  
It showed me how important it is to consider edge cases and to think about both **performance** and **correctness**.  
Next step: I’ll explore how to reduce space complexity closer to O(1) while keeping the same speed.