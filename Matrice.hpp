#include <iostream>
using namespace std;

class Matrice
{
	int** _matrice;
	int _nrLinii;
	int _nrColoane;
public:
	
	Matrice();                                                            //constructor de initializare fara parametrii; 
	Matrice(int nrL, int nrC, int valDefault = 0);                        //constructor de initializare cu parametrii;
	Matrice(Matrice &matrix);                                             //constructor de copiere;
	~Matrice();															  //destructor;
	const int getNrLinii();												  //get-er pentru numarul de linii;
	const int getNrColoane();											  //get-er pentru numarul de coloane;
	Matrice operator +(const Matrice & matrix)const;					  //supraincarcarea operatorului "+" pentru adunarea a doua matrici;
	int* operator[](int linie);										      //supraincarcarea operatorului "[]" pentru a returna linia "linie";
	Matrice operator -(const Matrice & matrix)const;					  //supraincarcarea operatorului "-" pentru scaderea a doua matrici;
	Matrice operator *(const Matrice & matrix)const;					  //supraincarcarea operatorului "*" pentru inmultirea intre doua matrici
	Matrice operator *(int numar)const;								      //supraincarcarea operatorului "*" pentru inmultirea unei matrice cu un scalar;
	friend Matrice operator *(int numar, Matrice & matrix);			      //supraincarcarea operatorului "*" pentru inmultirea unui scalar cu o matrice;
	Matrice & operator =(const Matrice & matrix);						  //supraincarcarea operatorului "=" (de atribuire) pentru doua matrici;
	double determinant();												  //calcularea determinantului;
	bool inversabilitate();											      //verificarea daca o matrice este inversabila sau nu;
	void matriceOrdinInferiorLinie(int linie);                            //returnarea unei matrice de ordin inferior prin eliminarea unei linii;
	void matriceOrdinInferiorColoana(int coloana);                        //returnarea unei matrice de ordin inferior prin eliminarea unei coloane;
	void matriceOrdinInferiorLinieSiColoana(int linie, int coloana);      //returnarea unei matrice de ordin inferior prin eliminarea unei linii si unei coloane;
	friend istream& operator >>(istream& input, Matrice& matrix);		  //supraincarcarea operatorului ">>" pentru citirea unui obiect de tip Matrice;
	friend ostream& operator <<(ostream& output, Matrice& matrix);		  //supraincarcarea operatorului "<<" pentru afisarea unui obiect de tip Matrice;
	static Matrice In(int nrLiniiColoane);								  //returnarea matricei In;
	static Matrice On(int nrLiniiColoane);								  //returnarea matricei 0n;
};
