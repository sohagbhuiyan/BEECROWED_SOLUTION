#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int a;
    float b;
    double result;
    cin >> a >> b;
    result=a/b;
    cout<<fixed << setprecision(3);
    cout<<result<<" km/l"<<endl;
    return 0;
}