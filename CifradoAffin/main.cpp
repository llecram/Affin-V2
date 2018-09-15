#include <iostream>
#include "Affin.h"
#include <NTL/ZZ.h>
using namespace NTL;
using namespace std;
int main()
{
    string mensaje;
	getline(cin,mensaje);
	Affin ese;
	Affin ese2(ZZ(46415), ZZ(55403));
	cout << ese.geta() << endl << ese.getb() << endl;
	//cout << ese2.getinversa() << endl;
	ese.cifrado(mensaje);
	ese2.descifrado("qLt4");
	system("pause");
}
