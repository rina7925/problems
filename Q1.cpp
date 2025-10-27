#include <iostream>
using namespace std;

int main(){
    int watermellon;
    cout<<"please enter the weight of the watermelon: ";
    cin>>watermellon;
    for(int i = 1;i<(watermellon/2);i++){
        if(i%2==0){
            cout<<"divide into "<<i <<"and "<<(watermellon-i);
    }
    }
    return 0;
}
