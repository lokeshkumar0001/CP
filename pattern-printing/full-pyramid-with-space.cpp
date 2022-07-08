#include<iostream>
using namespace std;

int main(){
    int n=1;
    int k;
    for(int i=1;i<=n;i++){
        k=1;
        for(int j=1;j<=2*n-1;j++){
            if(j>n-i && j<n+i && k){
                cout<<"*";
                k=0;
            }else{
                cout<<" ";
                k=1;
            } 
        } cout<<endl;
    }
}