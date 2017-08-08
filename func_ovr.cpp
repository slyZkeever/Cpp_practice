#include<iostream>
using namespace std;

class cube
{
	int l1,b1,h1;
	float l2, b2, h2;
	
	public:
	
	cube()
	{
		l1 = 0;
		b1 = 0;
		h1 = 0;
		
		l2 = 0;
		b2 = 0;
		h2 = 0;
	}
	
	void print (int x, int y, int z)
	{
		l1 = x;
		b1 = y;
		h1 = z;
		
		cout << l1*b1*h1 << endl;
	}
	
	void print (float x, float y, float z)
	{
		l2 = x;
		b2 = y;
		h2 = z;
		
		cout << l2*b2*h2 << endl;
	}
	
};

class cylinder
{
	int r1,h1;
	float r2,h2;
	
	public:
	
	cylinder()
	{
		r1 = 0;
		h1 = 0;
		
		r2 = 0;
		h2 = 0;
	}
	
	void print (int x, int y)
	{
		
		r1 = x;
		h1 = y;
		
		cout << 3.14*(r1*r1)*h1 << endl;
	}
	
	void print (float x, float y)
	{
		r2 = x;
		h2 = y;
		
		cout << 3.14*(r2*r2)*h2 << endl;
	}
	
};

class rect
{
	int len1, bred1;
	float len2, bred2;
	
	public:
	
	rect()
	{
		len1 = 0;
		bred1 = 0;
		
		len2 = 0;
		bred2 = 0;
	}
	
	void print (int x, int y)
	{
		
		len1 = x;
		bred1 = y;
		
		cout << len1*bred1 << endl;
	}
	
	void print (float x, float y)
	{
		len2 = x;
		bred2 = y;
		
		cout << len2*bred2 << endl;
	}
	
};

int main()
{
	cube c1;
	c1.print(2,3,4);
	
	cylinder cy1;
	cy1.print(7.3f, 5.8f);
	
	rect r1;
	r1.print(2, 7);	
	
	return 0;
}