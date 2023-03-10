#include<iostream>
#include<math.h>
using namespace std;
class rect
{
	float x,y;
	public:
		rect()
		{
			x=0;
			y=0;
		}
		rect(float a,float b)
		{
			x=a;
			y=b;
		}
		void display()
		{
			cout<<"x coordinate"<<x<<endl<<"y coordinate"<<y<<endl;
		}
};
class polar
{
	float r,angle;
	public:
		polar()
		{
			r=0;
			angle=0;
		}
		polar(float a, float b)
		{
			r=a;
			angle=b;
		}
		void display()
		{
			cout<<"radius"<<r<<endl<<"angle"<<angle<<endl;
		}
		operator rect()
		{
			float m,n;
			m=r*cos(angle);
			n=r*sin(angle);
			return rect(m,n);
		}
};
int main()
{
	rect re;
	polar po(5,0.78539);
	re=po;
	cout<<"polar coordinates are \n";
	po.display();
	cout<<"rectangle coordinates are \n";
	re.display();
	return 0;
}
