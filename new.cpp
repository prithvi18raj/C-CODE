#include<iostream>
using namespace std;
class array
{
	int *p,size;
	public:
		void setsize(int s);
		void read();
		void show();
		void destroyed();
};
void array::setsize(int s)
{
size=s;
p=new int[size];
}
void array::destroyed()
{
	delete p;
}
void array::show()
{
	cout<<"element are "<<endl;
	for(int i=0;i<size;i++)
	cout<<p[i]<<endl;
}
void array::read()
{
	cout<<"enter the elements of array"<<endl;
		for(int i=0;i<size;i++)
	    cin>>p[i];

	
}


int main()
{
	class array a;
	int count;
	cout<<"enter the size of array = ";
	cin>>count;
	a.setsize(count);
	a.read();
	a.show();
	a.destroyed();
}

