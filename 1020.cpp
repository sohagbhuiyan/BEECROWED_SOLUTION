#include<iostream>
using namespace std;

int main()
{
    int days, month, years;

    cin >> days;

    years = days/365;
    month = (days % 365)/30;
    days = days % 365 % 30;

    cout<<years<<" ano(s)"<<endl;
    cout<<month<<" mes(es)"<<endl;
    cout<<days<<" dia(s)"<<endl;
    
    return 0;
}