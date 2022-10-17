/*Write a CPP program to generate Hotel bills. Create a class with the following members: 
Table no., customer name, Customer contact, details of order. Compute the bill amount and
 offer possible discounts*/
 
 //Title-Hotel Bill
 //Author-Arpit Bansal,2213502,N div
 //Date-22/04/22
 
 //Preprocessing
 #include <iostream>
 using namespace std;
 
 class bill{
 	public:
 		int t_no;
 		string c_name;
 		long int c_no;
 		int p_order;
 		string o_details;
 		float bill_amt;
 };
 int main(){
	bill b;
	cout<<"\n\n\t------Enter the Customer Details-------";
	cout<<"\nEnter the Table no. : ";
  	cin>> b.t_no;
  	cout<<"\nEnter the Name of Customer: ";
  	cin>>b.c_name;
  	cout<<"\nEnter the Contact no of Customer: ";
  	cin>>b.c_no;
  	cout<<"\nEnter the details of order: ";
  	cin>>b.o_details;
  	cout<<"\nEnter the price of the order: ";
  	cin>>b.p_order;
  	

  	b.bill_amt=b.p_order-(b.p_order*.05);
  
  
	cout<<"\n\n\n\t------TUCK SHOP-----";
	cout<<"\n\t---------Bill---------"; 
  	cout<<"\n\tTable no: "<<b.t_no;
  	cout<<"\n\tName of Customer: "<<b.c_name;
  	cout<<"\n\tCustomer Contact no.: "<<b.c_no;
  	cout<<"\n\tOrder Details: "<<b.o_details;
  	cout<<"\n\tPrice of Order: "<<b.p_order;
  	cout<<"\n\tTotal Amount to be paid: "<<b.bill_amt<<endl;
return 0;
}
