#include <iostream.h>
#include <conio.h>

class strgs
{
  private:
	   char s[10];

  public:
  strgs()
  {
      for(int i=0; s[i] != '\0'; i++)
      {
	    s[i] = '\0';
      }
  }


  void in()
  {
      cout << "enter string : " << endl;
      cin >> s;
  }

  void length()
  {
     int cnt;
     for(int i = 0; s[i] != '\0'; i++)
     {
	cnt+=1;
     }

  }

  void copy(strgs z)
  {
      for(i= 0; i != '\0'; i++)
      s[i] = z.s[i];
  }

  void cmp()
  {


  }
};


void main()
{
    strgs s1, s2, s3;
    s1.in();
    s1.length();

    s2.copy(s1);

    getch();
}