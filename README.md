# Data Structure Lab — BCS-351

**Student:** Rajeshwari Agrawal  
**Roll No.:** 2501920110294  
**Institute:** GL Bajaj Institute of Technology and Management, Greater Noida  
**Session:** 2026–27

This repository contains C programs organized by the experiment numbers in the provided Data Structure Lab list. Every program calls `student_info()` before showing its program output, so the student's name, roll number, institute, and course appear in the terminal output.

## Repository structure

- `experiments/experiment_01/` through `experiment_19/` — experiment source files
- `common/student_info.h` — shared student identity banner
- `outputs/` — sample output transcripts
- `compile_all.sh` — compile every C source file with GCC

## Compile and run

From the repository root, compile a program like this:

```bash
gcc experiments/experiment_01/01_array_operations.c -o array_operations
./array_operations
```

On Windows, use `gcc` in MinGW/MSYS2 and run the generated `.exe`. In VS Code, open the folder and use its integrated terminal.

To compile every source file on Linux/macOS with GCC:

```bash
chmod +x compile_all.sh
./compile_all.sh
```

Compiled binaries are placed in `build/`. Each program is independent and can be run separately.

## Experiment index

1. Array insertion/deletion; LeetCode Two Sum
2. 2D matrix operations; Second Largest Element in an Array
3. Singly linked list operations; Reverse Linked List
4. Doubly linked list operations
5. Circular linked list operations
6. Polynomial addition; Merge Two Sorted Lists
7. Stack using array and linked list
8. Infix-to-postfix conversion; Valid Parentheses
9. Tower of Hanoi using recursion
10. Queue using array and linked list; Implement Queue using Stacks
11. Linear and binary search
12. Linear probing for collision resolution
13. Bubble, Selection, Insertion, Quick, Merge, Shell, and Radix sort
14. Heap sort; Remove Duplicates from Sorted Array
15. BST traversals; Diameter of Binary Tree
16. BST insertion, deletion, searching; Maximum Node in BST
17. Graph DFS/BFS and path checking
18. Minimum spanning tree; Number of Islands
19. Shortest path (Dijkstra); Find Center of Star Graph

## Notes

- Vertices in graph programs are numbered from `0` to `n-1`.
- Binary search expects sorted input.
- Radix sort in Experiment 13 accepts non-negative integers only.
- The graph shortest-path program uses Dijkstra's algorithm and expects non-negative edge weights.
- The matrix program demonstrates multiplication for square matrices and diagonal-sum difference. If you need rectangular matrix multiplication, dimensions can be extended.
- The GFG/LeetCode-style exercises are implemented as standalone console programs, rather than online-judge function signatures, so they can be run and demonstrated in the lab.
