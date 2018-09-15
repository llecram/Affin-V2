#ifndef AFFIN_H
#define AFFIN_H
#include<string>
#include<NTL/ZZ.h>
using namespace NTL;
class Affin
{
    private:
        ZZ a;
        ZZ b;
        bool flag;
        int inv;
        int aux_a;
        int aux_b;
        int aux_m;
        int aux_n;
    public:
        std::string alfabeto="abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ.,_-0123456789";
        Affin();
        Affin(ZZ , ZZ );
        std::string cifrado(std::string);
        std::string descifrado(std::string);
        int geta();
        int getb();

};

#endif // AFFIN_H
