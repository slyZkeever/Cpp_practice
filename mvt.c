#include<stdio.h>
int main()
{
    setbuf(stdout, NULL);
	int n,i=0,j,x,block;
	char ch='y';
	printf("Enter The Size Of Memory: ");
	scanf("%d",&n);
	while(ch == 'y')
	{
		block = i+1;
		printf("\nMemory Remaining: %d", n);
		printf("\nFragment No: %d",block);
		printf("\nEnter The Size of process: ");
		scanf("%d",&x);
		if(n>=x)
		{
			printf("Memory Allocated!");	
		}
	    else
		{
			printf("Memory Not Allocated!");
        }	    
		n = n-x;
	    printf("\nDo You wish to continue y/n: ");
		scanf(" %c",&ch);
		
		i++;
	}	
    return 0;
}