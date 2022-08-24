#include<bits/stdc++.h>
#include<iomanip>
#include<iostream>
using namespace std;
int main(){
    int R;
    double pi=3.14159,sphere;
    cin >> R;
    sphere = (4.0/3)*pi*R*R*R;
    cout <<fixed << setprecision(3) <<"VOLUME = " <<sphere <<endl;
    return 0;

}