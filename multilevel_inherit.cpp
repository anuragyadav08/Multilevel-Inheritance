/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class Student
{
    protected:
        int roll_no;
    public:
        void set_roll_no(int);
        void get_value();
};
class Exam:public Student
{
    public:
        float math1,math2;
        void set_values(float,float);
        void pdata();
};
class Result:public Exam
{
    private:
        float per;
    public:
        void get_per();
};

//******************************* Student ***********************************

void Student::set_roll_no(int x)
{
    roll_no=x;
};
void Student::get_value()
{
    cout<<"Roll No. : "<<roll_no<<endl;
};

//******************************* Examination ********************************

void Exam::set_values(float x,float y)
{
    math1=x;
    math2=y;
};
void Exam::pdata()
{
    cout<<"Marks in Math 1 out of 100 : "<<math1<<endl;
    cout<<"Marks in Math 2 out of 100 : "<<math2<<endl;
};

//***************************** Result ***************************************

void Result::get_per()
{

        float sum,per;
        sum=math1+math2;
        per=sum/2;
        cout<<"Sum of Marks : "<<sum<<endl;
        cout<<"Percentage : "<<per<<"%"<<endl;
        
};
int main()
{
  Result obj;
 
  obj.set_roll_no(12);
  obj.get_value();
  obj.set_values(95.0f,91.0f);
  obj.pdata();
  obj.get_per();

    return 0;
}
