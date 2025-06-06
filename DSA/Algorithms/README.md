# ALGORITHMS

## Contents

### Table of contents

<!-- toc -->

- [Algorithm Categorization](#algorithm-categorization)
- [Time and Space Complexity](#time-and-space-complexity)
  - [$O(1)$:](#o1)
  - [$O(n)$:](#on)
  - [$O(n^2)$:](#on2)
  - [$O(log_{2}n)$:](#olog_2n)
- [Kadane's Algorithm (sub-array sum)](#kadanes-algorithm-sub-array-sum)
- [Moore's Algorithm (majority element)](#moores-algorithm-majority-element)
- [Tree Traversals](#tree-traversals)
  - [Pre-order Traversal](#pre-order-traversal)
  - [In-order Traversal](#in-order-traversal)
  - [Post-order Traversal](#post-order-traversal)
  - [Level-order Traversal](#level-order-traversal)
- [Graphs](#graphs)
- [Directed Acyclic Graph(DAG)](#directed-acyclic-graphdag)
  - [Topological Sort](#topological-sort)
- [Divide And Conqure](#divide-and-conqure)
  - [Quick Sort](#quick-sort)
- [Reference](#reference)

<!-- tocstop -->

## Algorithm Categorization

1. Based on Problem-Solving Paradigm

- Brute Force
- Divide and Conquer
- Greedy
- Dynamic Programming
- Backtracking
- Branch and Bound
- Randomized Algorithms

2. Based on Problem Type

- Searching Algorithms
- Linear Search
- Binary Search
- BFS / DFS
- Sorting Algorithms
- Bubble Sort
- Merge Sort
- Quick Sort
- Graph Algorithms
- Dijkstra’s Algorithm
- Kruskal’s Algorithm
- A\* Search
- Numerical Algorithms
- Gauss Elimination
- Newton-Raphson Method
- String Algorithms
- KMP (Knuth-Morris-Pratt)
- Rabin-Karp
- Optimization Algorithms
- Knapsack Problem
- Genetic Algorithms

3. Based on Complexity and Efficiency

- Time Complexity
- O(1), O(log n), O(n), O(n log n), O(n²), O(2ⁿ)
- Space Complexity
- Complexity Class
- P
- NP
- NP-Complete
- NP-Hard

4. Based on Implementation Technique

- Iterative Algorithms
- Recursive Algorithms
- Parallel / Concurrent Algorithms

5. Based on Determinism

- Deterministic Algorithms
- Non-deterministic Algorithms
- Probabilistic / Randomized Algorithms

6. Based on Application Domain

- AI & Machine Learning Algorithms
- Data Compression Algorithms
- Cryptographic Algorithms
- Bioinformatics Algorithms
- Network / Routing Algorithms
- Real-time Systems Algorithms

7. Based on Input Mode

- Discrete Algorithms
- Continuous Algorithms
- Online Algorithms (streaming input)
- Offline Algorithms (all input available upfront)

## Time and Space Complexity

To fully understand algorithms we must understand how to evaluate the time an algorithm needs to do its job (the runtime).

When considering the runtime for different algorithms, we will not look at the actual time an implemented algorithm uses to run, and here is why.

If we implement an algorithm in a programming language, and run that program, the actual time it will use depends on many factors:

the programming language used to implement the algorithm

- how the programmer writes the program for the algorithm
- the compiler or interpreter used so that the implemented algorithm can run
- the hardware on the computer the algorithm is running on
- the operating system and other tasks going on on the computer
- the amount of data the algorithm is working on

With all these different factors playing a part in the actual runtime for an algorithm, how can we know if one algorithm is faster than another? We need to find a better measure of runtime.

> To evaluate and compare different algorithms, instead of looking at the actual runtime for an algorithm, it makes more sense to use something called time complexity. Time complexity is based on the input value, rather than the actual time taken by the machine to finish the job, hence it can also be interpreted as number of iterations required to finish the job.

<h4>Big O Notation </h4>

In mathematics, Big O notation is used to describe the upper bound of a function.

In computer science, Big O notation is used more specifically to find the worst case time complexity for an algorithm.

Big O notation uses a capital letter O with parenthesis $O()$ , and inside the parenthesis there is an expression that indicates the algorithm runtime. Runtime is usually expressed using $n$ , which is the number of values in the data set the algorithm is working on.

Below are some examples of Big O notation for different algorithms, just to get the idea:

| Time Complexity | Algorithm                                                                                                                                                                                                                                                                                                                                                   |
| --------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| $O(1)$          | Looking up a specific element in an array, like this for example: `print( my_array[97] )` No matter the size of the array, an element can be looked up directly, it just requires one operation. (This is not really an algorithm by the way, but it can help us to understand how time complexity works.)                                                  |
| $O(n)$          | Finding the lowest value. The algorithm must do $n$ operations in an array with $n$ values to find the lowest value, because the algorithm must compare each value one time.                                                                                                                                                                                |
| $O(n^2)$        | Bubble sort, Selection sort and Insertion sort are algorithms with this time complexity. The reason for their time complexities are explained on the pages for these algorithms. Large data sets slows down these algorithms significantly. With just an increase in $n$ from 100 to 200 values, the number of operations can increase by as much as 30000! |
| $O(n \\log n)$  | The Quicksort algorithm is faster on average than the three sorting algorithms mentioned above, with $O(n \\log n)$ being the average and not the worst case time. Worst case time for Quicksort is also $O(n^2)$, but it is the average time that makes Quicksort so interesting. We will learn about Quicksort later.                                     |

<figure>
  <img style = 'center'
  src="../../assets/Big%20O%20Notation%20Graph.jpg"
  alt="The beautiful MDN logo.">
  <figcaption>Time complexity Graph</figcaption>
</figure>

In Mathematics, Big O notation is used to create an upper bound for a function, and in Computer Science, Big O notation is used to describe how the runtime of an algorithm increases when the number of data values n increase.

For example, consider the function:

$$
f ( n) = 0.5 n^3 − 0.75 n^2 + 1
$$

Asymptotic Notations:

$\Omega (n)$ : Describes the lower bound of a function. Where the algorithm's original time complexity can be $C(n) \geq \Omega(n)$ <br>
$\omega(n)$ : Describes the stric lower bound of a function. $C(n) > \omega(n)$ <br>
$𝑂(𝑛)$ : Describes the upper bound of a function. $C(n) \leq O(n)$<br>
$o(n)$ : Describe the strict upper bound of a function. $C(n) < o(n)$ <br>
$\Theta(𝑛)$ : Describes a tight bound (both upper and lower bounds) of a function. $C(n) = \Theta(n)$<br>

**Definition**

Let $f ( n)$ and $g ( n)$ be two functions. We say that $f ( n)$ is $O ( g ( n))$ if and only if there are positive constants $C$ and $n_0$ such that $C ⋅ g ( n) > f ( n)$ for all $n > n_0$ .

Examples:

#### $O(1)$:

```C++
#include <iostream>
using namespace std;

int main (int argc, char *argv[]) {
    n = 10;
    std::cout << i;
    return 0;
}
```

#### $O(n)$:

Given an order of size `n`, maximum number of iterations that an algorithm takes to finish the task is n, then it's time complexity is $O(n)$.

```C++
#include <iostream>
using namespace std;

int main (int argc, char *argv[]) {
    n = 10;
    for (int i = 0; i < n; i++) {
        std::cout << i;
    }
    return 0;
}
```

#### $O(n^2)$:

```C++
#include <iostream>
using namespace std;

int main (int argc, char *argv[]) {
    n = 10;
    for (int i = 0; i < n; i++) {
        for(int j = 0, j < n, j++){
            std::cout << i;
        }
    }

    return 0;
}
```

#### $O(log_{2}n)$:

```C++
#include <iostream>
using namespace std;

int main (int argc, char *argv[]) {
    n = 10;
    for (int i = 0; i*i < n; i++) {
        std::cout << i;
    }

    return 0;
}
```

#### $O(log_{3}n)$:

The rate of decay of the iterating variable is proportional to power of 3, then it has timec complexity $log_{3}n$.

```C++
#include <iostream>
using namespace std;

int main (int argc, char *argv[]) {
    n = 10;
    for (int i = 0; i*i*i < n; i++) {
        std::cout << i;
    }

    return 0;
}
```

## Kadane's Algorithm (sub-array sum)

Given an array say [4, 3, -1, 5, 2, -8, 9], then the subarray is the continuous memory location of the given array.

Subarrays of this given array can be [4], [4, 3], [4, 3, -1], and [3, -1, 5] etc.. [4, 3, 5, 2] is not a subarray.

How can we find maximum subarray sum. The brute force method is

```c++
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main (int argc, char *argv[]) {
    int n = 7;
    int arr[n] = {3, -4, 5, 4, -1, 7, -8};
    int max_sum = INT_MIN;
    for(int start = 0; start < n; ++start){
        for(int end = start; end < n; ++end){
            int curr_sum = 0;
            for(int st = start; st <= end; ++st){
                curr_sum += arr[st];
            }
            max_sum = max(curr_sum, max_sum);
        }
    }
    std::cout << max_sum << endl;
    return 0;
}
```

Time complexity of the above brute force algorithm is $O(n^3)$, so instead we remove the third loop and instead of calculating the curr_sum every time for each subarray, we add the next element value to the previous subarray curr_sum if the start of the subarray is same.

```c++
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main (int argc, char *argv[]) {
    int n = 7;
    int arr[n] = {3, -4, 5, 4, -1, 7, -8};
    int max_sum = INT_MIN;
    for(int start = 0; start < n; ++start){
        int curr_sum = 0;
        for(int end = start; end < n; ++end){
            curr_sum += arr[end];
            max_sum = max(curr_sum, max_sum);
        }
    }
    std::cout << max_sum << endl;
    return 0;
}
```

Now the time comlexity is $O(n^2)$. To further reduce the time complexity to $O(n)$ we use Kadane's Algorithm.

From the example array we took, let's try to understand this algorithm. The array is [3, -4, 5, 4, -1, 7, -8]. What we do in this algorithm is, we loop around the array only once and everytime we add the value to the curr_sum. Then compare the curr_sum to the max_sum and update the max_sum value. What's happening here is, when we add some negetive value to the subarray, and the total array value is negetive, we update the curr_sum to 0. Since any negetive value added to a positive value is less than the positive value, we begin with value 0 and hence reducing the time complexity to $O(n)$.

```c++
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main (int argc, char *argv[]) {
    int n = 7;
    int arr[n] = {3, -4, 5, 4, -1, 7, -8};
    int max_sum = INT_MIN, curr_sum = 0;
    for(int start = 0; start < n; ++start){
        curr_sum += arr[start];
        max_sum = max(curr_sum, max_sum);
        if(curr_sum < 0){
            curr_sum = 0;
        }
    }
    std::cout << max_sum << endl;
    return 0;
}

```

## Moore's Algorithm (majority element)

Given an array of integers, we need to find out the one value from the array, where the number of times the value repeated in the array is greater than the floor value of the size of the array. i.e., if freq is the frequency of a value say `A`, and n is the total size of the array, if $freq > \lfloorn\rfloor$ then `A` is the Majority element in the array.

Assuming there is exactly one majority element in an array, we can use different algorithms with different time complexiteis.

**Brute Force Algorithm**

```c++
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int bruteForce(vector<int>& nums) {
        int n = nums.size();
        for(int i: nums){
            int count = 0;
            for(int j : nums){
                if(i == j){
                    ++count;
                }
            }
            if(count > n/2){
                return i;
            }
        }
        return -1;
    }
};

int main (int argc, char *argv[]) {
    vector<int> prob = {1, 2, 2, 1, 1};
    Solution Sol;
    std::cout << "Brute Force Algorithm : " << Sol.bruteForce(prob) << endl;
    return 0;
}
```

The time complexity of this algorithm is $O(n^2)$ since there are two loops iterating on all the elements of the array.

**Sorted Array Optimal Algorithm** <br>
we sort the array and then calculate the frequencies with just only one loop. Except the problem is, we need a funtion to sort the array first, it takes nlogn operations and the main algorithm takes n iterations or less to find the majority element. So the overall time complexity is $O(nlogn)$.

```c++
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int sortOptimal(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end()); // sorting the vector
        int freq = 0, ans = nums[0];
        for(int i: nums){
            if(i == ans){
                freq++;
            } else if(i != ans){
                freq = 1;
                ans = i;
            }
            if(freq > n/2){
                return ans;
            }
        }
        return -1;
    }
};

int main (int argc, char *argv[]) {
    vector<int> prob = {1, 2, 2, 1, 1};
    Solution Sol;
    std::cout << "Sorted Array Algorithm : " << Sol.sortOptimal(prob) << endl;
    return 0;
}
```

To further redute the number of operations, we use the Moore's algorithm. We begin with some random number as the solution and then iteratively pass though the array, keep incresing the frequency if the value matches, or reduce the frequency and change the value with that respective value if freq is 0. The main idea behind this algorithm is that, the overall sum of the frequency of the majority element is always positive, so if we keep on repeating this algorithm, for the majority element, the frequency never reaches 0 by the last iteration and the ans variable ends up being the actualy majority element.

```c++
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int mooresAlgorithm(vector<int>& nums) {
        int freq = 0, ans = 0;
        for(int i: nums){
            if(freq == 0){
                ans = i;
            }
            if(i == ans){
                freq++;
            } else{
                freq--;
            }
        }
        return ans;
    }
};
int main (int argc, char *argv[]) {
    vector<int> prob = {1, 2, 2, 1, 1};
    Solution Sol;
    std::cout << "Moore's Algorithm : " << Sol.mooresAlgorithm(prob) << endl;
    return 0;
}
```

## Tree Traversals

Consider this binary tree

```
                                    A(50)
                        -------------------------------
                        |                             |
                        V                             V
                      B(25)                         C(75)
                -----------------              ----------------
                |               |              |              |
                V               V              V              V
              D(15)           E(40)          F(60)          G(90)
            ---------      ---------       ---------      ----------
            |       |      |       |       |       |      |        |
            V       V      V       V       V       V      V        V
          H(10)   I(20)  J(30)   K(45)   L(55)   M(70)  N(80)    O(100)

Where the Alphabetets are the names of the nodes and in the braces,
the value of each node is given.

Fig: Grp1
```

### Pre-order Traversal

Pre-order Traversal is done by visiting the root node first, then recursively do a pre-order traversal of the left subtree, followed by a recursive pre-order traversal of the right subtree. It's used for creating a copy of the tree, prefix notation of an expression tree, etc.

The priority of nodes are, parent node > left node > right node.

The preorder traversal for the graph in figure is given as

$$
A \rightarrow B \rightarrow D \rightarrow H \rightarrow I \rightarrow E \rightarrow J \rightarrow K  C \rightarrow F \rightarrow L \rightarrow M \rightarrow G \rightarrow N \rightarrow O
$$

### In-order Traversal

The In-order traversal give the nodes in a BST in sorted order. i.e., in the BST, the left most deepest node is returned first, then the right node to that parent node, then the parent node and returns back to the root node then only it give the root node. The priority of the node is give to the left most node only, the parent node then the right node.

The priority of nodes are, left node > parent node > right node.

The In-order traversal for the graph in figure is given as

$$
H \rightarrow D \rightarrow I \rightarrow B \rightarrow J \rightarrow E \rightarrow K \rightarrow A \rightarrow L \rightarrow F \rightarrow M \rightarrow C \rightarrow N \rightarrow G \rightarrow O
$$

In value of the node order

$$
(H)10 \rightarrow (D)15 \rightarrow (I)20 \rightarrow (B)25 \rightarrow (J)30 \rightarrow (E)40 \rightarrow (K)45 \rightarrow (A)50 \rightarrow \\
(L)55 \rightarrow (F)60 \rightarrow (M)70 \rightarrow (C)75 \rightarrow (N)80 \rightarrow (G)90 \rightarrow (O)100
$$

### Post-order Traversal

In post-order traversal, the left sub-tree with no unexplored child nodes or leaf nodes are explored first, then after the nodes are explored, a node with explored child nodes will become a node without no unexplored child nodes.

The priority of nodes are left node > right node > parent node

$$
H \rightarrow I \rightarrow D \rightarrow J \rightarrow K \rightarrow E \rightarrow B \rightarrow L \rightarrow M \rightarrow F \rightarrow N \rightarrow O \rightarrow G \rightarrow C \rightarrow A.
$$

### Level-order Traversal

This traversal is used in Breadth Frist Search(BFS) algorithm, where all the nodes in a level are explored and only then the next level is explored. <br>
The level order traversal for the graph in figure **Grp1** is given Below

$$
A \rightarrow B \rightarrow C \rightarrow D \rightarrow E \rightarrow F \rightarrow G \rightarrow H \rightarrow I \rightarrow J \rightarrow K \rightarrow L \rightarrow M \rightarrow N \rightarrow O
$$

## Graphs

There is a possibility of loops in this graph.

## Directed Acyclic Graph(DAG)

### Topological Sort

It is a linear ordering of a graphs vertices, such that for every directed edge `uv` for vertex `u` to `v`, `u` comes before vertex `v` in the ordering.

> 1. Graph should be a DAG <br>
> 2. Every Graph will have atlease one topological sort

In-degree : The number of edges coming into the vertex<br>
out-degree : The number of edges going out from the vertex.

**Algorithm**

1. Find the in-degree of each vertex of the DAG.
2. Find the vertex with in-degree 0 and add it to a list.
3. Remove the node with 0 in-degree and begin from step 1 with the new DAG with removed vertex.

Keep adding all the vertex in from the new DAG's to create a ordered list of vertices.

```mermaid

sequenceDiagram
    participant A as Vertices with no incoming edges
    participant B as Topological Order
    participant C as Graph Update

    A->>B: Add 5, 7 to the order
    A->>C: Remove 5, 7 from the graph

    A->>B: Add 2, 4 to the order
    A->>C: Remove 2, 4 from the graph

    A->>B: Add 0 to the order
    A->>C: Remove 0 from the graph

    A->>B: Add 3 to the order
    A->>C: Remove 3 from the graph

    A->>B: Add 1 to the order
    A->>C: Remove 1 from the graph

    B->>B: Final Order: 5, 7, 2, 4, 0, 3, 1

```

## Divide And Conqure

The Divide and Conqure algorithms are named after the partitioning process that goes on in during sorting. A pivot element is cosidered and based on the pivot element we divide the whole array into sub-arrays and recursively we divide those sub-arrays too till we achieve atomic level and then we find the sorted array.

### Quick Sort

In this sorting algorithm, a pivot element is considered and all the element less then or equal to the pivot element are put in left side of the array and all the element greater than the pivot are put in the right side of the array.

In order to ensure stability in Quicksort, elements equal to the pivot should remain in their original relative order. This can be achieved by partitioning in such a way that all elements ≤ 𝑝 are on the left side, and all elements > 𝑝 are on the right side of the pivot 𝑝 .

After a single partition is performed, the pivot element is positioned in it's approprioate place in the array and we have two different array to sort now.

Again perfrom the quicksort algorithm on the two sub-array, untill all the element are sorted and all the pivot elements are given their approprioate positions.

| **Algorithm**  | **Best Case** | **Average Case** | **Worst Case** |
| -------------- | ------------- | ---------------- | -------------- |
| **Merge Sort** | $O(n log n)$  | $O(n log n)$     | $O(n log n)$   |
| **Quick Sort** | $O(n log n)$  | $O(n log n)$     | $O(n^2)$       |

## Reference

1. Stuart Russell, Peter Norvig: Artificial Intelligence: A Modern Approach (4th Edition). Pearson 2020
2. [W3Schools](https://www.w3schools.com/dsa/dsa_timecomplexity_theory.php)
