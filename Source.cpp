#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	/*int x,k=0,sum=0;
	do {
		cin >> x;
		k ++;
		sum = sum + x;
      } while (x != 0);
	  double sr = (double)sum /k;
		  cout << k << " " << sum << " " << sr<<endl;*/
	/*int a, b, i, sum = 0;
	cin >> a;
	cin >> b;
	i = a;
	do {
		if (i % 2 != 0) {
			sum += i;
		}
		i++;
	} while (i<=b);
	cout << sum<<endl;*/
	/*int h,i;
	cin >> h;
	i = 1;
	do {
		for (int u = 1; u <= h - i; u++) cout << ' ';
		for (int u = 1; u <= 2 * i - 1;u++) cout << '^';
		cout << endl;
		i++;
	} while (i <= h);*/
	//17. В ЭВМ вводятся по очереди данные о росте N учащихся класса.Определить средний рост учащихся класса.
	/*int a,b,i=0;
	double sr = 0;
	cin >> a;
	do {
		cin >> b;
		i++;
		sr = sr + b;
	} while (i <= a-1);
	sr = sr / i;
	cout << sr << endl;*/
	/*29. с помощью оператора while напишите программу вывода всех четных чисел в диапазоне от 2 до 100 включительно.*/
	/*int i = 2;
	do {
		if (i % 2 == 0) { cout << i << endl; }
		i++;
	} while (i <= 100);*/
	/*30. С помощью оператора while напишите программу определения суммы всех нечетных чисел в диапазоне от 1 до 99 включительно.*/
	/*int i=1, a=0;
	do {
		if (i % 2 != 0) { a = a + i; }
		i++;
	} while (i < 99);
	cout << a;*/
	/*18. Задано натуральное число N.Найти количество натуральных чисел, не превосходящих N и не делящихся ни на одно из чисел 2, 3, 5.*/
	/*int n,a=1,b=0;
	cin >> n;
	do {
		if (a % 2 != 0 && a % 3 != 0 && a % 5 != 0) {
			b++;
		}
		a++;
	} while (a<=n);
	cout << b;*/
	/*22. дано натуральное n.вычислить: 1 + 1 / 2 + 1 / 3 + 1 / 4 + ... + 1 / n.*/
	int n, b = 1;
	double a = 1;
	cin >> n;
	do {
		a = a + 1.0 / b;
		b++;
	} while (b<=n);
	cout << a;
}