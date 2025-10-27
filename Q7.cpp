#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the position";
    cin>>x;
    int steps=0;
    if(x>=5){
        steps++;
        x-=5;
    }
    if(x!=0){
        if((x-4)>=0){
        steps++;
        x-=4;
    }else if ((x-3)>=0){
        steps++;
        x-=3;
    }else if ((x-2)>=0){
        steps++;
        x-=2;
    }
    else if ((x-1)>=0){
        steps++;
        x-=1;
    }}
    cout<<"the minimum numbers of steps = "<<steps;
    return 0;
    
}