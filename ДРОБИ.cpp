#include <iostream>
#include <conio.h>

using namespace std;


class Fraction
{
private:
    int numerator; 

    int denominator; 

    public:
         void Input()
         {

             cout << "Введите числитель: ";
             cin >> numerator;
             cout << "Введите знаменатель: ";
             cin >> denominator;
         }

         void OutPut()
         {
             cout << "Числитель: " << numerator << "\n";
             cout << "Знаменатель: " << denominator << "\n";
         }

         void Plus(int number)
         {
             cout << number << " " << numerator << "/" << denominator << "\n";
         }

         void Minus(int number)
         {
             cout << numerator - (number * denominator) << "/" << denominator << "\n";
         }

         void Multiple(int number)
         {
             cout << numerator * number << "/" << denominator << "\n";
         }

         void Division(int number)
         {
             int newDenominator = denominator * number;
             bool checking = true;

             for (int i = numerator; i != 0; i--)
             {
                 if (numerator % i == 0 && newDenominator % i == 0)
                 {
                     cout << numerator / i << "/" << newDenominator / i << "\n";
                     checking = false;
                     break;
                 }
             }

             if (checking)
                 cout << numerator << "/" << newDenominator << "\n";
         }
};

int main()
{   
    setlocale(0, "");
    Fraction fraction;

    fraction.Input();
    cout << "\n";

    fraction.Plus(12);
    cout << "\n";

    fraction.Minus(2);
    cout << "\n";

    fraction.Multiple(6);
    cout << "\n";

    fraction.Division(3);
}