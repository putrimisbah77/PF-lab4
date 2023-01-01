#include <iostream>
using namespace std;
void add(int num1,int num2);
void pro(int num1,int num2);
void sub(int num1,int num2);
void division(int num1,int num2);
main()
{
  int num1=0;
  int num2=0;
  char operation;
  while(true)
  {
   cout<<"Enter first digit: ";
   cin>>num1;
   cout<<"Enter second digit: ";
   cin>>num2;
   cout<<"Enter operator(+,-,/,*): ";
   cin>>operation;
   if(operation =='+')
      {
      add(num1,num2);
      }
   if(operation =='*')
      {
      pro(num1,num2);
      }
   if(operation =='-')
      {
      sub(num1,num2);
      }
   if(operation =='/')
      {
      division(num1,num2);
      }
  }
  
  
}
   void add(int num1,int num2)
   {    int sum=0;
        sum=num1+num2;
        cout<<"Sum is: "<<sum;
        cout<<endl;
    }
   void pro(int num1,int num2)
   {    int mul=0;
        mul=num1*num2;
        cout<<"Protduct is: "<<mul;
        cout<<endl;
    }
   void sub(int num1,int num2)
   {    int minus=0;
        minus=num1-num2;
        cout<<"subtraction is: "<<minus;
        cout<<endl;
    }
   void division(int num1,int num2)
   {    int divi=0;
        divi=num1/num2;
        cout<<"Division is: "<<divi;
        cout<<endl;
    }
   
 
 