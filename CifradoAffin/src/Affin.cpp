#include "Affin.h"
#include <../operaciones.h>
Affin::Affin(){
	flag = true;
	a = RandomLen_ZZ(8);
	b = RandomLen_ZZ(8);
	aux_a=0;
	aux_b=0;
	conv(aux_a,a);
	conv(aux_b,b);
	while (flag) {
		if (!(gcd(aux_a, alfabeto.size()) ^ 1)) {
			flag = false;
		}
		else {
			a = RandomLen_ZZ(16);
            conv(aux_a,a);
		}
	}
}
Affin::Affin(ZZ m, ZZ n) {
	conv(aux_a,m);
	conv(aux_b,n);
	inv=inversa(aux_a, alfabeto.size());
}
string Affin::cifrado(string mensaje) {
	string aux;
	for (int i = 0; i < mensaje.size(); i++) {
        int c=modulo((aux_a* alfabeto.find(mensaje[i])+aux_b),alfabeto.size());
        aux+=alfabeto[c];
	}
	cout << aux << endl;
	return aux;
}
string Affin::descifrado(string mensaje) {
	string aux;
	for (int i = 0; i < mensaje.size(); i++) {
		int c=modulo((inv * (alfabeto.find(mensaje[i])-aux_b)),alfabeto.size());
        //cout<<c<<endl;
        aux+=alfabeto[c];
	}
	cout << aux << endl;
	return aux;
}
int Affin::geta(){
    return aux_a;
    cout<<a;
}
int Affin::getb(){
    return aux_b;
    cout<<b;
}
