# Data Structures and Algorithms Portfolio

**Author:** Dylan Paolo M. Magtaan  
**GitHub:** [@BurgerPurger](https://github.com/BurgerPurger)  
**Course:** CPE010 — Data Structures and Algorithms  
**Language:** C++

## Overview

This repository contains my C++ coursework, exercises, homework, and supplementary implementations for Data Structures and Algorithms. The files are arranged by module so that each topic and its related activities can be found easily.

The portfolio follows the progression of the course: from basic programming and object-oriented concepts to linear data structures, searching and sorting, trees, graphs, algorithm analysis, dynamic programming, and parallel algorithms.

## Contents

| Folder | Topic | Contents |
|---|---|---|
| [`01-Fundamentals`](01-Fundamentals/) | Programming fundamentals | Basic functions, logical operations, calculations, conditionals, loops, and introductory exercises. |
| [`02-Classes-and-Objects`](02-Classes-and-Objects/) | Classes and objects | Introductory C++ class implementations and object-oriented exercises. |
| [`03-Linked-Lists`](03-Linked-Lists/) | Linked lists | Singly and doubly linked list implementations and driver code. |
| [`04-Stacks`](04-Stacks/) | Stacks | STL stack usage, array-based stacks, linked-list stacks, and a delimiter/balanced-symbol checking exercise. |
| [`05-Queues`](05-Queues/) | Queues | STL queues, array-based queues, linked-list queues, circular queues, and a printer-job queue example. |
| [`06-Searching-Algorithms`](06-Searching-Algorithms/) | Searching | Linear and binary search-related implementations and supplementary exercises. |
| [`07-Sorting-Algorithms`](07-Sorting-Algorithms/) | Sorting | Sorting implementations and exercises. |
| [`08-Sorting-Applications`](08-Sorting-Applications/) | Sorting applications | Additional sorting exercises and implementations. |
| [`09-Trees`](09-Trees/) | Trees | Binary tree traversal/operations and binary search tree implementation. |
| [`10-Graphs`](10-Graphs/) | Graphs | Graph representation, breadth-first search (BFS), and depth-first search (DFS). |
| [`11-Algorithm-Analysis`](11-Algorithm-Analysis/) | Algorithm analysis | Runtime measurement, generated test data, and comparisons of algorithm performance. |
| [`12-Dynamic-Programming`](12-Dynamic-Programming/) | Dynamic programming | Memoization, bottom-up tabulation, and path-counting exercises. |
| [`13-Parallel-Algorithms`](13-Parallel-Algorithms/) | Parallel algorithms | C++ threads, multithreading demonstrations, and a parallel merge-sort exercise. |
| [`14-Sorting-Performance`](14-Sorting-Performance/) | Sorting performance | Sorting implementations and execution-time measurement using `std::chrono`. |

## Repository Structure

Each numbered folder corresponds to a course module. Original `.cpp` source files and required `.h` headers are kept together with their related activities. Where an activity contains multiple parts, its subfolders are retained to make the relationship between driver files and header files clear.

```text
.
├── 01-Fundamentals/
├── 02-Classes-and-Objects/
├── 03-Linked-Lists/
├── 04-Stacks/
├── 05-Queues/
├── 06-Searching-Algorithms/
├── 07-Sorting-Algorithms/
├── 08-Sorting-Applications/
├── 09-Trees/
├── 10-Graphs/
├── 11-Algorithm-Analysis/
├── 12-Dynamic-Programming/
├── 13-Parallel-Algorithms/
├── 14-Sorting-Performance/
├── .gitignore
└── README.md
```

## Building and Running

The programs are written in standard C++ and can be compiled with a C++ compiler such as `g++` (MinGW/MSYS2 on Windows is suitable).

For a standalone source file:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic path/to/source.cpp -o program
./program
```

For activities that use header files, compile the corresponding driver `.cpp` file from the same directory or provide the appropriate include paths. Some folders contain multiple independent `main()` functions, so compile one driver program at a time.

## Notes

- This repository is an academic portfolio documenting coursework and practice implementations.
- Executable binaries and editor-specific workspace settings are intentionally excluded; compile the source files locally.
- Some activities may be individual or collaborative coursework, as indicated by their original filenames and contents.
- The code is retained as coursework rather than presented as a production-ready software library.

## Author

**Dylan Paolo M. Magtaan**  
GitHub: [BurgerPurger](https://github.com/BurgerPurger)
