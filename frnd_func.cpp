#include <iostream>
using namespace std;

class over
{
	private:
	int dm;
	
	public:
	
	over() //when no arguments in object, this constructor will get executed
	{
		dm = 0;
	}
	
	over(int x) //when 1 arguments in object, this constructor will get executed
	{
		dm = x;
	}
	
	friend void jump(over );
	
	void out()
	{
		cout << dm << endl;		
	}	
	
};

void jump(over o) //this is THE friend function
{
	o.dm = o.dm+2; //friend function can access data member of the class
	
	cout << o.dm << endl;
	
}
int main()
{
	
	over o1(5); //here i use constructor to input value in "dm"
	
	jump(o1); //we can directly call friend function, rather then using object
	
	
	return 0;    
}