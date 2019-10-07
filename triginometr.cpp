#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a,b,c,x,d;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<"c=";
	cin>>c;
	d=sqrt(pow(a,a) + pow(b,b));
	if(abs(c)<d)
	{
		double p1=a/sqrt(pow(a,a)+pow(b,b))*sin(x);
		double p2=b/sqrt(pow(a,a)+pow(b,b))*cos(x);
		double p3=c/sqrt(pow(a,a)+pow(b,b));
		double otv1=sin(x)*sin(p1)+cos(x)*cos(p2);
		cout<<"Description is a "<<otv1<<"\n";
	}
	else if(abs(c)>d)
	{
		cout<<"The equation has no solutions";
	}
}
