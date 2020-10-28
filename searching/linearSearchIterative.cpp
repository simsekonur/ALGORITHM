#include<iostream>

using namespace std;

int linearSearch(int array[],int numOfEl,int item);
int linearSearch2(int array[],int numOfEl,int item);

int main(void){
    int numbers[9] = {43,2,7,52,22,25,27,28,29};
    cout << linearSearch(numbers,9,22) << endl;
    cout << linearSearch(numbers,9,99) << endl;
    cout << linearSearch2(numbers,9,22) << endl;
    cout << linearSearch2(numbers,9,99) << endl;



}
//This function assumes that if there is no element we are returning -1
int linearSearch(int array[],int numOfEl,int item){
    int i;
    for(i=0; i< numOfEl ;i++){
        if(array[i]==item){
           
            return i;        
        }
    }
    //When I am done with the loop
    if(i==numOfEl){
        return -1;
    }
}
int linearSearch2(int array[],int numOfEl,int item){
    bool flag = false;
    for(int i=0; i < numOfEl ;i++){
        if(array[i] == item){
            flag = true; // we have found an element
            return i;// we return from the function
        }

    }
    if(flag == false){ // we are not able to find an element
        return -1;
    }



}



