#include<iostream.h>
#include<conio.h>
class Student
{
	private:
	       int rollno;
	       char name[20];
	       float fees;
	static float total;

	public:
	      void setStudent()
	      {
		cout<<"\n Enter The Name : ";
		cin>>name;
		cout<<"\n Enter The RollNo :";
		cin>>rollno;
		cout<<"\n Enter The Fees :";
		cin>>fees;
		total=total+fees;
	      }
	      void getStudent()

	      {
		cout<<"\n Name = "<<name;
		cout<<"\n RollNo = "<<rollno;
		cout<<"\n Fees = "<<fees;
	      }
	      static void getTotal()
	      {
		cout<<"\n Total = "<<total;
	      }
};
	float Student :: total=0;

	void main()
	{
		clrscr();
		Student S1,S2,S3;
		S1.setStudent();
		S2.setStudent();
		S3.setStudent();
		S1.getStudent();
		S2.getStudent();
		S3.getStudent();
		Student :: getTotal();

		getch();
	}



