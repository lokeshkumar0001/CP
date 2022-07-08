#include<iostream>
using namespace std;

int main(){
    int n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j>n-i && j<n+i){
                cout<<"*";
            }else cout<<" ";
        }
    }
}