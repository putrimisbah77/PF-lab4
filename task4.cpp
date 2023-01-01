#include <iostream>
using namespace std;
void isEven(int number);
main()
{
 int num;
 while(true)
 {
  cout<<"Enter your number: ";
  cin>>num;
  if(num%2==0)
  {
  cout<<"Number is even.";
  }
  if(num%2==1)
  {
  cout<<"Number is odd.";
  }
  cout<<endl;
 }
}
 