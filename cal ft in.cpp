#include<iostream>
using namespace std;
class distance
	{
		float feet,inch;
		public:
			void init(float ft,float in)
			{
			feet=ft;
			inch=in;
        	}
        	void read()
        	{
        	cout<<"enter feet";
        	cin>>feet;
        	cout<<"enter inch";
        	cin>>inch;
			}
			void show()
			{
				cout<<feet<<"\t"<<inch;
			}
			void add(distance d1,distance d2)
			{
				feet=d1.feet+d2.feet;
				inch=d1.inch+d2.inch;
				if(inch>=12)
				{
					feet=feet+1.0;
					inch=inch-12.0;
				}
			}
		};
	int main()
{
	class distance d1,d2,d3;
	d2.init(11.0,6.25);
	d1.read();
	cout<<"d1 is";
	d1.show();
	cout<<endl<<"d2 is";
	d2.show();
	d3.add(d1,d2);
	cout<<endl<<"d3=d1+d2"<<endl;
	d3.show();
}

