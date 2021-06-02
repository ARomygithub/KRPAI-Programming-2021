#include "RobotKRSRI.hpp"
#include <iostream>
using namespace std;
#include "Boneka.hpp"

Robot::Robot() {
    this->nama = "X";
    this->stat = off;
    this->jumlah_kaki = 2;
    cout <<"Robot berhasil dibuat\n";
}

Robot::Robot(string nama, status stat, int jumlah_kaki) {
    this->nama = nama;
    this->stat = stat;
    this->jumlah_kaki = jumlah_kaki;
    cout <<"Robot " <<nama <<" berhasil dibuat\n";
}

void Robot::nyala() {
    this->stat = on;
    cout <<"Robot " <<this->nama <<" menyala\n";
}

void Robot::mati() {
    this->stat = off;
    cout <<"Robot " <<this->nama <<" mati\n";
}

string Robot::get_nama() {
    return this->nama;
}

status Robot::get_status() {
    return this->stat;
}

Robot::~Robot() {
    cout <<"Robot " <<this->nama <<" berhasil dihapus\n";
}

RobotKRSRI::RobotKRSRI() {
    this->boneka = nullptr;
    cout <<"Robot KRSRI berhasil dibuat\n";
}

RobotKRSRI::RobotKRSRI(string nama, status stat, int jumlah_kaki, Boneka* boneka) : Robot(nama, stat, jumlah_kaki), boneka(boneka) {
    cout <<"Robot KRSRI " <<nama <<" berhasil dibuat\n";
}

void RobotKRSRI::padamkanApi() {
    if(get_status()) {
        cout <<"Robot KRSRI " <<get_nama() <<" memadamkan api\n";
    } else {
        cout <<"[ERROR] Robot harus dinyalakan sebelum memadamkan api\n";
    }
}

void RobotKRSRI::ambilBoneka() {
    if(get_status()) {
        cout <<"Robot KRSRI " <<get_nama() <<" mengambil boneka\n";
    } else {
        cout <<"[ERROR] Robot harus dinyalakan sebelum mengambil boneka\n";
    }
}

void RobotKRSRI::ambilBoneka(Boneka* boneka) {
    if(get_status()) {
        this->boneka = boneka;
        cout <<"Robot KRSRI " <<get_nama() <<" mengambil boneka bernama " <<this->boneka->get_nama() <<"\n";
    } else {
        cout <<"[ERROR] Robot harus dinyalakan sebelum mengambil boneka\n";
    }
}

void RobotKRSRI::jalan() {
    if(get_status()) {
        cout <<"Robot KRSRI " <<get_nama() <<" berjalan\n";
    } else {
        cout <<"[ERROR] Robot harus dinyalakan sebelum berjalan\n";
    }
}

RobotKRSRI::~RobotKRSRI() {
    delete this->boneka;
    cout <<"Robot KRSRI " <<get_nama() <<" berhasil dihapus\n";
}