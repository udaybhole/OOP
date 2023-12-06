#include<iostream>
using namespace std;
class complex
{
	int x,y;
	public:
	complex()
	{
		x=0; //real part.
		y=0; //imag part.
	}
	friend void operator >>(complex &u,complex &v)
	{
	cout<<"Enter the real value for first no. (x1) =>"<<endl;
		cin>>u.x;

	cout<<"Enter the imaginary value of the first no. (y1)"<<endl;
		cin>>u.y;

	cout<<"Enter the real value for second no. (x2) =>"<<endl;
		cin>>v.x;

	cout<<"Enter the imaginary value of the second no. (y2)"<<endl;
		cin>>v.y;
	}
	
	friend void operator <<(complex &u,complex &v)
	{
		cout<<"First complex no is =>"<<u.x<<"+"<<u.y<<"i"<<endl;
		cout<<"second complex no is =>"<<v.x<<"+"<<v.y<<"i"<<endl;
	}


	friend void operator +(complex &u,complex &v)
	{
        cout<<"addition  of the given complex nos. is =>"<<u.x+v.x<<"+"<<u.y+v.y<<"i"<<endl;
    }


	friend void operator *(complex &u,complex &v)
	{
        cout<<"Multiplication  of the given complex nos. is => "<<(u.x*v.x)-(u.y*v.y)<<"+"<<(u.x*v.y)+(v.x*u.y)<<"i"<<endl;
	
	}
};

int main()
{
	char ch;
	char des;
	complex s1,s2;
	operator >>(s1,s2);
	operator <<(s1,s2);
	do
	{
		cout<<"Choose the operation to be performed=> "<<endl;
		cout<<"1.(+)addition"<<endl;
		cout<<"2.(*)Multiplication"<<endl;
		cin>>ch;
		switch(ch)
		{
			case '1':
			s1+s2;
			break;
			case '2':
			s1*s2;
			break;
			default:
 			cout<<"Invalid Operation"<<endl;
		}
		cout<<"Do you Wish To Perform Operation Again ? => (Y/N)";
		cin>>des;
	}while(des=='y'||des=='Y');
}
