#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class krug
{
public:
	int b;
float gets()
{
 return 3.14*(b*b);
}
float getp()
{
	return 2*3.14*b;
}
};
void main()
{
krug A;
A.b=12;
cout<<"S="<<A.gets();
cout<<" ";
cout<<"P="<<A.getp();
system("pause");
}

