// Silahkan sesuaikan header
#include<iostream>
using namespace std;

// Status dari lilin
typedef enum {on, off} status;

typedef struct {
    // Isi elemen yang dimiliki oleh tipe data korban
    string nama;
    int x,y;
    char simbol;
} korban;

typedef struct {
    // Isi elemen yang dimiliki oleh tipe data lilin
    int x,y;
    status stat;
} lilin;

/**
 * @param peta double pointer menuju matriks peta
 * @param nama nama dari korban
 * @param x koordinat korban (x)
 * @param y koordinat korban (y)
 * @param korban_baru pointer menuju data korban baru
 * @result membuat korban baru dan mengubah simbol pada peta sesuai koordinat yang diberikan
 */
void TambahKorban(char** peta, string nama, int x, int y, korban* korban_baru);

/**
 * @param peta double pointer menuju matriks peta
 * @param x koordinat korban (x)
 * @param y koordinat korban (y)
 * @param lilin_baru pointer menuju data lilin
 * @result membuat lilin baru dan mengubah simbol pada peta sesuai koordinat yang diberikan
 */
void TambahLilin(char** peta, int x, int y, lilin* lilin_baru);