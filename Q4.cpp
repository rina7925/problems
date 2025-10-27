#include <iostream>
using namespace std;

int main(){
    cout <<"enter the number of problems";
    int p,x,y,z;
    cin>>p;
    for(int i=1;i<=p;i++){
        cout<<"enter 1 to answer and 0 to skip for the problem number "<<i;
        cin>>x>>y>>z;
    }
    if(x== 1 or y==1 ){
        if(z==1){
            cout<<"answer";
        }
        cout<<"skip";
    }
    return 0;
}