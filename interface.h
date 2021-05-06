// Sesuaikan header
#ifndef INTERFACE_H
#define INTERFACE_H

// Variabel yang menyatakan jumlah korban dan lilin pada peta
#define jumlah_korban 2
#define jumlah_lilin 2

/**
 * @param peta double pointer menuju matriks peta
 * @result menambahkan objek korban dan lilin
 */
void TambahObjek(char** peta);

/**
 * @param peta double pointer menuju matriks peta
 * @param n_peta besar peta.
 * @result menambahkan objek korban dan lilin
 */
void TampilkanViewPeta(char** peta,int n_peta);

#endif