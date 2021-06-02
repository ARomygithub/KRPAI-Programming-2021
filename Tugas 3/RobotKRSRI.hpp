#ifndef ROBOTKRSRI_H
#define ROBOTKRSRI_H
#include <iostream>
#include "Boneka.hpp"

// status robot
typedef enum {off, on} status;

class Robot {
    public:
    /**
     * @result Robot dibuat dengan atribut default dan dikeluarkan pesan konstruktor
     */ 
    Robot();

    /**
     * @param nama nama robot
     * @param stat status awal robot (on/off)
     * @param jumlah_kaki jumlah kaki robot
     * @result robot dibuat secara user-defined dan dikeluarkan pesan konstruktor
     */ 
    Robot(string nama, status stat, int jumlah_kaki);

    /**
     * @result Status robot menjadi hidup dan dikeluarkan pesan hidup
     */ 
    void nyala();

    /**
     * @result Status robot menjadi mati dan dikeluarkan pesan mati
     */ 
    void mati();

    virtual void jalan() = 0; //pure virtual

    /**
     * @result mengembalikan nama robot
     */ 
    string get_nama();

    /**
     * @result mengembalikan status robot
     */ 
    status get_status();

    /**
     * @result Dikeluarkan pesan destruktor
     */
    ~Robot();
    private:
    string nama;
    status stat;
    int jumlah_kaki;
};

class RobotKRSRI : public Robot {
    public:
    /**
     * @result inisialisasi pointer boneka dan dikeluarkan pesan konstruktor
     */ 
    RobotKRSRI();

    /**
     * @param nama nama robot
     * @param stat status awal robot (on/off)
     * @param jumlah_kaki jumlah kaki robot
     * @param boneka Berisi nullptr atau boneka yang baru saja diambil
     * @result RobotKRSRI dibuat secara user-defined dan dikeluarkan pesan konstruktor
     */ 
    RobotKRSRI(string nama, status stat, int jumlah_kaki, Boneka* boneka);

    /**
     * @result Bila stat robot on, dikeluarkan pesan robot memadamkan api. Bila robot off, dikeluarkan pesan kesalahan
     */ 
    void padamkanApi();

    /**
     * @result Bila stat robot on, dikeluarkan pesan robot mengambil boneka. Sebaliknya, dikeluarkan pesan kesalahan
     */     
    void ambilBoneka();

    /**
     * @param boneka pointer ke boneka yang ingin diambil
     * @result Bila stat robot on, dikeluarkan pesan robot mengambil boneka yang diinput. Sebaliknya, dikeluarkan pesan kesalahan
     */
    void ambilBoneka(Boneka* boneka);

    /**
     * @result Bila stat robot on, dikeluarkan pesan robot berjalan. Sebaliknya, dikeluarkan pesan kesalahan
     */ 
    void jalan(); //deklarasi method jalan()

    /**
     * @result destruktor RobotKRSRI dan dikeluarkan pesan destruktor
     */ 
    ~RobotKRSRI();
    private:
    Boneka* boneka = new Boneka; //composition
};
#endif