# Equilibrium Point Finder

This function finds the equilibrium point in an integer array.

## Description

The function accepts an integer array 'arr' of size 'n' as its argument. It returns the index of an equilibrium point in the array, where the sum of elements on the left of the index is equal to the sum of elements on the right of the index. If no equilibrium point exists, the function returns -1.

## Example

### Input 1

7
-7 1 5 2 -4 13 0

### Output

3

### Explanation

3 is an equilibrium index, because:
arr[0] + arr[1] + arr[2] = arr[4] + arr[5] + arr[6]

## Implementation

First compute the total sum of the array elements
make rightSum = totalSum
make leftSum = 0

at the start of the iterations, update rightSum = rightSum - current Array element
if rightSum == leftSum
return current index

else
update leftSum = leftSum + current Array element
