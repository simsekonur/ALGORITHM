#include<iostream>

using namespace std;

int linearSearchRecursive(int array[],int l,int r,int item);
int linearSearchRecAnother(int array[],int l,int item);

int main(void){
    int numbers[9] = {43,2,7,52,22,25,27,28,29};
    
    int item = 27;
    cout << linearSearchRecursive(numbers,0,8,item)<< endl;
    cout << linearSearchRecAnother(numbers,8,item)<< endl;

}

int linearSearchRecursive(int array[],int l,int r,int item){
    //l=1 r=7
    //l=2 r=6 
    
    if (r < l){
        return -1;
    }
    if (array[l]==item){
        return l;
    }
    else if (array[r]==item){
        return r;
    }
    return linearSearchRecursive(array,l+1,r-1,item);

}
int linearSearchRecAnother(int array[],int lastIndexHitted,int item){
    if(lastIndexHitted<0){
        return -1;
    }
    if(array[lastIndexHitted]==item){
        return lastIndexHitted;
    }
    return linearSearchRecAnother(array,lastIndexHitted-1,item);
}


