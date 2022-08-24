#include<bits/stdc++.h>
#include<iomanip>
#include<iostream>
    using namespace std;
int main() {
    int code1, code2, qty1, qty2;
    double price1, price2, total;
    cin >> code1 >> qty1 >> price1;
    cin >> code2 >> qty2 >> price2;

    total = price1*qty1 + price2*qty2;
     cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << total << endl;
    return 0;
}
 
 /*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=2,code,number,i;
    float price,paid=0.00;

    for(i=0; i<n; i++){
        scanf("%d %d %f", &code, &number, &price);
         paid = paid+(number*price);
    }
    printf("VALOR A PAGAR: R$ %.2f\n", paid);
    return 0;
*/
