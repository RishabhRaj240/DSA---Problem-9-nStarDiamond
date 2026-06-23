# Star Diamond Pattern in C++

A beginner-friendly C++ program that demonstrates pattern printing using nested loops.

This project generates a **Diamond Star Pattern** by combining a pyramid and an inverted pyramid. It helps beginners understand nested loops, spacing logic, symmetry, and pattern-based problem solving.

---

## 📌 Features

* Prints a symmetric diamond pattern using stars (`*`)
* Uses nested `for` loops
* Demonstrates spacing and alignment techniques
* Combines upper and lower pyramid patterns
* Beginner-friendly implementation

---

## 🛠️ Technologies Used

* C++
* Standard Input/Output (`iostream`)

---

## 📂 Problem Statement

Given an integer `N`, print a diamond-shaped pattern consisting of stars.

### Example

For:

```txt
N = 5
```

Output:

```txt
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
```

---

## 📸 Screenshot

<img width="1920" height="1080" alt="Screenshot (1849)" src="https://github.com/user-attachments/assets/69c33358-9111-44cb-b724-0cff8dbd2db2" />

Example folder structure:

```txt
project-folder/
│
├── main.cpp
├── README.md
└── screenshots/
    └── output.png
```

---

## 💻 Source Code

```cpp
void nStarDiamond(int n) {

    // Upper Pyramid
    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        for (int j = 0; j < 2 * i - 1; j++) {
            cout << "*";
        }

        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        cout << endl;
    }

    // Lower Inverted Pyramid
    for (int k = 1; k <= n; k++) {

        for (int l = 1; l < k; l++) {
            cout << " ";
        }

        for (int l = 0; l < 2 * n - (2 * k - 1); l++) {
            cout << "*";
        }

        for (int l = 1; l < k; l++) {
            cout << " ";
        }

        cout << endl;
    }
}
```

---

## ▶️ How to Run

1. Compile the program:

```bash
g++ main.cpp -o main
```

2. Run the executable:

```bash
./main
```

3. Enter the value of `N`.

---

## 📸 Example Output

### Input

```txt
4
```

### Output

```txt
   *
  ***
 *****
*******
*******
 *****
  ***
   *
```

---

## 📖 Learning Concepts

This project helps beginners understand:

* Nested loops
* Pattern printing
* Pyramid patterns
* Inverted pyramid patterns
* Symmetry in programming
* Loop boundary calculations
* Algorithmic thinking

---

## 🔍 Pattern Explanation

### Upper Pyramid

The upper half prints an increasing odd number of stars:

```cpp
2 * i - 1
```

Result:

```txt
*
***
*****
*******
```

### Lower Inverted Pyramid

The lower half prints a decreasing odd number of stars:

```cpp
2 * n - (2 * k - 1)
```

Result:

```txt
*******
*****
***
*
```

Combining both sections creates a complete diamond shape.

---

## ⏱️ Complexity Analysis

### Time Complexity

```txt
O(N²)
```

Two nested-loop sections each execute approximately `N²` operations.

### Space Complexity

```txt
O(1)
```

Only loop variables are used.

---

## 👨‍💻 Author

Developed as a beginner-friendly C++ practice project for learning nested loops, pattern printing, and algorithmic problem-solving.
