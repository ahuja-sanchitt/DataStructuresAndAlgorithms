#include<iostream>
using namespace std;

//PROGRAM TO PRINT NUMBERS FROM N-1 USING RECURSION(BACKTRACKING AND WITHOUT BACKTRACKING)


void f(int i,int N){            // WITHOUT BACKTRACKING
    if(i<1){
        return;
    }
    cout<<i;
    f(i-1,N);
}


void f1(int i,int N){       // WITH BACKTRACKING
    if(i>N){
        return ;
    }
    f1(i+1,N);
    cout<<i;
}


int main(){
    int n;
    cout<<"\n Enter N";
    cin>>n;
    //f(n,n);
    //f1(1,n);

    return 0;
}