// Overloading unary operator
#include<iostream>

using namespace std;
 
 class space 
 {
     int x;
     int y;
     int z;
     
 public:
 void getdata(int a,int b, int c);
 void display(void);
 void operator - ();    // overload minus
 };
 
 void space:: getdata(int a,int b, int c)
 { 
     x=a;
     y=b;
     z=c;
 }
 void space ::display (void)
 {
     cout<<"x= "<<x<<endl;
     cout<<"y ="<<y<<endl;
     cout<<"z ="<<z<<"\n";
 }
 
 void space :: operator -()
 {
 x = -x;
 y = -y;
 z = -z;
 }
  int main ()
  {
      space S;
      S.getdata(10, -20, 30);
cout << "S:";
S.display ();
  -S;              // activates operator -() function
  cout<<"-S:";
  S.display ();
  return 0;
  }

  