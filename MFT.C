#include<stdio.h>
#include<conio.h>
void main()
{


    int sz, x, part, proc[20], n, ps, pts[20], i, j, t, full;
    clrscr();
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

    /*	for(j=0;j<x;j++)
    { */

		for(i=0;i<x;i++)
	{
			if(proc[i] <= pts[i])
			{
				printf("\n\nProcess %d is allocated in Fragment %d",i+1, i+1);
				printf(", Internal fragmentation: %d", pts[i] - proc[i]);



			}

			if(proc[i] > pts[i])
			{
				printf("\n\nprocess %d cannot be allocated",i+1);
				//printf(", External Fragmentation: %d", pts[i] - proc[i]);
				break;
			}


		  }




	getch();
}