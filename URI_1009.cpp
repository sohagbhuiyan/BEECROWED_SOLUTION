#include<bits/stdc++.h>
#include<iomanip>
#include<iostream>
    using namespace std;
int main() {
    char A [100];
    cin>>A;
    double B,S,Salary;
    cin>>B>>S;
    Salary=B+(0.15*S);
    cout<<fixed << setprecision(2)<<"TOTAL = R$ "<<Salary<<endl;
    return 0;
}
 