#include<iostream>
 using namespace std;


 int mxchange(int money)
 {int ct,c10,c5,c1;
c10=money/10;
c5=(money%10)/5;
if(c5==0)
c1=(money%10)%5;
else
	c1=((money%10)%5) -5;


ct=c1+c10+c5;
return ct;
 }

 int main(){
 	int a;
 	cin>>a;
 	cout<<mxchange(a);
 }
