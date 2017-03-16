#include<stdio.h>

struct proc
{
    int p, pri, at, bt, st, ct, tat, wt;
};
int main()
{
	setbuf(stdout, NULL);
    
	struct proc a[3];
	int i, j, ttat=0, twt=0, temp=0;
    float atat, awt;
    for(i=0;i<3;i++)
    {
	    printf("\n Enter The Process Number, Priority, Arrival Time, Burst Time: ");
	    scanf("%d%d%d%d",&a[i].p,&a[i].pri,&a[i].at,&a[i].bt);
	}   
	//sorting
    for(i=1;i<3;i++)
    {	
        for(j=0;j<i;j++)
	    {
	        if(a[j].pri < a[i].pri)
	        {
		        temp = a[i].p;
		        a[i].p = a[j].p;
		        a[j].p = temp;
				
				temp = a[i].pri;
		        a[i].pri = a[j].pri;
		        a[j].pri = temp;
				
				temp = a[i].at;
		        a[i].at = a[j].at;
		        a[j].at = temp;
				
				temp = a[i].bt;
		        a[i].bt = a[j].bt;
		        a[j].bt = temp;
	        }
    	}
    }	
	//filling the rest of the table
	a[0].st = 0;
    a[0].ct = a[0].bt;
	a[0].tat = a[0].ct - a[0].at;
	a[0].wt = 0;
    for(i=1;i<3;i++)
    {
	    a[i].st = a[i-1].ct; 
	    a[i].ct = a[i-1].ct + a[i].bt;
	    a[i].tat = a[i].ct - a[i].at;
	    a[i].wt = a[i].tat - a[i].bt;
    }
    //average turn around time
	//average waiting time
	for(i=0;i<3;i++)
    {
	    ttat = ttat + a[i].tat;
        twt = twt + a[i].wt;
    }
	//printf("\n\nTTAT1: %d",ttat);
	//printf("\n\nTWT1: %d",twt);
    atat = ttat/3;
    awt = twt/3;
	
	//printing the table
	printf("\nPT\tPN.\tAT\tBT\tST\tCT\tTAT\tWT");
    for(i=0;i<3;i++)
    {
		printf("\n%d",a[i].pri);
		printf("\t%d",a[i].p);
		printf("\t%d",a[i].at);
		printf("\t%d",a[i].bt);
		printf("\t%d",a[i].st);
		printf("\t%d",a[i].ct);
		printf("\t%d",a[i].tat);
		printf("\t%d \n",a[i].wt);
		
    }
    printf("\nAverage Turn Around Time: %f",atat);
    printf("\nAverage Waiting Time: %f \n",awt);
	//Table Complete..
	return 0;
}
