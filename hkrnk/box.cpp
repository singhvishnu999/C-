#include<bits/stdc++.h>

using namespace std;
class Box{
    int length, breadth, height;
    public:
    Box(){
        length=0;breadth=0,height=0;
    }
    Box(int l,int b,int h){
        length=l;breadth=b;height=h;
    }
    Box(Box &B){
        length=B.length; breadth=B.breadth;height=B.height;
    }
    int getLength(int l){
        length=l;
        return l;
    }
    
     int getBreadth(int b){
        breadth=b;
        return b;
    }
    int getHeight(int h){
        height=h;
        return h;
    }
    long long CalculateVolume(long long V){
        V=length*breadth*height;
        return V;
    }
    
};


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}