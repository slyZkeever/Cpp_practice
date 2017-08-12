#include <iostream>
using namespace std;

class over
{
	private:
	int dm;
	
	public:
	
	over() : dm(0) //when no arguments in object, this constructor will get executed
	{}
	
	over(int x) : dm(x) //when 1 arguments in object, this constructor will get executed
	{}
	
	over operator * (over o) //this is for overloading '+' operator. the address or o and o2 is same
	{
		
		over add; //we create another object inside this function
		add.dm = dm + o.dm; //as we are assessing o1's class, dm is o1.dm
		
		return add; //we return class add
	}
	
	void out()
	{
		cout << dm << endl;		
	}	
	
};
int main()
{
	
	over o1(120), o2(4);
	
	over o3 = o1*o2; //we are accessing object o1 here. it is o1.+(o2) basically
	                //here '+' is overloaded. anything after '+' will be pased as an agrument
					//the returned object is add and therefore '=' add.dm is equal to o3.dm
					// o3 '=' o1+o2 can also be written as o3(o1+o2). it is a copy constructor
	o3.out();
	
	return 0;    
}