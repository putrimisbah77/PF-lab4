#include <iostream>
using namespace std;
void isEligible(int age);
main()
{
  int age;
  while(true)
  {
   cout<<"Enter your age: ";
   cin>>age;
   isEligible(age);
   cout<<endl;
  }
   
}
 
 void isEligible(int age)
 {
   if(age>=18)
  {
    cout<<"you are eligible for vote.";
  }
  
  if(age<18)
  {
    cout<<"you are not eligible for vote.";
  }
 }