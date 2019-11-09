#include<iostream>

#include<conio.h>

using namespace std;

int main()

 {

 int p;

 float a;

 char ch;

 cout<<"Enter any value "<<endl;
 cout<<"Enter First No.: ";
 cin>>p;
 cout<<"Enter Second NO.: ";
 cin>>a;

 cout<<"choose any operator(+,-,*,/) ::"<<endl;

 cin>>ch;

 switch(ch)

 {

 case '+':cout<<"addition "<<"= "<<p+a<<endl;

	  break;

 case'-' :cout<<"subtraction "<<"= "<<p-a<<endl;

	  break;

 case '*':cout<<"multiplication "<<"= "<<p*a<<endl;

          break;

 case '/':cout<<"division "<<"= "<<p/a<<endl;

          break;



 default: cout<<"you choose wrong operator "<<endl;



 }

getch();

 }
