#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	char str[10],tt[10],rr[10],*f=new char[10];
	int a=0;
	scanf("%s %s %s",&str,&tt,rr);
	strcat(str,tt);
	cout<<str;
	f=strstr(str,rr);
while(strlen(f))
	{
	if (rr-str!=0)
	{
		f=strstr(f,rr);
		if (f==NULL)
		{
			break;
		}
		f++;
        a++;
	}
	else
	
		cout<<"net vhog";
	
}
cout<<a;
	system("pause");
}