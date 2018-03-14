#include <iostream>
#include "Matrice.hpp"
using namespace std;

int main()
{
	Matrice a;
	cout << "Matricea a este: " << a << endl;
	Matrice b(2, 2, 1);
	cout << "Matricea b este: " <<endl<< b << endl;
	Matrice c(b);
	cout << "Matricea c(b) este:" << endl << c << endl;
	Matrice d = c;
	cout << "Matricea d = c este: " << endl << d<<endl;
	Matrice e(2,2);
	cout << "Introduceti matricea e de 2 linii si 2 coloane: " << endl;
	cin >> e;
	cout << "Matricea e este: " << endl<< e << endl;
	cout << "d+e=" << endl << d + e << endl;
	cout << "e-b=" << endl << e - b << endl;
	cout << "e este: " << endl << e << endl;
	cout << "c este: " << endl << c << endl;
	cout << "c*e=" << endl << c * e << endl;
	cout << "4*b=" << endl << 4 * b << endl;
	Matrice f;
	cout << "f = e*d" << endl << (f = e*d) << endl;
	cout << "Determinantul matricei b este: " << b.determinant() << endl;
	cout << "Determinantul matricei e este: " << e.determinant() << endl;
	cout << "Este d inversabila? " << d.inversabilitate()<<endl;
	cout << "Este e inversabila? " << e.inversabilitate() << endl;
	Matrice g(3, 3);
	cout << "Introduceti matricea g de 3 linii si 3 coloane: " << endl;
	cin >> g;
	g.matriceOrdinInferiorLinieSiColoana(1,2);
	cout << "Maricea de ordin inferior prin eliminarea liniei 1 si a coloanei 2 din g este:" << endl << g;
	cout << "Matricea I4 este: " << endl << Matrice::In(4);
	cout << "Matricea O5 este: " << endl << Matrice::On(5);

	return 0;
}