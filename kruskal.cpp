#include<iostream>
using namespace std;

int main()
{
	int array[6][6], wt = 0;

	cout << "the array: ";
	for(int i = 0; i<6; i++)
	{
		for(int j = 0; j<6; j++)
		{
			cin >> array[i][j];
		}
	}
	
	for(int i = 0; i<6; i++)
	{
		int temparr[2];
		int temp = 0;
		for(int j = 1; j < 6; j++)
	    {
			if(array[i][j] > 0)
			{
			if(temp < array[i][j] && array[i][j] > 0)
			{
				temp = array[i][j];
				temparr[i] = i;
				temparr[i+1] = j;
			}
		}
	   

	}




	return 0;
}