#include <iostream>
using namespace std;

int main(){
    cout<<"enter a word";
    string x;
    cin>>x;
    for(int i=0;i<x.length()-1;i++){
        if(size(x)>10){ 
            cout<<x[0]<<(size(x)-2)<<x[size(x)-1];
        }
        else{
            cout<<x;
        }}
    return 0;
}