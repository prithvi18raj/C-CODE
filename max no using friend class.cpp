#include<iostream>
using namespace std;
class b;
class a
{
int num1;
public:

	void set()
	{
		cout<<"enter first no";
	
		cin>>num1;
	}
	friend class b;
	};
class b
{
	int num2;
	public:
		
	void set()
	{
		cout<<"enter second no ";
		cin>>num2;
	}
		void compare(a obj)
		{
		  if(num2>obj.num1)
		  {
           cout<<"num 2is greater";
           
		  }
		  else
		  {
		  	cout<<"num 1 is greater";
		  }
		}
	};	
	int main()
	{
		class a a1;
		class b b1;
        a1.set();
		b1.set();
		b1.compare(a1);	}
	
