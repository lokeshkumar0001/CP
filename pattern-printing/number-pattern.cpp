#include<iostream>
using namespace std;

int main(){
    int n=3,k;
    for(int i=1;i<=n;i++){
        k=1;
        for(int j=1;j<=2*n-1;j++){
            if(j>n-i && j<n+i){
                cout<<k;
                j<+1 ? k++:k--;
            }else cout<<" ";
        }
        cout<<endl;
    }
}