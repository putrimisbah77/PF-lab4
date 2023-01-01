#include <iostream>
using namespace std;
void calculateBill(string day,int amount);
main()
{
 int amount;
 string day;
 while(true)
 {
 cout << "Enter amount: ";
 cin >> amount;
 cout << "Enter day: ";
 cin >> day;
 calculateBill(day,amount);
 }
}
 void calculateBill(string day,int amount)
 {
  if(day=="sunday")
  {
     float discount;
     float total;
     discount=amount*0.1;
     total=amount-discount;
     cout<<"Amount is: " <<total;
     cout<<endl; 
  }
  if(day=="Monday")
  {
     float discount;
     float total;
     discount=amount*0.5;
     total=amount-discount;
     cout<<"Amount is: " <<total;
     cout<<endl; 
  }
  if(day=="Tuesday")
  {
     float discount;
     float total;
     discount=amount*0.25;
     total=amount-discount;
     cout<<"Amount is: " <<total;
     cout<<endl; 
  }
  if(day=="Friday")
  {
     float discount;
     float total;
     discount=amount*0.01;
     total=amount-discount;
     cout<<"Amount is: " <<total;
     cout<<endl; 
  }

 }