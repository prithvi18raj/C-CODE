#include<iostream>
using namespace std;
class girl;
class boy
{
	int income1,income2;
	public:
		void set_data(int in1,int in2)
		{
			income1=in1;
			income2=in2;
		}
		friend class girl;
};
class girl
{
	int income;
	public:
	void set_data(int in)
	{
		income=in;
	}
	int girlfun(boy b1)
	{
		return b1.income1+b1.income2;
	}
	void show()
	{
		boy b1;
		cout<<"your income1 "<<b1.income1;
		cout<<"income of b1 "<<income;
		
	}
	
	
};
int main()
{
	class boy b1;
	class girl g1;
	b1.set_data(500,1000);
	g1.set_data(300);
	cout<<"total income income of b1"<<g1.girlfun(b1);
	g1.show();
}
