#include <iostream>
using namespace std;
int main() {
   float a,b,c;
   cout<<"Enter three numbers: \n";
   cin>>a>>b>>c;
   if(a>b) {
      if(a>c)
      cout<<a<<" is largest number";
      else
      cout<<c<<" is largest number";
   }else {
      if(b>c)
      cout<<b<<" is largest number";
      else
      cout<<c<<" is largest number";
   }
   return 0;
}
