/*Write a CPP program with Employee class with Emp_name, Emp_id, Address, Mail_id,
Mobile_no as members. Inherit the classes, Programmer, Assistant Engineer,
Business Analyst and Manager from employee class. Add Basic Pay (BP) as
the member of all the inherited classes with 97% of BP as DA, 10 % of BP as
HRA, 12% of BP as PF, 0.1% of BP for staff club fund. Generate pay slips 
for the employees with their gross and net salary */

//Title-Salary Slip
//Author-Arpit Bansal,2213502,N div
//Date-22/04/22
 
//Preprocessing
#include <iostream>
using namespace std;

class employee{
    private:
        string emp_name;
        string emp_id;
        string emp_mail;
       	float bp;
        float g_salary;
        float n_salary;
    public:
        void getdetails();
        void salary();
        void display();
};
class programmer :public employee{ 
    public:   
    programmer(){
        cout<<"\n\nYou are a programmer:-";
    }
};
class ast_engineer :public employee{
    public:
    ast_engineer(){
        cout<<"\n\nYou are a Assistant Engineer:-";
    } 
};   
class business_anaylst :public employee{
    public:
    business_anaylst(){
        cout<<"\n\nYou are a business Analyst:-";
    }
};        
class manager :public employee{
    public:
    manager(){
        cout<<"\n\nYou are a Manager:-";
    }    
};

void employee::getdetails(){
    cout<<"\nEnter the following details: ";
    cout<<"\nEnter your name: ";
    cin>>emp_name;
    cout<<"Enter your employee id: ";
    cin>>emp_id;
    cout<<"Enter your mail id: ";
    cin>>emp_mail;
    cout<<"Enter your base salary: ";
    cin>>bp;
}
void employee::salary(){
    g_salary=bp+0.97*bp+0.10*bp-0.12*bp-0.001*bp;
    n_salary=g_salary-0.05*g_salary;
}
void employee::display(){
    cout<<"\n\n\t----Employee Pay Slip----";
    cout<<"\n\tName: "<<emp_name;
    cout<<"\n\tEmployee id: "<<emp_id;
    cout<<"\n\tEmployee mail: "<<emp_mail;
    cout<<"\n\tGross salary: "<<g_salary;
    cout<<"\n\tNet Salary: "<<n_salary<<endl;
}

int main(){
    programmer p;
    p.getdetails();
    p.salary();
    p.display();

    ast_engineer ae;
    ae.getdetails();
    ae.salary();
    ae.display();

    business_anaylst ba;
    ba.getdetails();
    ba.salary();
    ba.display();

    manager m;
    m.getdetails();
    m.salary();
    m.display();

    return 0;
}
