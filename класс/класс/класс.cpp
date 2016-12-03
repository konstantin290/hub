#include<iostream>
#include<math.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
class shape
{
public:
	float l;
	shape (float _l)
	{
		l=_l;
	}
	float gets();
	float getp();
};
class circle: public shape{
public:
	circle (int r): shape(r){}
	  float gets()
{
 return 3.14*(l*l);
}
float getp()
{
	return 2*3.14*l;
}
};
class pryamougolnik: public shape{ 
	int y;
public:
	pryamougolnik(int x, int _y):
	  shape(x)
	  {y=_y;}
int gets()
{
 return l*y;
}
int getp()
{
	return 2*(l+y);
}
};
class treu: public shape{
	float o; float p;
public:
	treu(float q, float _o, float _p):
	  shape(q)
	  {o=_o;
	  p=_p;}
	  int getp()
	  {
		  return l+o+p;
	  }
	  int gets()
	  {
		  float t;
		  t=getp();
		  t=t/2;
		  return sqrt(t*(t-l)*(t-o)*(t-p));
	  }
};
void main()
{
treu e(5,2,3);
pryamougolnik f(5,12);
circle y(12);
cout<<"S="<<f.gets();
cout<<" ";
cout<<"P="<<f.getp();
system("pause");
}
