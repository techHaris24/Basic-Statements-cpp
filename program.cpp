#include<iostream>
using namespace std;
int main()
{
int precision;
float price1,price2,price3,total;
cout<<"Enter price of three items:"<<endl;
cin>>price1;
cin>>price2;
cin>>price3;
cout<<"Enter desired precision for displaying prices:";
cin>>precision;
cout.precision(precision);
total=price1+price2+price3;
cout<<showpoint;
cout<<"Price of 1st item is:"<<price1<<endl;
cout<<"Price of 2nd Item is:"<<price2<<endl;
cout<<"Price of 3rd Item is:"<<price3<<endl;
cout<<noshowpoint;
cout<<"Total price is:"<<total;
return 0;
}
