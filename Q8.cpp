#include <iostream>
using namespace std;
int main(){
    cout <<"enter w and y points";
    int w,y;
    cin>>w>>y;
    int max = (w>y)? w : y;
    cout<<"the probability to win="<<(max+1)<<"/"<<6;
    return 0;
}