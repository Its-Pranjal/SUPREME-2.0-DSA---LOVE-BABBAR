/*
Pattern
1
23
345
4567
*/
#include<iostream>
using namespace std;


int main(){
    int n = 5;            /*int n*/
    int i=1;
    while(i<n){
        int j = i,count = 1;
        while(count<=i){          /*count<i*/
            cout<<j;
            j = j + 1;
            count = count + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
}