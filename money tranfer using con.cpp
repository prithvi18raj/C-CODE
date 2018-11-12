#include<iostream>
using namespace std;
class amount
{
	int acc_no;
	float acc_bal;
	public:
	amount()
	{
		acc_no=0;
		acc_bal=0;
	}
	amount(int a)
	{
		acc_no=a;
		acc_bal=0;
	}
	amount(int a,int b)
	{
		acc_no=a;
		acc_bal=b;
	}
	void money_transfer(amount & acc)
	{   int bal;
		cout<<"how much money u transfer=";
		cin>>bal;
		if(acc_bal<bal)
		{
			cout<<"money is not transfer"<<endl;
		}
		else
		{
		acc_bal=acc_bal-bal;
		acc.acc_bal=acc.acc_bal+bal;
	    }
	}
		void show()
		{
		
			cout<<"account no ="<<acc_no;
			cout<<"account balance ="<<acc_bal;
		}
};

int main()
{
	class amount a1(50,65000),a2(55,65000);
	a1.money_transfer(a2);
	cout<<"FIRST ACCOUNT DETAILS"<<endl;
	a1.show();
	cout<<"second account details"<<endl;
	a2.show();
//	class amount a1(10);
	
	
	
	

}
