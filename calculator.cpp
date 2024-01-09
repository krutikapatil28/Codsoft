#include <iostream>
using namespace std;

int main()
{
	 int exit1=1;
do{
   int op;
   float num1,num2;
 
   
   cout<<"Enter operation:"<<endl;
   cout<<"1.Addition"<<endl;
   cout<<"2.subtracition"<<endl;
   cout<<"3.Multiplication"<<endl;
   cout<<"4.Division"<<endl;
   cin>>op;
   
   cout<<"Enter the operands:";
   cin>>num1>>num2;
 
   switch(op)
   {
   case 1:
   cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
   break;
   
   case 2:
   cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
   break;
   
   case 3:
   cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
   break;
   
   case 4:
   cout<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
   break;

   default:
   cout<<"Error! operator is not correct:"<<endl;
   exit1 = 0; 
   break;  
    
   }
   
  }while(exit1);
  return 0;

}
