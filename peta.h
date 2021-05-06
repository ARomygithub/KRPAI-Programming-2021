// Tuliskan Header Terlebih dahulu
#ifndef PETA_H
#define PETA_H

/**
 * @param n_peta menyatakan ukuran peta yang akan dinyatakan dalam matriks nxn
 * @result mengisi elemen ujung peta dengan x dan elemen tengah peta dengan -
 */
char** BuatPeta(int n_peta);

/**
 * @param peta menyatakan alamat dari matriks yang berisi peta
 * @param n_peta ukuran peta
 * @result menampilkan peta dari sisi depan
 */
void PrintPeta(char** peta, int n_peta);

/**
 * @param peta menyatakan alamat dari matriks yang berisi peta
 * @param n_peta ukuran peta
 * @result menampilkan peta dari sisi kiri
 */
void PrintViewKiri(char** peta, int n_peta); // Silahkan sesuaikan parameternya

/**
 * @param peta menyatakan alamat dari matriks yang berisi peta
 * @param n_peta ukuran peta
 * @result menampilkan peta dari sisi kanan
 */
void PrintViewKanan(char** peta, int n_peta); // Silahkan sesuaikan parameternya

#endif