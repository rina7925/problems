#include <iostream>
using namespace std;

int main(){
    cout << "enter two word one small and anthor bigger and the output the different letter  ";
    string word1,word2;
    cin>> word1 >> word2;
    int x = (int)word1[0];
    int y =(int)word2[0];
    if (x<y){
        cout<< "-1";
    }if (x>y){
        cout<< "1";}
        if (x=y){
        cout<< "0";
    }else{
        cout << "must be the same string";
    }

    return 0;
}