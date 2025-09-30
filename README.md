# 🔍 Searching in C++

## 🎯 Aim  
To study and implement **Searching algorithms in C++**, including **Linear Search, Binary Search, Jump Search, Interpolation Search, and Fibonacci Search**, and to compare their efficiency, time complexity, and use cases.

---

## 📚 Theory  

Searching is the process of finding the location of a given element (called the **key**) in a collection of data.  

### 1. Linear Search  
- Traverses the array sequentially from the first element to the last.  
- Works on **unsorted or sorted arrays**.  
- Time Complexity: **O(n)**  
<img width="996" height="362" alt="image" src="https://github.com/user-attachments/assets/879b86e5-c032-45c0-9b32-60bcb9b1895e" />

---

### 2. Binary Search  
- Works only on **sorted arrays**.  
- Repeatedly divides the search interval in half.  
- Time Complexity: **O(log n)**  
<img width="1235" height="579" alt="image" src="https://github.com/user-attachments/assets/8ca05e58-e7b0-4399-98f4-65c616d83b2a" />

---

### 3. Jump Search  
- Works on **sorted arrays**.  
- Instead of checking every element, it jumps ahead by fixed steps (√n).  
- Once the block is found, it performs a linear search inside the block.  
- Time Complexity: **O(√n)**  

---

### 4. Interpolation Search  
- Works on **sorted and uniformly distributed arrays**.  
- Improves on binary search by estimating the position of the key using interpolation formula:  
  `pos = low + ((key - arr[low]) * (high - low)) / (arr[high] - arr[low])`  
- Time Complexity: **O(log log n)** (best case), **O(n)** (worst case if distribution is skewed).  

---

### 5. Fibonacci Search  
- Works on **sorted arrays**.  
- Uses Fibonacci numbers to divide the array into sections.  
- Similar to binary search but uses Fibonacci sequence to determine mid.  
- Time Complexity: **O(log n)**  

---

## 📋 Algorithms  

Got it 👍 You just need the **algorithm (ready-to-copy text)** for **Program 1 (Linear Search)** and **Program 2 (Binary Search)**.
Here you go:

---

## **Program 1 – Linear Search**

**Algorithm:**

1. Start the program.
2. Initialize an array with elements `{9, 8, 5, 1, 0, 3, 2}`.
3. Input the target element to be searched.
4. Set a flag variable `found = -1`.
5. Repeat for each element in the array from index `0` to `size-1`:

   * If the current element equals the target, store the index in `found` and break the loop.
6. If `found != -1`, display "Element found at index = found".
7. Else, display "Element not found".
8. Stop the program.

---

## **Program 2 – Binary Search**

**Algorithm:**

1. Start the program.
2. Initialize an array `{9, 8, 5, 1, 0, 3, 2}`.
3. Sort the array in ascending order.
4. Input the target element to be searched.
5. Set two variables: `low = 0`, `high = size - 1`.
6. Repeat while `low <= high`:

   * Calculate `mid = (low + high) / 2`.
   * If `arr[mid] == target`, element is found → print index and exit loop.
   * Else if `arr[mid] < target`, set `low = mid + 1`.
   * Else set `high = mid - 1`.
7. If the element is not found, display "Element not present".
8. Stop the program.

---

Would you like me to also **make the pseudocode style shorter (like just numbered steps)** so it looks neat for your college practical file?

---

### 🧾 Jump Search  
1. Start  
2. Input sorted array and key.  
3. Set step = √n.  
4. Jump ahead in steps until `arr[min(step, n)-1] >= key`.  
5. Perform linear search in the block from `step/prev` to `step`.  
6. If found, return index; else print "Element not found".  
7. End  

---

### 🧾 Interpolation Search  
1. Start  
2. Input sorted, uniformly distributed array and key.  
3. Initialize `low = 0`, `high = n-1`.  
4. While `low <= high` and `key >= arr[low]` and `key <= arr[high]`:  
   - Compute `pos = low + ((key - arr[low]) * (high - low)) / (arr[high] - arr[low])`.  
   - If `arr[pos] == key`, return index.  
   - Else if `arr[pos] < key`, set `low = pos + 1`.  
   - Else set `high = pos - 1`.  
5. If not found, print "Element not found".  
6. End  

---

### 🧾 Fibonacci Search  
1. Start  
2. Input sorted array and key.  
3. Initialize Fibonacci numbers: `fibM = fib(k)`, `fibMm1 = fib(k-1)`, `fibMm2 = fib(k-2)`.  
4. While `fibM < n`, generate next Fibonacci number.  
5. Set offset = -1.  
6. While `fibM > 1`:  
   - `i = min(offset + fibMm2, n-1)`  
   - If `arr[i] < key`: shift Fibonacci numbers down by one, set offset = i.  
   - Else if `arr[i] > key`: shift Fibonacci numbers down by two.  
   - Else return index.  
7. If last element matches key, return index.  
8. Else print "Element not found".  
9. End  

---

## 🧩 Time Complexity Comparison  

| Algorithm           | Best Case | Worst Case | Average Case | Space Complexity |
|---------------------|-----------|------------|--------------|------------------|
| Linear Search       | O(1)      | O(n)       | O(n)         | O(1)             |
| Binary Search       | O(1)      | O(log n)   | O(log n)     | O(1)             |
| Jump Search         | O(1)      | O(√n)      | O(√n)        | O(1)             |
| Interpolation Search| O(1)      | O(n)       | O(log log n) | O(1)             |
| Fibonacci Search    | O(1)      | O(log n)   | O(log n)     | O(1)             |

---

## 🚀 Applications  

- **Linear Search** → Small or unsorted datasets.  
- **Binary Search** → Large sorted datasets.  
- **Jump Search** → Sorted datasets where √n comparisons are acceptable.  
- **Interpolation Search** → Sorted, uniformly distributed datasets (e.g., phonebooks).  
- **Fibonacci Search** → Sorted datasets where division is costly (uses addition/subtraction).  

---

## 🧠 Conclusion  

- **Linear Search** is simple but inefficient for large datasets.  
- **Binary Search** is efficient but requires sorted data.  
- **Jump Search** optimizes search by skipping blocks.  
- **Interpolation Search** is best for uniformly distributed data.  
- **Fibonacci Search** is an alternative to binary search that avoids division.  
- Together, these algorithms form the foundation of **searching techniques in DSA** and are widely applied in databases, operating systems, and real-time applications.  
