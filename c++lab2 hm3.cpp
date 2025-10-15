#include <iostream>
using namespace std;
int main() {
int a = 3, b = 4, c = 5;
int expr1 = a + b * c;
int expr2 = (a + b) * c;
double expr3 = (double)(a / b) + c;
double expr4 = (double)a / b + c;
char letter = 'A' + (a * b - c);
bool check = (a + b > c) && !(c % a);
cout << "expr1 = " << expr1 << endl;
cout << "expr2 = " << expr2 << endl;
cout << "expr3 = " << expr3 << endl;
cout << "expr4 = " << expr4 << endl;
cout << "letter = " << letter << endl;
cout << "check = " << check << endl;
return 0;
}
