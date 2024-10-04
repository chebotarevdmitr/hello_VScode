#include <iostream>
using namespace std;

int factorial(int numb){
if( numb>1){
   return numb * factorial(numb - 1);
}
else
   return 1;
}

int main(){
   int numb = 0;
   cout << " \t Enter positive number" << endl;
   cin  >> numb;
   cout << " \t factorial " << numb << " = " << factorial(numb) << endl;
   return 0;
}