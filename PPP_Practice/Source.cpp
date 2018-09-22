//this is where the main moto of the file is declared

#include "std_lib_facilities.h"

class token
{
public:
	char kind;
	int value;
};



int main()
{
	cout << "Greetings programs" << endl;

	token t;
	t.kind = '+';
	cout << t.kind << endl;

	token t2; 
	t2.kind = '8';
	t2.value = 3.14;

	token tt = t;
	cout << tt.kind << " " << tt.value << endl;

	t = t2;
	cout << t.value << endl;	



	return 0;
}