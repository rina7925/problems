#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int x;
    cout << "how manu number you want to calculate";
    cin >> x;
    int num[x] ;
    cout << "enter (1,2,3) to calculate the summation ";
    for(int i =0 ; i< x ; i++){
        cin >> num[i];
    }
    sort(num , num+x);
    for(int i = 0; i < x; ++i) {
        cout << num[i] << "+";
    }
    return 0;
}