# 🧩 holbertonschool-sorting_algorithms

Comprehensive implementations of multiple sorting algorithms in **C**, developed as part of the **Holberton School Low-Level Programming curriculum**.  
This project explores algorithm efficiency, complexity analysis, and the inner mechanics of sorting data structures like arrays and linked lists.

---

## 🧠 Table of Contents
- [Description](#-description)
- [Learning Objectives](#-learning-objectives)
- [Implemented Algorithms](#-implemented-algorithms)
- [Time & Space Complexity](#-time--space-complexity)
- [Project Structure](#-project-structure)
- [Compilation & Execution](#-compilation--execution)
- [Usage Examples](#-usage-examples)
- [Testing & Debugging Tips](#-testing--debugging-tips)
- [Author](#-author)
- [License](#-license)

---

## 📘 Description
Sorting is a fundamental concept in computer science and software engineering.  
This repository demonstrates **different sorting algorithms** and how their performance varies depending on input data and complexity.

Each algorithm is implemented in its own file, following consistent standards:
- **Header file** `sort.h` for type definitions and function prototypes.  
- **Utility files** `print_array.c` and `print_list.c` for visualization during sorting.  
- Clean, modular, and readable C code that adheres to Holberton’s strict style guide.

---

## 🎯 Learning Objectives
By working on this project, you will:
- Understand the **logic and steps behind each sorting algorithm**.
- Practice **pointer manipulation** and **array traversal** in C.
- Learn to **evaluate algorithm efficiency** using Big-O notation.
- Compare algorithms by performance, simplicity, and implementation difficulty.
- Gain experience building **clean and modular low-level programs**.

---

## ⚙️ Implemented Algorithms

| # | Algorithm | File | Data Type | Description |
|---|------------|------|------------|--------------|
| 0 | **Bubble Sort** | `0-bubble_sort.c` | Array | Repeatedly swaps adjacent elements if they are in the wrong order. |
| 1 | **Insertion Sort (List)** | `1-insertion_sort_list.c` | Doubly Linked List | Inserts elements one by one into their correct position in a sorted part of the list. |
| 2 | **Selection Sort** | `2-selection_sort.c` | Array | Finds the minimum element and places it at the beginning of the unsorted region. |
| 3 | **Quick Sort** | `3-quick_sort.c` | Array | Uses divide-and-conquer; partitions the array and recursively sorts subarrays. |
| 4 | **Shell Sort** | `100-shell_sort.c` | Array | Generalization of insertion sort using gap sequences. |

---

## ⏱ Time & Space Complexity

| Algorithm | Best Case | Average Case | Worst Case | Space | Stable |
|------------|------------|---------------|-------------|--------|--------|
| Bubble Sort | O(n) | O(n²) | O(n²) | O(1) | ✅ Yes |
| Insertion Sort | O(n) | O(n²) | O(n²) | O(1) | ✅ Yes |
| Selection Sort | O(n²) | O(n²) | O(n²) | O(1) | ❌ No |
| Quick Sort | O(n log n) | O(n log n) | O(n²) | O(log n) | ❌ No |
| Shell Sort | O(n log n) | O(n^(3/2)) | O(n²) | O(1) | ❌ No |

---

## Team

omar hail alanzi : donz.h.h@gmail.com
ali abdullah Summan



