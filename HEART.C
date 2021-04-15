#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int i, j, n,k=3;
    char name[50];
    int len;
    clrscr();
    printf("ENTER YOUR MESSAGE:");
    gets(name);
    printf("Enter value of n : ");
    scanf("%d", &n);
    len=strlen(name);
    for(i=n/2; i<=n; i+=2)
    {
	for(j=1; j<n-i; j+=2)
	{
	    printf(" ");
	}

	for(j=1; j<=i; j++)
	{
	    textcolor(128+4);
	    cprintf("%c",k);
	}

	for(j=1; j<=n-i; j++)
	{
	    printf(" ");
	}

	for(j=1; j<=i; j++)
	{
	    textcolor(128+4);
	    cprintf("%c",k);
	}

	printf("\n");
    }

    for(i=n; i>=1; i--)
    {
	for(j=i; j<n; j++)
	{
	    printf(" ");
	}

	if(i==n)
	{
	for(j=1;j<=(n*2-len)/2;j++)
	{
	textcolor(128+4);
	cprintf("%c",k);
	}
	textcolor(2);
	cprintf("%s",name);
	for(j=1;j<(n*2-len)/2;j++)
	{
	textcolor(128+4);
	cprintf("%c",k);
	}
	}
	else
	{
	for(j=1; j<=(i*2)-1; j++)
	{
	    textcolor(128+4);
	    cprintf("%c",k);
	}
	 }
	printf("\n");
    }
    textcolor(5);
    cprintf("FROM:KARTIK ");
    getch();
}