#include <iostream>
using namespace std;

int main(){
    int x=0;
    int y;
    int z;
    cout<<"enter the num of operation";
    cin>>y;
    cout<<"enter 0 for + , 1 for -";
    for(int i=0; i<y;i++){
        cin>>z;
        if(z==0){
            x++;
        }
        else if(z==1){
            x--;
        }
    }
    cout<<x;

    return 0;
}