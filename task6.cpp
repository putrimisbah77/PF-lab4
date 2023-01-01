#include <iostream>
using namespace std;
void showresult(int mark);
main()
{
  int mark=0;
  while (true)
  {
    cout<<"Enter your marks: ";
    cin>>mark;
    showresult(mark);
  }
}

void showresult(int mark){
 if(mark>50)
 {
  cout<<"pass";
  cout<<endl;
 }
 if(mark==50)
 {
  cout<<"Work hard.";
  cout<<endl;
 }
 if(mark<50)
 {
  cout<<"fail";
  cout<<endl;
 }
}