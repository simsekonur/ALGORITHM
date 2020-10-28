/********************************
* The algorithm : Binary Search 
* Iterative approach
* one while loops-> as long as l <= r 
* Put the values of l, r , m to the correct position
* Go inside your while loop
* if item is greater, you need to do this job in the right side(l=m+1)
* if item is less than, you need to do this job in the left side(r=m-1)
* best O(1)
* worst O(logn)
* average O(logn)
********************************/
#include<iostream>

using namespace std;

int binarySearch(int array[],int numOfEl,int item){

    int l = 0;
    int r = numOfEl-1;
    int m = (l+r )/2;
    //In all of the condition that we want,
    //l is just less than or equal to r 
    while(l <= r){
        
        if (array[m] == item)
            return m;
        else if(item > array[m])
            l = m+1;
        else   // (item < array[m])
            r = m-1; 
            
        m = (l+r)/2;
    }
    //if we are not able to find 
    return -1;

    
    
    
}

int main(void){


    int numbers[7] = {2,7,22,25,27,28,29};
    cout << binarySearch(numbers,7,27) << endl ;
    cout << binarySearch(numbers,7,21) << endl ;

}