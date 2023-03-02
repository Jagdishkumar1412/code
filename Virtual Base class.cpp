#include<iostream>
using namespace std;
class student
{
	int roll_no;
	public:
		void getroll_no(int r)
		{
			roll_no=r;
		}
		void putroll_no()
		{
			cout<<"Roll no:"<<roll_no<<endl;
		}
};
class test : public virtual student
{
	protected:
		float part1,part2;
		public :
			void getmarks(float s1,float s2)
			{
				part1=s1;
				part2=s2;
			}
			void putmarks()
			{
				cout<<"Marks in part1:"<<part1;
				cout<<"Marks in part2:"<<part2;
			}
			
};
class score : public virtual student
{
	protected:
		float sportwt;
		public:
			void getscore(float s)
			{
				sportwt=s;
			}
			void putscore()
			{
				cout<<"Sport score :"<<sportwt<<endl;
			}
};
class result : public test,public score
{
	float total;
	public:
		void display()
		{
			total=part1+part2+sportwt;
			cout<<"-Total marks:"<<total;
		}
};
int main()
{
	result s;
	s.getroll_no(12);
	s.getmarks(55.4,5.5);
	s.getscore(2);
	s.putroll_no();
	s.putmarks();
	s.putscore();
	s.display();
}
