#include<iostream>
using namespace std;

int main(){
    int n=4;
    char k;

    for(int i=1;i<=n;i++){
        k='A';
        for(int j=1;j<=2*n-1;j++){
            if(j>n-i+1 && j<n+i-1){
                cout<<" ";
                if(j==n){
                    k--;
                }
            }else {
                cout<<k; 
                j<n ? k++:k--;
            }
        }cout<<endl;
    }
}