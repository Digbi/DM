#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
	int busn[5],nt[5],i=0,loc=0;
	float dt[5],dc[5],col[5],temp=0.00,avg1=0.00,temp1=0.00,sum=0;
	printf("\t\tEnter bus details\t\t\n");
	for (i=0;i<5;i++)
	{
			ch1:printf("Enter bus no\n");
				scanf("%d",&busn[i]);
				if(busn[i]<1000)
					goto ch1;
			ch2:printf("Enter no of trips\n");
				scanf("%d",&nt[i]);
				if(nt[i]<1)
					goto ch2;
			ch3:printf("Enter distance travelled\n");
				scanf("%f",&dt[i]);
				if(dt[i]<10.0)
					goto ch3;
			ch4:printf("Enter fuel consumed\n");
				scanf("%f",&dc[i]);
				if(dc[i]<1.0)
					goto ch4;
			ch5:printf("Enter collection\n");
				scanf("%f",&col[i]);
				if(col[i]<1)
					goto ch5;
	}
	printf("\t\tbus no\t\tno of trips\t\tdistance travelled\t\tfuel consumed\t\tcollection\n");
	printf("\t\t------\t\t-----------\t\t------------------\t\t-------------\t\t----------\n");
	for (i=0;i<5;i++)
	{
			
	printf("\t\t%d\t\t%d\t\t%.2f\t\t%.2f\t\t%.2f\n",busn[i],nt[i],dt[i],dc[i],col[i]);
	}
	for (i=0;i<5;i++)
	{
		if(temp<(dt[i]/dc[i]))
		{
			temp=(dt[i]/dc[i]);
			loc=i;
		}
	}
	printf("\tBus no with hightest milege						:%d\n",busn[loc]);
	
	for (i=0;i<5;i++)
	{
		if(temp1<(col[i]/dt[i]))
		{
			temp1=(col[i]/dt[i]);
			loc=i;
		}
	}
	printf("\tBus no with maximum collection in minimum distance :%d\n",busn[loc]);
	for (i=0;i<5;i++)
	{
		sum=sum+nt[i];
	}
	printf("\tAverage number of trips							 :%.2f\n",ceil(sum/5));
	for (i=0;i<5;i++)
	{
		avg1=avg1+(col[i]/5);
	}
	printf("\tAverage collections								 :%.2f\n",avg1);
	getch();
}