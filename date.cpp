#include<iostream>
using namespace std;
class days{
	int day,month,year;
	public:
		void set();
		void get();
		
};
void days :: set()
{
	cout<<"enter date    ";
	cin>>day;
	cout<<endl<<"enter month   ";
	cin>>month;
	cout<<endl<<"enter year   ";
	cin>>year;
}
void days :: get(){
	cout<<"DATE/MONTH/YEAR IS  ";
	cout<<day<<"/"<<month<<"/"<<year<<endl;
	
}
int main()
{ int i;
	class days s[3];
    for(i=0;i<3;i++)
    {
    	s[i].set();
    	s[i].get();
    	cout<<endl;
	}
}

