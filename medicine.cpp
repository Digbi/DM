#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int medicode[5]={1001,1002,1003,1004,1005},temp,i,a;
float mediprice[5]={2.25f,5.65f,45.60f,3.35f,6.50f},temp1,sum;
char meditype[5]={'T','C','S','T','C'},temp3;
int qnty[5];
void pmain();
void acc_order()
{
	printf("\t\t order form \t\t\n");
	printf("\t\t------------\t\t\n");
	ch1:printf("\t\t Enter medicine code :");
	scanf("%d",&temp);
	if (temp>=1001 && temp<=1005)
	{
		for (i=0;i<5;i++)
		{
			if (temp==medicode[i])
			{
				printf("\n\tMedicine price :%f", mediprice[i]);
				printf("\n\tMedicine type  :%c",meditype[i]);
				printf("\n\tEnter medicine quantity :");
				scanf("%d",&qnty[i]);
				printf("\npress 1 to enter more medicine or press 2 for bill");
				scanf("%d",&a);
				if(a==1)
					goto ch1;
				else
					pmain();
			}
		}
	}
	else
	{
		printf("\nInvalid medicine code");
		goto ch1;
	}
}
void gen_bill()
{
	
				printf("Medi_code\tMedi_type\tMedi_quanty\tMedic_price\tcost\n");
	for (i=0;i<5;i++)
		{
			if (qnty[i]!=0)
			{
				printf("%d\t\t%c\t\t%d\t\t%.3f\t\t%.3f\n",medicode[i],meditype[i],qnty[i],mediprice[i],mediprice[i]*qnty[i]);
				temp1=mediprice[i]*qnty[i];
				sum=sum+temp1;
			}		
		}
	printf("total cost :%f",sum);

}
void pmain()
{
	int a;
	printf("\t\t MEDICINE STORE \t\t\n");
	printf("\t\t----------------\t\t\n");
	printf("\t\t1. Accept order\t\t\n");
	printf("\t\t2. Generate Bill\t\t\n");
	printf("\t\t3. Exit\t\t\n");
	printf("\t\t Enter your choice : \t\t\n");
	scanf("%d",&a);
	switch(a)
	{
	case 1: acc_order();
			break;
	case 2: gen_bill();
			break;
	case 3: exit(0);
			break;
	default:printf("\t\t Invalide choice \t\t\n");
			pmain();
	}
}
void main()
{
	pmain();
	getch();
}