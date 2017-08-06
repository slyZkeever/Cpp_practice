#include <iostream>
using namespace std;

class op
{
private:
        int cnt;

public:
        op()
		{
			cnt = 0;
		}
		
		void in()
		{
		    cin >> cnt;
		}
        
		void out()
		{
		    cout << cnt << endl;
		}

        void operator ++()
		{
		    
			cnt = cnt + 1;
		}
};

int main()
{
    op o1; 
	
	cout >> o1++ >> endl;
	

    return 0;
}
