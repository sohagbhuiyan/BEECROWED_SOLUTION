
#include<bits/stdc++.h>
#include<cstdio>
#include<iomanip>
#include<iostream>
using namespace std;
int main(){
    float A,B,C;
    double pi=3.14159, tri,cir,trapzm,quad,react;
    cin >> A >>B >>C;
    tri=0.5*A*C;
    cir=pi*C*C; 
    trapzm=0.5*(A+B)*C;
    quad=B*B;
    react=A*B;
    cout<<fixed<<setprecision(3)<<"TRIANGULO: "<<tri<<endl;
    cout<<fixed<<setprecision(3)<<"CIRCULO: "<<cir<<endl;
    cout<<fixed<<setprecision(3)<<"TRAPEZIO: "<<trapzm<<endl;
    cout<<fixed<<setprecision(3)<<"QUADRADO: "<<quad<<endl;
    cout<<fixed<<setprecision(3)<<"RETANGULO: "<<react<<endl;
    return 0;
}