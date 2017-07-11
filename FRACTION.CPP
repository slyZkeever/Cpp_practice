#include <iostream.h>
#include <conio.h>

class fraction
{
private:
    int num, deno;

public:
    void input()
    {
	cin >> num >> deno;
    }

    void out ()
    {
	cout << "num = " << num << " & " << "deno = " << deno << endl;
    }

    void calc(fraction f1, fraction f2)
    {

	int w = f1.num*f2.deno;
	int a = f2.num*f1.deno;

	int b = f2.deno*f1.deno;

	cout << "addition = " << w+a << "/" << b << endl;

    }


};

void main()
{

    fraction f1, f2, f3;
    clrscr();
    f1.input();
    f2.input();
    //f1.out();
    //f2.out();
    f3.calc(f1,f2);












    getch();
}