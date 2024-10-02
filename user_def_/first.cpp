#include <iostream>
using namespace std;

int check_prime_number(int);

int main()
{
   cout << "\tchecking for a prime number"   << endl;
   int number = 0;
   cout << " \t Enter positive nember "      << endl;
   cin >> number;

    if(check_prime_number (number) == true) {
       cout << number << "  -This is a simple number "     << endl; // это простое число
    }
    else {
       cout << number << "  -This is not a simple number " << endl; // это не простое число
    }
   return 0;
}

int check_prime_number(int number){
   bool flag = true;
   for (int i = 2; i <= number / 2; ++i){
      if(number%i ==0){
         flag = false;
         break;
      }
   }
   return flag;
}
