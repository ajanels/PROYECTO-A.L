#include<iostream>
#include<conio.h>
#include<windows.h>
#define limpiar system ("cls")
using namespace std;

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = (SHORT)x - 1;
	coord.Y = (SHORT)y - 1;
	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int a, b, c, d, e, f, g, h, i, op;
int a1, b1, c1, d1, e1, f1, g1, h1, i1;
int suma1, suma2, determinante, adjunta, transpuesta, inversa;
int main()
{
	do {
		limpiar; system("color f4");
		gotoxy(15, 8); cout << "1. DETERMINANTE DE UNA MATRIZ";
		gotoxy(15, 9); cout << "2. TRANSPUESTA DE MATRICES";
		gotoxy(15, 10); cout << "3. SUMA DE UNA MATRIZ";
		gotoxy(15, 11); cout << "4. INVERSA DE UNA MATRIZ";
		gotoxy(15, 13); cout << "elija opcion [  ]";
		do {
			gotoxy(30, 13); cin >> (op);
		} while ((op <= 1) && (op >= 5));
		switch (op) {
		case 1: {limpiar; system("color f9");
			gotoxy(10, 1); cout << "DETERMINANTE DE UNA MATRIZ";
			gotoxy(4, 4); cout << "[  ] [  ]";
			gotoxy(4, 5); cout << "[  ] [  ]";
			gotoxy(5, 4); cin >> a;
			gotoxy(10, 4); cin >> b;
			gotoxy(5, 5); cin >> d;
			gotoxy(10, 5); cin >> e;
			suma1 = a * e;
			suma2 = b * d;
			determinante = (suma1)-(suma2);
			limpiar;
			cout << " la determinante de la matriz es:\n";
			gotoxy(34, 2); cout << determinante;
			gotoxy(1, 4); system("pause");  }break;

		case 2: {limpiar; system("color f4");
			gotoxy(10, 1); cout << "matriz 3x3";
			gotoxy(4, 4); cout << "[  ] [  ] [  ]";
			gotoxy(4, 5); cout << "[  ] [  ] [  ]";
			gotoxy(4, 6); cout << "[  ] [  ] [  ]";
			gotoxy(5, 4); cin >> a;
			gotoxy(10, 4); cin >> b;
			gotoxy(15, 4); cin >> c;
			gotoxy(5, 5); cin >> d;
			gotoxy(10, 5); cin >> e;
			gotoxy(15, 5); cin >> f;
			gotoxy(5, 6); cin >> g;
			gotoxy(10, 6); cin >> h;
			gotoxy(15, 6); cin >> i;
			limpiar;
			gotoxy(10, 1); cout << "la trenspuesta es";
			gotoxy(4, 4); cout << "[  ] [  ] [  ]";
			gotoxy(4, 5); cout << "[  ] [  ] [  ]";
			gotoxy(4, 6); cout << "[  ] [  ] [  ]";
			gotoxy(5, 4); cout << a;
			gotoxy(10, 4); cout << d;
			gotoxy(15, 4); cout << g;
			gotoxy(5, 5); cout << b;
			gotoxy(10, 5); cout << e;
			gotoxy(15, 5); cout << h;
			gotoxy(5, 6); cout << c;
			gotoxy(10, 6); cout << f;
			gotoxy(15, 6); cout << i;
			gotoxy(1, 8); system("pause"); }break;

		case 3: {limpiar; system("color f9");
			gotoxy(10, 1); cout << "suma de matrices";
			gotoxy(3, 3); cout << "A";
			gotoxy(4, 4); cout << "[  ] [  ] [  ]";
			gotoxy(4, 5); cout << "[  ] [  ] [  ]";
			gotoxy(4, 6); cout << "[  ] [  ] [  ]";
			gotoxy(5, 4); cin >> a;
			gotoxy(10, 4); cin >> b;
			gotoxy(15, 4); cin >> c;
			gotoxy(5, 5); cin >> d;
			gotoxy(10, 5); cin >> e;
			gotoxy(15, 5); cin >> f;
			gotoxy(5, 6); cin >> g;
			gotoxy(10, 6); cin >> h;
			gotoxy(15, 6); cin >> i;
			gotoxy(18, 5); cout << "+";
			gotoxy(19, 3); cout << "B";
			gotoxy(20, 4); cout << "[  ] [  ] [  ]";
			gotoxy(20, 5); cout << "[  ] [  ] [  ]";
			gotoxy(20, 6); cout << "[  ] [  ] [  ]";
			gotoxy(21, 4); cin >> a1;
			gotoxy(26, 4); cin >> b1;
			gotoxy(31, 4); cin >> c1;
			gotoxy(21, 5); cin >> d1;
			gotoxy(26, 5); cin >> e1;
			gotoxy(31, 5); cin >> f1;
			gotoxy(21, 6); cin >> g1;
			gotoxy(26, 6); cin >> h1;
			gotoxy(31, 6); cin >> i1;
			limpiar;
			gotoxy(5, 2); cout << "la suma de matrices ";
			gotoxy(5, 3); cout << "A+B ";
			gotoxy(4, 4); cout << "[  ] [  ] [  ]";
			gotoxy(4, 5); cout << "[  ] [  ] [  ]";
			gotoxy(4, 6); cout << "[  ] [  ] [  ]";
			gotoxy(5, 4); cout << a + a1;
			gotoxy(10, 4); cout << b + b1;
			gotoxy(15, 4); cout << c + c1;
			gotoxy(5, 5); cout << d + d1;
			gotoxy(10, 5); cout << e + e1;
			gotoxy(15, 5); cout << f + f1;
			gotoxy(5, 6); cout << g + g1;
			gotoxy(10, 6); cout << h + h1;
			gotoxy(15, 6); cout << i + i1;
			gotoxy(1, 8); system("pause"); }break;

		case 4: {limpiar; system("color f9");
			gotoxy(10, 1); cout << "INVERSA DE UNA MATRIZ";
			gotoxy(4, 4); cout << "[  ] [  ]";
			gotoxy(4, 5); cout << "[  ] [  ]";
			gotoxy(5, 4); cin >> a;
			gotoxy(10, 4); cin >> b;
			gotoxy(5, 5); cin >> d;
			gotoxy(10, 5); cin >> e;
			suma1 = a * e;
			suma2 = b * d;
			determinante = (suma1)-(suma2);
			int f11 = 1 * e;
			int f12 = -1 * d;
			int f21 = -1 * b;
			int f22 = 1 * a;
			limpiar;
			gotoxy(10, 1); cout << "LA INVERSA DE LA MATRIZ ES";
			gotoxy(3, 4); cout << "[   /   ] [   /   ]";
			gotoxy(3, 5); cout << "[   /   ] [   /   ]";
			gotoxy(5, 4); cout << f11;
			gotoxy(14, 4); cout << f21;
			gotoxy(5, 5); cout << f12;
			gotoxy(15, 5); cout << f22;
			gotoxy(9, 4); cout << determinante;
			gotoxy(19, 4); cout << determinante;
			gotoxy(9, 5); cout << determinante;
			gotoxy(19, 5); cout << determinante;
			gotoxy(1, 9); system("pause");  break;

		}
		}
	} while (op = 5);

}