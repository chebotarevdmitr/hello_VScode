#include<iostream>
using namespace std;

int main(){
   cout << "\t Preobrazovanie futov v metry" << endl;
   double f;               // содержит длинну в футах
   double m;              //содержит результат преобразования в метры
   int counter = 0;
   for (f = 1.0; f <= 100.0;f++){
      m = f / 3.28;      //преобразуем в метры
      cout << f << "  futov sostavlyaet " << m << " metrov.\n";
      counter++; // инкремент счётчика строк в каждом шаге цикла
      if(counter==25){
         cout << "\n";  //после 25 строк вывести пустую строку
         counter = 0;   //сброс счётчика строк
      }
   }
   return 0;
}