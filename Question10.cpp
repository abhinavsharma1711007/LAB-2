#include<iostream>
using namespace std;
int main(){
float m,a,b,c,d,e,sum,avg,pc;
cout<< "Enter maximum possible marks obtainable in 1 subject";
cin>>m;
cout<< "Physics\t ";
cin>>a;
cout<< "Maths\t ";
cin>>b;
cout<< "Biology\t ";
cin>>c;
cout<< "Chemistry\t ";
cin>>d;
cout<< "CS\t ";
cin>>e;
sum=a+b+c+d+e;
avg=sum/5;
pc= sum/(5*m)*100;
cout<<"Sum= "<<sum<<"\taverage= "<<avg<<"\tpercentage="<<pc;
return 0;
}
