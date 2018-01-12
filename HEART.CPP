#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>

void I(int n)
{
	textbackground(BLACK);
	textcolor(RED + BLINK);
	clrscr();
	int i,j;
	char ch=73;
	gotoxy(15,5);
	for(i=1;i<=n;i++)
		cout<<ch;
	cout<<endl;
	for(i=1;i<=n;i++)
	{
		gotoxy(15,i+5);
		for(j=1;j<=n;j++)
		{
			if(j==n/2)
				cout<<ch<<ch;
			else
				cout<<" ";
		}
		cout<<endl;
	}
	gotoxy(15,n+5);
	for(i=1;i<=n;i++)
		cout<<ch;
	cout<<endl;
	getch();
}

void heart(int n, char name[50])
{
	textbackground(BLACK);
	textcolor(RED + BLINK);
	clrscr();
	int i,j,len,z;
	char ch=3;
	len=strlen(name);
	z=n/2;
	for(i=n/2;i<=n;i+=2)
	{
		gotoxy(10,z++);
		for(j=1;j<n-i;j+=2)
			cout<<" ";
		for(j=1;j<=i;j++)
			cout<<ch;
		for(j=1;j<=n-i;j++)
			cout<<" ";
		for(j=1;j<=i;j++)
			cout<<ch;
		cout<<endl;
	}

	for(i=n;i>=1;i--)
	{
		gotoxy(10,z++);
		for(j=i;j<n;j++)
			cout<<" ";
		if(i==n)
		{
			for(j=1;j<=(n*2-len)/2;j++)
				cout<<ch;
			cout<<name;
			for(j=1;j<=(n*2-len)/2;j++)
				cout<<ch;
		}
		else
		{
			for(j=1;j<=(i*2)-1;j++)
				cout<<ch;
		}
		cout<<endl;
	}
	getch();
}

void U(int n)
{
	textbackground(BLACK);
	textcolor(RED + BLINK);
	clrscr();
	int i,j;
	char ch=85;
	for(i=1;i<=n;i++)
	{       gotoxy(15,i+5);
		for(j=1;j<=n;j++)
		{
			if(j==1 || j==n)
				cout<<ch;
			else
				cout<<" ";
		}
		cout<<endl;

	}
	gotoxy(15,n+5);
	for(i=1;i<=n;i++)
		cout<<ch;
	getch();
}

void main()
{
	clrscr();
	int n;
	char name[50];
	textmode(C40);
	textbackground(WHITE);
	textcolor(BLACK);
	clrscr();
	gotoxy(20,20);
	cout<<"Made By:";
	gotoxy(20,21);
	cout<<"ABHILESH PATWAL";
	gotoxy(5,9);
	cout<<"Creation Studios";
	getch(); gotoxy(5,9); clreol();
	cout<<"Presents";
	getch(); gotoxy(5,9); clreol();
	cout<<"Under Make In INDIA";
	getch(); gotoxy(5,9); clreol();
	cout<<"For Crazy Programming Lovers";
	getch();
	clrscr();
	gotoxy(1,9);
	cout<<"Enter no. of alphabets in your name: ";
	cin>>n;
	cout<<"\nEnter your name: ";
	gets(name);
	clrscr();
	I(n);
	clrscr();
	heart(n,name);
	clrscr();
	U(n);
}