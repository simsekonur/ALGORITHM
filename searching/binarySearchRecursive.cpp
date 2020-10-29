/********************************
* The algorithm : Binary Search 
* Paramaters of the function : array,l,r,item
* Recursive approach
* The base case the guy in middle is equal to item. 
* if item is greater, you need to do this job in the right side
* if item is less than, you need to do this job in the left side
* best O(1)
* worst O(logn)
* average O(logn)
********************************/

#include <iostream>

using namespace std;

int binarySearchRecursive(int array[], int l, int r, int item);

int main(void)
{
    cout << "Hello!" << endl;
    int numbers[7] = {2, 7, 22, 25, 27, 28, 29};
    cout << binarySearchRecursive(numbers, 0, 6, 27);
}

int binarySearchRecursive(int array[], int l, int r, int item)
{
    if (r>=l)
    {
        int m = (l + r) /2; 
        if (array[m] == item)
            return m;
        else if (item > array[m])
            binarySearchRecursive(array, m + 1, r, item);
        else
            binarySearchRecursive(array, l, m - 1, item);
    }
    else {
    
	return -1;    
    }

}
