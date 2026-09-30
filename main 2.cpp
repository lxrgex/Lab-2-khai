#include <iostream>
#include <cmath> // підключення бібліотеки математичних функцій
using namespace std;

int main()
{
	//task 1
    // Integer. Дано двозначне число.
    // Знайти суму і добуток його цифр.
    cout << "Integer." << endl;
    const double pi = 3.141592;
    int n, tens, units, sum, prod; // декларація цілих змінних
    // введення даних
    cout << endl << "n = ";
    cin >> n;
    // підрахунок
    tens = n / 10;   // цифра десятків
    units = n % 10;  // цифра одиниць
    sum = tens + units;
    prod = tens * units;
    // виведення результату
    cout << "Sum = " << sum << endl;
    cout << "Product = " << prod << endl;


	//task 2
    cout << "\nBoolean.\n";
    double px, py, R; // декларація дійсних змінних
    // введення даних
    cout << "x = ";
    cin >> px;
    cout << "y = ";
    cin >> py;
    cout << "R = ";
    cin >> R;
    // підрахунок
    bool inside = px * px + py * py < R * R; // визначення ЛОГІЧНОЇ змінної
    // виведення результату
    cout << "Point is inside the circle: " << boolalpha << inside << endl;

   
    // task 3
    cout << "\nMath.17.\n";
 
   double x, a, b, c, y; // декларація дійсних змінних
    // введення даних
    cout << "Real argument x = ";
    cin >> x;
    // підрахунок
    a = pow(sin(2 * x), 2) * pow(2, 1 - 2 * x); // чисельник
    b = tan(fabs(x)) * sin(48 * pi / 180);      // знаменник
    c = log2(fabs(x * x));                      // log2 |x^2|
    y = a / b + 1.0 / 5 * c;
    // виведення результату
    cout << "Function y = " << y << endl;

    return 0;
}