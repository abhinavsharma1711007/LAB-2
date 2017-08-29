#include<iostream>
#include<cmath>
using namespace std;
int main(){
float a,b,c,d;
cout<< "Priciple=(rupee)\t ";
cin>>a;
cout<< "Rate=(%)\t ";
cin>>b;
cout<< "Time=(year)\t ";
cin>>c;
cout<< "Compounding Frequency=(per year)\t ";
cin>> d;
cout<< "Compound_Interest= "<<a*pow((1 + b/(d*100)),(d*c))-a;
return 0;
}
