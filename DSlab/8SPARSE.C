#include<stdio.h>
#include<conio.h>

void main()
{
	struct {int r,c,v;} terms[10];
	int i,n;
	clrscr();
	printf("\nEnter the number of non zero elements : ");
	scanf("%d",&n);
	printf("\nEnter the details of %d non zero elements:\n",n);
	for(i=0;i<n;i++)
	{
		printf("\nRow    : ");
		scanf("%d",&terms[i].r);
		printf("Column : ");
		scanf("%d",&terms[i].c);
		printf("Value  : ");
		scanf("%d",&terms[i].v);
	}
	printf("\nTriplets of the sparse matrix are :\n");
	printf("\nRow\tColumn\tValue\n");
	for(i=0;i<n;i++)
	{
		printf("\n%d\t%d\t%d",terms[i].r,terms[i].c,terms[i].v);
	}
	getch();
}
