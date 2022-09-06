/*#include<iostream>
using namespace std;
int main(){
    int n, temp;
    cin >> n;
    cout << n <<endl;
    cout <<n / 100 << " nota(s) de R$ 100,00"<< endl;
    temp = n % 100;
    cout << temp / 50<< " nota(s) de R$ 50,00"<< endl;
    temp = temp % 50;
    cout << temp / 20 << " nota(s) de R$ 20,00"<< endl;
    temp = temp % 20;
    cout << temp / 10 << " nota(s) de R$ 10,00"<< endl; 
    temp = temp % 10;
    cout << temp / 5 << " nota(s) de R$ 5,00"<< endl;
    temp = temp % 5;
    cout << temp / 2 << " nota(s) de R$ 2,00" << endl;
    temp = temp % 2;
    cout << temp / 1 << " nota(s) de R$ 1,00" << endl;
    return 0;
}*/

//Notes with Coins URI_1021 no problem:

#include <iostream>

using namespace std;

int main(){
    double N;
    int Num, temp, temp1;

    while(cin >> N){

    Num = N;
    N = 100*N;
    temp1 = N;


    cout << "NOTAS:\n";
    cout << Num/100 << " nota(s) de R$ 100.00\n";
    temp = (Num%100);
    cout << temp/50 << " nota(s) de R$ 50.00\n";
    temp = (temp%50);
    cout << temp/20 << " nota(s) de R$ 20.00\n";
    temp = (temp%20);
    cout << temp/10 << " nota(s) de R$ 10.00\n";
    temp= (temp%10);
    cout << temp/5 << " nota(s) de R$ 5.00\n";
    temp = (temp%5);
    cout << temp/2 << " nota(s) de R$ 2.00\n";
    temp = (temp%2);
    cout << "MOEDAS:\n";
    cout << temp << " moeda(s) de R$ 1.00\n";

    temp1 = temp1%100;
    cout <<  temp1/50 << " moeda(s) de R$ 0.50\n";
    temp1 = temp1%50;
    cout <<  temp1/25 << " moeda(s) de R$ 0.25\n";
    temp1 = temp1%25;
    cout <<  temp1/10 << " moeda(s) de R$ 0.10\n";
    temp1 = temp1%10;
    cout << temp1/5 << " moeda(s) de R$ 0.05\n";
    temp1 = temp1%5;
    cout << temp1/1 << " moeda(s) de R$ 0.01\n";
    }

    return 0;
}