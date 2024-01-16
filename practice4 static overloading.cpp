#include<iostream>
using namespace std;

class Demo
{
	public:
		static void show()
		{
			cout<<"hi"<<endl;
		}
		void show(char * str)
		{
			cout<<str<<endl;
		}
		};
		int main ()
		{
			Demo d1;
			d1.show();
			d1.show("ritesh");
		}
