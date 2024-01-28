#include<iostream>
#include<complex>
#include<iomanip>
using namespace std;
class complexi{
	int a,b;
	friend complexi sumC(complexi o1, complexi o2);
public:
int setnumber(int n1, int n2){
	a=n1;
	b=n2;
}

void getnumber(void){
	cout<<a<<"+"<<b<<"i"<<endl;
}


};

complexi sumC(complexi o1, complexi o2){
 complexi o3;
	o3.setnumber((o1.a+o2.a),(o1.b+o2.b));
	return o3;
}
int main()
{ 
	complexi c1,c2,sum;
	c1.setnumber(5,7);
	c2.setnumber(4,3);
	sum=sumC(c1,c2);
	
	c1.getnumber();
	c2.getnumber();
    sum.getnumber();
	return 0;
}
