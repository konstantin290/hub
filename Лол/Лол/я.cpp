#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
class krug
{
public:
	int x;
float gets()
{
 return 3.14*(x*x);
}
float getp()
{
	return 2*3.14*x;
}
};
void main()
{
krug y;
y.x=12;
cout<<"S="<<y.gets();
cout<<" ";
cout<<"P="<<y.getp();
system("pause");
}

