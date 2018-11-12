#include<iostream>
#include<math.h>
using namespace std;
class complex
{
	int real,imag;
	public:
		void read()
		{
			cout<<"enter real no = ";
			cin>>real;
			cout<<"enter img no = ";
			cin>>imag;
		}
		void show()
		{
			cout<<real;
			if(imag<0)
			cout<<"-i";
			else
			cout<<"+i";
			cout<<abs(imag);
		}
		void sum(complex c1,complex c2)
		{
			real=c1.real+c2.real;
			imag=c1.imag+c2.imag;
			
		}
		
};
int main()
{
	complex c1,c2,c3;
	c1.read();
	c2.read();
	c3.sum(c1,c2);
	cout<<"c3=c1+c2 =  ";
	c3.show();
}

