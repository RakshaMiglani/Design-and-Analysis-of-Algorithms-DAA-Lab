# Design and Analysis of Algorithms (DAA) Lab

This repository contains implementations of various algorithms studied in the Design and Analysis of Algorithms (DAA) course. Each algorithm is implemented with a focus on efficiency and complexity analysis. 

## Contents
- [Graham Scan (Convex Hull)](#graham-scan-convex-hull)
- [Huffman Encoding](#huffman-encoding)
- [Insertion Sort](#insertion-sort)
- [Longest Common Subsequence](#longest-common-subsequence)
- [Matrix Chain Multiplication](#matrix-chain-multiplication)
- [Merge Sort](#merge-sort)
- [N-Queens Problem](#n-queens-problem)
- [Rabin-Karp Algorithm](#rabin-karp-algorithm)
- [Rod Cutting Problem](#rod-cutting-problem)
- [STL Containers & Iterators](#stl-containers--iterators)

## How to Use
1. Clone the repository:
   ```sh
   git clone https://github.com/yourusername/daa-lab.git
   cd daa-lab
   ```
2. Compile and run the programs using appropriate compilers (C, C++, Python).
3. Modify and experiment with different inputs to understand the algorithm's behavior.

---
## Algorithms

### Graham Scan (Convex Hull)
- **Description:** Implements the Graham Scan algorithm to find the convex hull of a given set of points.
- **Algorithm:**
  1. Identify the point with the lowest y-coordinate (or leftmost if ties exist).
  2. Sort the remaining points by their polar angle with respect to the chosen point.
  3. Use a stack to process points and construct the convex hull.
  4. Remove points that make a right turn.
  5. Return the final hull.
- **Complexity:** O(n log n)
- **Source Code:** [`graham_scan.py`](Codes/graham_scan.py)
- **Time Complexity Graph:** ![Graph](images/time_complexity.png)

### Huffman Encoding
- **Description:** Implements Huffman encoding for lossless data compression using priority queues.
- **Algorithm:**
  1. Count character frequencies in the input text.
  2. Build a priority queue with these frequencies.
  3. Construct a Huffman tree by merging the two least frequent nodes iteratively.
  4. Assign binary codes to characters by traversing the tree.
  5. Encode the input text using these codes.
- **Complexity:** O(n log n)
- **Time Complexity Graph:** ![Graph](images/time_complexity.png)
- **Source Code:** [`huffman_encoding.cpp`](Codes/Huffman_encoding.cpp)
- **Time Complexity Graph:** ![Graph](images/time_complexity.png)

### Insertion Sort
- **Description:** Implements insertion sort and analyzes its efficiency.
- **Algorithm:**
  1. Start from the second element.
  2. Compare it with previous elements and shift elements if needed.
  3. Insert the element in the correct position.
  4. Repeat until the array is sorted.
- **Complexity:** O(n^2)
- **Time Complexity Graph:** ![Graph](images/time_complexity.png) in worst case, O(n)
- **Time Complexity Graph:** ![Graph](images/time_complexity.png) in best case.
- **Source Code:** [`insertion_sort.c`](Codes/insertion.c)
- **Time Complexity Graph:** ![Graph](images/time_complexity.png)

### Longest Common Subsequence
- **Description:** Computes the longest common subsequence of two given strings.
- **Algorithm:**
  1. Create a 2D table to store LCS values.
  2. Fill the table using dynamic programming.
  3. Trace back to retrieve the LCS.
- **Complexity:** O(m × n)
- **Time Complexity Graph:** ![Graph](images/time_complexity.png)
- **Source Code:** [`lcs.c`](Codes/lcs.c)
- **Time Complexity Graph:** ![Graph](images/time_complexity.png)

### Matrix Chain Multiplication
- **Description:** Implements matrix chain multiplication using dynamic programming.
- **Algorithm:**
  1. Use a 2D table to store multiplication costs.
  2. Compute minimum multiplications needed using DP.
  3. Store the optimal parenthesization.
- **Complexity:** O(n^3)
- **Time Complexity Graph:** ![Graph](images/time_complexity.png)
- **Source Code:** [`matrix_chain.cpp`](Codes/mcm.c)
- **Time Complexity Graph:** ![Graph](images/time_complexity.png)

### Merge Sort
- **Description:** Implements merge sort using the divide-and-conquer approach.
- **Algorithm:**
  1. Recursively divide the array into two halves.
  2. Merge sorted halves using a helper function.
- **Complexity:** O(n log n)
- **Time Complexity Graph:** ![Graph](images/time_complexity.png)
- **Source Code:** [`merge_sort.c`](Codes/merge_sort.c)
- **Time Complexity Graph:** ![Graph](images/time_complexity.png)

### N-Queens Problem
- **Description:** Solves the N-Queens problem using backtracking.
- **Algorithm:**
  1. Place queens row-wise.
  2. Check safe positions.
  3. Use backtracking to find valid arrangements.
- **Complexity:** O(n!)
- **Time Complexity Graph:** ![Graph](images/time_complexity.png)
- **Source Code:** [`n_queens.py`](Codes/n_queens.py)
- **Time Complexity Graph:** ![Graph](images/time_complexity.png)

### Rabin-Karp Algorithm
- **Description:** Implements the Rabin-Karp string matching algorithm.
- **Algorithm:**
  1. Compute hash of the pattern.
  2. Slide over the text and update hash.
  3. Compare hash values to detect matches.
- **Complexity:** O(n + m)
- **Time Complexity Graph:** ![Graph](images/time_complexity.png) on average, O(n × m)
- **Time Complexity Graph:** ![Graph](images/time_complexity.png) in worst case.
- **Source Code:** [`rabin_karp.c`](Codes/rabin_karp.c)
- **Time Complexity Graph:** ![Graph](images/time_complexity.png)

### Rod Cutting Problem
- **Description:** Solves the rod-cutting problem using memoization and tabulation.
- **Algorithm:**
  1. Use DP to find maximum revenue by cutting the rod optimally.
  2. Store results to avoid redundant calculations.
- **Complexity:** O(n^2)
- **Time Complexity Graph:** ![Graph](images/time_complexity.png)
- **Source Code:** [`rod_cutting.c`](Codes/Rod_cutting.c)
- **Time Complexity Graph:** ![Graph](images/time_complexity.png)

### STL Containers & Iterators
- **Description:** Uses STL containers and iterators in C++ to find the student with the highest and lowest marks.
- **Algorithm:**
  1. Store student data in a vector.
  2. Use iterators to find max and min marks.
- **Complexity:** O(n)
- **Time Complexity Graph:** ![Graph](images/time_complexity.png)
- **Source Code:** [`stl_containers.cpp`](Codes/stl.cpp)
- **Time Complexity Graph:** ![Graph](images/time_complexity.png)

---
## Author
Created by **Raksha Miglani** as part of the Design and Analysis of Algorithms course.

