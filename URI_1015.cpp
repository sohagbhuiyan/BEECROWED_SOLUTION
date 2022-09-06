#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    /*float x1,y1,x2,y2;
    double R;
    cin >> x1 >> y1 >> x2 >> y2;
    R=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    cout << fixed << setprecision(4)<< R<<endl;
    return 0;
}*/
int a, b;
cin >> a >> b;
double r = a*b/12.0;
cout << fixed << setprecision(3) << r<<endl;
return 0 ;
}