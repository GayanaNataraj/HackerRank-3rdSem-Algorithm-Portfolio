# HackerRank 3rd Semester Algorithm Portfolio

## Student Information

- **Name:** Gayana Nataraj
- **USN / Student ID:** R25EF088
- **Semester:** 3rd Semester
- **Branch:** Computer Science Engineering
- **HackerRank Profile:** https://www.hackerrank.com/profile/gayanataraj9742
- **GitHub Repository:** https://github.com/GayanaNataraj/HackerRank-3rdSem-Algorithm-Portfolio

## About This Portfolio

This repository contains my solutions for the HackerRank Algorithms & GitHub Coding Portfolio activity. The activity focuses on developing problem-solving skills, applying basic algorithmic techniques, and analyzing algorithm efficiency using Time and Space Complexity.

The solutions are implemented in C and organized into separate folders for each mandatory problem.

## Problems Completed

| No. | Problem | Technique | Time Complexity | Auxiliary Space |
|---|---|---|---|---|
| 1 | Mini-Max Sum | Minimum/maximum tracking and sum calculation | O(N) | O(1) |
| 2 | Birthday Cake Candles | Maximum value tracking and counting | O(N) | O(1) |
| 3 | Insertion Sort – Part 1 | Insertion and element shifting | O(N) | O(1) |
| 4 | Binary Search | Divide-and-conquer searching | O(log N) | O(1) |
| 5 | Mark and Toys | Sorting and greedy selection | O(N log N) | O(N) |

## 1. Mini-Max Sum

### Approach

The solution calculates the total sum of all five values while finding the minimum and maximum values. The minimum sum is obtained by excluding the maximum value, while the maximum sum is obtained by excluding the minimum value.

### Time Complexity

**O(N)**

The array is traversed to calculate the sum and identify the minimum and maximum values.

### Auxiliary Space Complexity

**O(1)**

Only a fixed number of variables are used apart from the input array.

### Solution

`01-Mini-Max-Sum/solution.c`

---

## 2. Birthday Cake Candles

### Approach

The solution maintains the maximum candle height and counts how many candles have that maximum height while reading the input.

### Time Complexity

**O(N)**

Each candle is processed once.

### Auxiliary Space Complexity

**O(1)**

Only variables for the maximum value and its count are required apart from the input array.

### Solution

`02-Birthday-Cake-Candles/solution.c`

---

## 3. Insertion Sort – Part 1

### Approach

The last element is treated as the value to be inserted. Larger elements are shifted one position to the right until the correct position is found. The value is then inserted into its position.

### Time Complexity

**O(N)**

In the worst case, the elements before the final value may need to be shifted.

### Auxiliary Space Complexity

**O(1)**

The algorithm uses a fixed number of additional variables.

### Solution

`03-Insertion-Sort-Part-1/solution.c`

---

## 4. Binary Search

### Approach

Binary Search is implemented on a sorted array. The middle element is compared with the target. If the target is larger, the search continues in the right half; if smaller, it continues in the left half. This process continues until the target is found or the search range becomes empty.

### Time Complexity

**O(log N)**

The search range is approximately halved during every iteration.

### Auxiliary Space Complexity

**O(1)**

The implementation is iterative and uses only a fixed number of variables.

### Solution

`04-Binary-Search/solution.c`

> Binary Search was implemented in a suitable coding environment (VS Code) because a directly matching Binary Search challenge was not available in the HackerRank problem list.

---

## 5. Mark and Toys

### Approach

The prices are sorted in ascending order. The cheapest toys are selected first while the total cost remains within the available budget. The process stops when the next toy cannot be purchased.

### Time Complexity

**O(N log N)**

The main cost comes from sorting the prices.

### Auxiliary Space Complexity

**O(N)**

The sorting operation may require additional memory depending on the implementation.

### Solution

`05-Mark-and-Toys/solution.c`

---

## Algorithm Efficiency

The solutions demonstrate several basic algorithmic techniques:

- Minimum and maximum tracking
- Counting
- Insertion and shifting
- Divide-and-conquer searching
- Sorting
- Greedy selection

The algorithms were selected based on the requirements of each problem and their expected efficiency.

## HackerRank Evidence

The mandatory HackerRank problems completed include:

- Mini-Max Sum
- Birthday Cake Candles
- Insertion Sort – Part 1
- Mark and Toys

Binary Search was implemented separately in C using VS Code because a suitable direct HackerRank challenge was not available.

## HackerRank Profile

Public profile:

https://www.hackerrank.com/profile/gayanataraj9742

## GitHub Repository

Repository:

https://github.com/GayanaNataraj/HackerRank-3rdSem-Algorithm-Portfolio

## Badge Evidence

HackerRank badge evidence can be added here if a relevant badge is earned.

## Reflection

Through this activity, I practiced solving algorithmic problems using C and improved my understanding of basic algorithmic techniques. Mini-Max Sum helped me practice minimum and maximum tracking along with sum calculation. Birthday Cake Candles helped me understand how to find and count maximum values efficiently. Insertion Sort – Part 1 provided practical understanding of element shifting and insertion. Binary Search helped me understand divide-and-conquer searching and how reducing the search range improves efficiency. Mark and Toys demonstrated the use of sorting together with a greedy approach to maximize the number of items purchased within a budget. I also practiced analyzing algorithms using Big-O notation and distinguishing between Time Complexity and Auxiliary Space Complexity. Organizing the solutions into separate GitHub folders helped me understand how coding work can be documented and maintained in a structured repository. Overall, the activity strengthened my problem-solving, algorithm analysis, coding, and GitHub documentation skills.
