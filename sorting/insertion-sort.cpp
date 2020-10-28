/********************************
* The algorithm : Insertion sort
* Iterative approach
* 2 loops 
* one increment it to the right 
* one compares it with the values on the left
* i = 1 ..... n-1
* j = i-1 (decrementing)
* best O(n)
* worst O(n^2)
********************************/

#include<iostream>

using namespace std;

void insertionSort(int a[],int numOfEl);
void printArray(int a[],int numOfEl);
int main(void){

    int array[6]= {5,4,10,1,6,2};

    printArray(array,6);
    cout << "*********************"<< endl;
    insertionSort(array,6);
    printArray(array,6);

}

void insertionSort(int a[],int numOfEl){
    //first for loop to go to numofEl
    for (int i=1;i< numOfEl;i++){
        //the number is the first of unsorted
        int temp = a[i];
        //j will check for the guys on the left
        int j = i-1;
        //j should be >= 0
        //as long as we can find a bigger element
        while(j>=0 && a[j] > temp){
            //put this to the right of it
            a[j+1] = a[j];
            //continue checking for the others
            j--;

        }
        //When you find a correct place for the 
        //value put it into that
        a[j+1] = temp;

    }


}
void printArray(int a[],int numOfEl){
    for(int i=0; i< numOfEl;i++){
        cout << a[i] << endl;
    }
}