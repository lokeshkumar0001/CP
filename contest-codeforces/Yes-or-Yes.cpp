#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main(){

    long t;
    cin>>t;

    vector<string> vec;
    string letter;

    while(t--){
        cin>>letter;
        vec.push_back(letter);
    }

    
    for(string letter: vec){
        transform(letter.begin(),letter.end(),letter.begin(),::tolower);
        if(letter == "yes"){
            cout<< "YES"<<endl;
        }else cout<<"NO"<<endl;
    }   



    
}