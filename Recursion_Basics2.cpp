#include<iostream>
using namespace std;

//FUNCTIONAL VS PARAMETEREISED RECURSION TO PRINT SUM OF N NUMBERS

void sum1(int i, int sum){  //PARAMETERISED
    if(i<1){
        cout<<sum;
        return;
    }

    sum1(i-1,sum+i);
}


int sum(int n){             //FUNCTIONAL
    if(n==0){
        return 0;
    }

    return n+sum(n-1);
}

int main(){
    int n,ans;
    cout<<"\n Enter the number";
    cin>>n;

    //sum1(n,0); //Parameterised call
    //ans=sum(n); //Functional call
    // cout<<ans;

    return 0;
}