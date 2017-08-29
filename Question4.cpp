//Days into year, weeks and days
#include<iostream>
using namespace std;
int main(){
int a,b,c,d,e;
cout << "Enter Days= ";
cin>> a;
b= a/365;
c= a%365;
d= c/7;
e= c%7;
cout<< " Years= "<<b  << "\tWeeks= "<<d <<"\tDays= " <<e;
return 0;
}
