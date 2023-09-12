#include<iostream>
#include<iomanip>
using namespace std;
class shoppingList
{
  private:
  string itemname;
  int qty;
  float rate;
  public:
  void readitems()
  {
    cout<<endl<<"Enter the item name:";
    cin>>itemname;
    cout<<endl<<"Enter the rate:";
    cin>>rate;
    cout<<endl<<"Enter the quantity:";
    cin>>qty;
  }
  void printitems()
  {
    cout<<setw(15)<<itemname;
    cout<<setw(10)<<qty;
 	cout<<setw(5)<<rate;
 	cout<<setw(8)<<rate*qty<<endl;
	}
};
int main()
{
int n;
cout<<endl<<"Enter the number of items:";
cin>>n;
shoppingList items[n];
for(int i=0;i<n;i++)
{
	items[i].readitems();
}
cout<<setw(30)<<"Shopping List"<<endl;
cout<<setw(15)<<"Item Name"<<setw(10)<<"Quantity"<<setw(5)<<
"Rate"<<setw(8)<<"Amount"<<endl;
for(int i=0;i<n;i++)
{
items[i].printitems();
}
return 0;
}
