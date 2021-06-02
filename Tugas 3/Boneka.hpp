#ifndef BONEKA_H
#define BONEKA_H
#include <iostream>
using namespace std;

class Boneka {
    public:
    /**
     * @result Boneka dibuat secara default dan dikeluarkan pesan konstruktor
     */ 
    Boneka();

    /**
     * @result Boneka dibuat secara user-defined dan dikeluarkan pesan konstruktor
     */ 
    Boneka(string nama);

    /**
     * @result mengembalikan nama boneka
     */ 
    string get_nama();

    /**
     * @result Boneka dihapus dan dikeluarkan pesan destruktor
     */ 
    ~Boneka();
    private:
    string nama;
};
#endif