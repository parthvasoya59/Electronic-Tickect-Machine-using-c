#include<stdio.h>
#include<conio.h>

int s[12]={0,92,138,206,250,337,358,405,484,496,539,560};

void tab()
{
	printf("\n\t\t\t");
}

void star()
{
	int i;
	for(i=0;i<20;i++)
		printf(" *");
}

struct date
{
	int day;
	int month;
	int year;
}today;

void date()
{
	printf("Enter the today's date inform of (dd/mm/yy):");
	scanf("%d/%d/%d",&today.day,&today.month,&today.year);

}

void design()
{
	tab();
	star();

	tab();
	printf("\t\tV.P.R.T.P.L.");

	tab();
	printf("  V & P ROAD TRASPOART PRIVATE LIMITED");

	tab();
	star();

	printf("\n");
	tab();
	printf("\t*****JAMNAGAR TO SURAT*****\n");

}

int no_ticket()
{
	int tn;

	printf("\nENTER YOUR TICKETS:");
	scanf("%d",&tn);

	return tn;
}

void switch_sd(int i)
{
	switch(i)
	{
		case 1:
			printf("JAMNAGAR");
			break;

		case 2:
			printf("RAJKOT");
			break;

		case 3:
			printf("CHOTILA");
			break;

		case 4:
			printf("LIMBDI");
			break;

		case 5:
			printf("BAGODARA");
			break;

		case 6:
			printf("NADIAD");
			break;

		case 7:
			printf("ANAND");
			break;

		case 8:
			printf("VADODARA");
			break;

		case 9:
			printf("BHARUCH");
			break;

		case 10:
			printf("ANKLESHWAR");
			break;

		case 11:
			printf("KAMREJ");
			break;

		case 12:
			printf("SURAT");
			break;

	}
}
void main()
{
	float total,v;
	int i,j,a,tn,sl;

       //   t=no_ticket();
	clrscr();
	design();
	tab();
	date();
do
{
	clrscr();
	design();

	tab();
	printf("DATE: %d/%d/%d\n",today.day,today.month,today.year);

	printf("\n1.JAMNAGAR\t 2.RAJKOT\t 3.CHOTILA\t 4.LIMBDI\t 5.BAGODRA\t 6.NADIAD\t 7.ANAND\t 8.VADODARA\t 9.BHARUCH\t 10.ANKLESHWAR\t 11.KAMREJ\t 12.SURAT");

	label1:

	printf("\n ENTER YOUR SOURCE NUMBER:");
	scanf("%d",&i);
	if(i<12)
	{
		label2:

		printf("\n ENTER YOUR DESTINATION NUMBER:");
		scanf("%d",&j);

		if(i<j&&j<=12)
		{
			tn=no_ticket();

			label:

			printf("\n1.SLEEPER\t 2.SEATER.");
			scanf("%d",&sl);

			switch(sl)
			 {

				case 1:
					v=(s[j-1]-s[i-1])*0.71;
					getch();
					break;

				case 2:
					v=(s[j-1]-s[i-1])*0.51;
					getch();
					break;

				default:
					printf("\n PLEASE ENTER A VALID CHOICE.");
					goto label;

			  }

			total=v*tn;
		}
		else
		 {
			printf("\n\nPLEASE ENTER VAILD DESTINATION NUMBER.");
			goto label2;
		 }
	}
	else
	 {
		printf("\n ENTER A VALID SOURCE NUMBER.");
		goto label1;
	 }


	clrscr();
	design();

	tab();
	printf("DATE: %d/%d/%d\n",today.day,today.month,today.year);

	tab();
	printf("SOURCE: ");
	switch_sd(i);

	printf("\n");
	tab();
	printf("DESTIANTION: ");
	switch_sd(j);
	printf("\n");
	tab();
	if(sl==1)
		printf("CLASS:SLEEPER");
	else
		printf("CLASS:SEATER");

	printf("\n");
	tab();
	printf("YOUR AMOUNT: RS %.2f",total);

	tab();
	star();

	tab();
	printf("EMERGENCY NO.: 6355119697 / 8780774592");

	tab();
	printf("MAIL: vprtpl.9@icloud.com");

	tab();
	printf("THANK YOU FOR TRAVELLING.");

	tab();
	star();

	tab();
	printf("DO YOU WANT TO MOVE FORWARD(1/0):");
	scanf("%d",&a);
}while(a==1);

//	printf("%d *  %f= Rs%f",
	getch();
}
