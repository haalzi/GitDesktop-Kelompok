#ifndef ryan_H
#define ryan_H
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// faktor Konversi
#define KILOMETER 1000.0
#define HECTOMETER 100.0
#define DEKAMETER 10.0
#define METER 1.0
#define DesiMETER 0.1
#define SentiMETER 0.01
#define MILLIMETER 0.001

// matriks
#define N 5

// pangkat
float pangkat(float x, float y);

// akar
float akar(float x);

// perjumlahan
float tambah(float x, float y);

// modulus
int modulus(int x, int y);

// kombinasi
float kombinasi(float x, float y);

/* 							KONVERSI SUHU							*/
				
// celcius ke fahrenheit
float convertCelsiuskeFahrenheit(float celsius);

// fahrenheit ke celcius
float convertFahrenheitkeCelsius(float fahrenheit);

// celcius ke reamur
float convertCelsiuskeReamur(float celsius);

// reamur ke celcius
float convertReamurkeCelsius(float reamur);

// celcius ke kelvin
float convertCelsiuskeKelvin(float celsius);

// kelvin ke celcius
float convertKelvinkeCelsius(float kelvin);

// fahrenheit ke kelvin
float convertFahrenheitkeKelvin(float fahrenheit);

// kelvin ke fahrenheit
float convertKelvinkeFahrenheit(float kelvin);

// reamur ke kelvin
float convertReamurkeKelvin(float reamur);

// kelvin ke reamur
float convertKelvinkeReamur(float kelvin);

/* 							KONVERSI PANJANG							*/

// convert panjang
float ConvertPanjang(float Panjang, float fromFactor, float toFactor);

/* 							matriks							*/

// print matriks
void printMatriks(float **matriks, int baris, int kolom);

// transpose matriks
float **transposeMatriks(float **matriks, int baris, int kolom);

#endif
