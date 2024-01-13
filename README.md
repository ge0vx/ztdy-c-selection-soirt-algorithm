# ztdy-c-selection-soirt-algorithm


## Complexity Analysis of Selection Sort

Selection Sort requires two nested for loops to complete itself, one for loop is in the function selectionSort, and inside the first loop we are making a call to another function indexOfMinimum, which has the second(inner) for loop.

Hence for a given input size of n, following will be the time and space complexity for selection sort algorithm:

Worst Case Time Complexity [ Big-O ]: O(n2)

Best Case Time Complexity [Big-omega]: O(n2)

Average Time Complexity [Big-theta]: O(n2)

Space Complexity: O(1)


## To exceute the program runs:

1.
gcc selection-sort.c -o selection-sort

or:

clang selection-sort.c -o selection-sort

2.
./selection-sort