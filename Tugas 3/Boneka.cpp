#include "Boneka.hpp"
#include <iostream>
using namespace std;

Boneka::Boneka() {
    this->nama = "A";
    cout <<"Boneka berhasil dibuat\n"; 
}

Boneka::Boneka(string nama) {
    this->nama = nama;
    cout <<"Boneka " <<nama <<" berhasil dibuat\n";
}

string Boneka::get_nama() {
    return this->nama;
}

Boneka::~Boneka() {
    cout <<"Boneka " <<this->nama <<" berhasil dihapus\n";
}