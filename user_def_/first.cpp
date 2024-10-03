#include <iostream>
#include <cmath> // для sqrt

using namespace std;

bool isPrime(int number)
{
   if (number <= 1)
   {
      return false; // 0 и 1 не являются простыми
   }
   for (int i = 2; i <= sqrt(number); ++i)
   {
      if (number % i == 0)
      {
         return false;
      }
   }
   return true;
}

int main()
{
   cout << "\tПроверка на простое число" << endl;
   int number = 0;
   cout << " \t Введите положительное целое число: " << endl;
   cin >> number;

   if (isPrime(number))
   {
      cout << number << " - Это простое число" << endl;
   }
   else
   {
      cout << number << " - Это не простое число" << endl;
   }
   return 0;
}
