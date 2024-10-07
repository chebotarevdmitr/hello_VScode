#include <iostream>
#include <cmath> // для функции abs()

using namespace std;

int main()
{
   cout << " вывод среднего значения 5ти чисел" << endl;
   // Объявляем переменные для хранения чисел
   double number1, number2, number3, number4, number5;

   // Получаем числа от пользователя
   cout << "Введите пять чисел: ";
   cin >> number1 >> number2 >> number3 >> number4 >> number5;

   // Вычисляем сумму абсолютных значений
   double sum = abs(number1) + abs(number2) + abs(number3) + abs(number4) + abs(number5);

   // Вычисляем среднее значение
   double average = sum / 5;

   // Выводим результат на экран
   cout << "Среднее значение абсолютных значений: " << average << endl;

   return 0;
}
