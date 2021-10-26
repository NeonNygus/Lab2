#include <iostream>

using namespace std;

int main()
{

	/* ZADANIE 1
	float a, b;
	cout << "Podaj a: "; << endl, cin >> a;
	cout << "Podaj b: "; << endl, cin >> b;

	if (a == 0) {
		if (b == 0)
			cout << "Rownanie tozsamosciowe\n";
		else cout << "Rownanie sprzeczne\n";
	}
	else {
		cout << "x= " << -b / a;
	}*/

	/* ZADANIE 2 i 3
	float a, b, c, delta;
	cout << "Podaj a :", cin >> a;
	cout << "Podaj b :", cin >> b;
	cout << "Podaj c :", cin >> c;

	if (a != 0) {
		delta = (b * b) - (4 * a * c);

		if (delta == 0) {
			cout << "Jedno rozwiazanie, x1 = " << -b / (2 * a) << endl;
		}
		else if (delta > 0) {
			cout << "Dwa rozwi¹zania : \n";
			cout << "x1 = " << (-b - sqrt(delta)) / (2 * a) << endl;
			cout << "x2 = " << (-b + sqrt(delta)) / (2 * a) << endl;
		}
		else cout << "Brak rozwiazan\n";
	}
	else {
		if (b == 0) {
			if (c ==0)
			cout << "Rownanie tozsamosciowe\n";
		else cout << "Rownanie sprzeczne\n";
	}

		else {
			cout << "Rownanie liniowe :";
		}
	} */
/* ZADANIE 4 a)
	float x;
	cout << "Podaj x :", cin >> x;

	if (x == 0) {
		cout << "Wynik : " << 0;
	}
	else if (x > 0) {
		cout << "Wynik : " << 2 * x;
	}

	else
	{
		cout << "Wynik : " << -3 * x;
	}

	*/

	/* ZADANIE 3 b)
	float x;
	cout << "Podaj x :", cin >> x;

	if (x >= 0) {
		cout << "Wynik : " << x * x;
	}
	else if (x < 0) {
		cout << "Wynik : " << x;
	}
	*/
	/* ZADANIE c)
	float x;
	cout << "Podaj x :", cin >> x;

	if (x > 2) {
		cout << "Wynik : " << 2+x;
	}
	else if (x == 2) {
		cout << "Wynik : " << 8;
	}
	else if (x < 2) {
		cout << "Wynik : " << x-4;
	}
	*/
	/* ZADANIE 5
	float x,y,z;
	cout << "Podaj x :", cin >> x;
	cout << "Podaj y :", cin >> y;
	cout << "Podaj z :", cin >> z;

	if (x > y)
	{
		if (y > z)
		{
			cout << x << y << z;
		}
		else if (z > y) {
			cout << x << z << y;
		}
	}
	else if (y > x)
	{
		if (x > z) {
			cout << y << x << z;
		}
		else if (z > x) {
			cout << y << z << x;
		}
	}
	else if (z > x)
	{
		if (x > y) {
			cout << z << x << y;
		}
		else if (y > x) {
			cout << z << y << x;
		}
	}
	*/
/* ZADANIE 7
int x;
cout << "Jezeli liczba bêdzie podzielna przez 3 lub 7 to otrzymasz premie.\n Jezeli liczba nie bêdzie równa zeru to bêdzie zni¿ka na samochód.";
cout << "Podaj x: ", cin >> x;
if (x != 0)
{
	cout << "Jest znizka na samochod. ";

}
else
{
	cout << "Nie ma znizki na samochod. ";
	return 0;
}


if (x % 3 == 0 || x % 7 == 0)
{
	cout << "Mozesz kupic samochod! ";
}

else
{
	cout << "Zakup samochodu trzeba odlozyc na pozniej... ";
}
*/
/* ZADANIE 8
int x, y;
char wybor;
cout << "Prosty kalkulator.\n +, aby dodac \n -, aby odjac \n *, aby mnozyc \n /, aby dzielic \n r, aby uzyskaæ reszte. \nPodaj dwie liczby, a nastepnie znak dzialania: \n";
cin >> x >> y;
cin >> wybor;
switch (wybor)
{
case '+':
	cout << x + y;
	break;

case '-':
	cout << x - y;
	break;

case '*':
	cout << x * y;
	break;

case '/':
	cout << x / y;
	break;

case 'r':
		cout << x % y;
		break;
}
*/
}