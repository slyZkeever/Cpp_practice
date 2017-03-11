#include<stdio.h>
#include<conio.h>
int main()
{
	setbuf(stdout, NULL);
	
    int sz, x, part, proc[20], n, ps, pts[20], i, j, t, full;

    printf("Enter The Size Of Memory Allocated: ");
    scanf("%d",&sz);

    printf("\nEnter The No. of Partitions: ");
    scanf("%d",&part);
    
	printf("\nEnter The Size Of A Partitions: ");
    for(i=0;i<part;i++)
	{
		scanf("%d",&pts[i]);
	}
	
	printf("\nEnter The No. Of Processes: ");
	scanf("%d",&x);
    	
    for(i=0;i<x;i++)
    {
		printf("\nEnter the Size of process %d: ", i+1);
		scanf("%d", &proc[i]);
    }
	i=0;
	for(j=0;j<x;j++)
    {   
        full = pts[j];
		while(i<x)//for(i=0;i<x;i++)use 
        {
			if(proc[i] <= full)
			{
				printf("\n\nProcess %d is allocated in Fragment %d",i+1, j+1);
				printf(", Internal fragmentation: %d", full - proc[i]);
				
				//make process zero as it gets allocated
				
		    }
			
			if(proc[i] > full)
			{
				printf("\n\nprocess %d cannot be allocated",i+1);
				printf(", External Fragmentation: %d", sz-proc[i]);
				/*chk if next fragment has space if yes then allocate there, 
				else break*/
				
				break;
			}	
		 	full = full - proc[i]; //chk if partiton is full
			
			if(full == 0)
            { 
				break;
            }			
			i++;
		}
		full = 0;
	}
	return 0;
}