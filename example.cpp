#include <iostream>
using namespace std;

void add(int num1,int num2);
void pro(int num1,int num2);
main(){
 int num1=0;
 int num2=0;
 cout<<"Enter first digit: "<<num1;
 cin>>num1;

 cout<<"Enter second digit: "<<num2;
 cin>>num2;
  add(num1,num2);
  pro(num1,num2);
}
 void add(int num1,int num2){
 int sum=0;
 sum=num1+num2;
 cout<<"Sum is: "<<sum;
 cout<<endl;
}
void pro(int num1,int num2){
 
 int sum=0;
 sum=num1*num2;
 cout<<"Product is: "<<sum;
 cout<<endl;

}