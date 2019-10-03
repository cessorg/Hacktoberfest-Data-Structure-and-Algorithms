#include<iostream.h>
#include<conio.h>
class alpha
{int x;
public:
alpha(int i)
{x=i;
cout<<"Alpha constructed \n";
}
void showa()
{cout<<"x : "<<x;
}};
class beta
{int b,c;
public:
beta(int a,int g):b(a),c(g)
{cout<<"Beta constructed \n";
}
void showb()
{cout<<"B : "<<b<<endl<<"C :"<<c;
}
};
class gamma:public alpha,public beta
{int u,v;
public:
gamma(int a,int b,int c,int d):alpha(a),beta(b,b)
{u=c;
v=d;
cout<<"Gamma constructed \n";
}
void displayg()
{cout<<"u :"<<u<<endl<<"v : "<<v;
}
};
void main()
{clrscr();
gamma g(1,2,3,4);
g.showa();
g.showb();
g.displayg();
getch();
}
