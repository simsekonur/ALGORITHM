#include<iostream>
#include<cstring>
using namespace std;

int max(int a, int b) 
{ 
    return (a > b) ? a : b; 
} 
// x
// y
// x has m element  
// y has n element 

int lcs (char * x,char *y ,int m,int n){
    if(m==0 || n==0){
        return 0;
    }
    else if(x[m-1]==y[n-1]){
        return 1+lcs(x,y,m-1,n-1);
    }
    else {
        return max(lcs(x,y,m-1,n),lcs(x,y,m,n-1));
    }
}


int main(void){
    char x[] = "AGGTAB";
    char y[] = "GXTXAYB";
    int m = strlen(x); 
    int n = strlen(y); 
    cout << lcs(x,y,m,n);

}