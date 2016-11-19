#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
class pryamougolnik
{
public:
	int x,y;
int gets()
{
 return x*y;
}
int getp()
{
	return 2*(x+y);
}
};
void main()
{
pryamougolnik f;
f.x=5;
f.y=1;
cout<<"Ploshad="<<f.gets();
cout<<" ";
cout<<"Perimiter="<<f.getp();
system("pause");
}