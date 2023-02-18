#include <stdio.h>
#include <stdlib.h>
#include "ryan.h"

int main (){
	
	float a, b, hasil;
	int c, d, hasilmod;
	
	printf("Masukkan angka yang ingin dijumlahkan : ");
	scanf("%f", &a);
	printf("Masukkan angka penjumlah : ");
	scanf("%f", &b);
	hasil = tambah(a, b);
	printf("\n%f + %f\t:\t%f", a, b, hasil);
	
	printf("\n\n");
	system("\npause");
	system("cls");
	
    printf("\nMasukkan nilai bilangan basis = ");
    scanf("%f", &a);
    printf("Masukkan nilai bilangan pangkat = ");
	scanf("%f", &b);
	hasil = pangkat(a, b);
	printf("\nHasil dari %f pangkat %f adalah %f", a, b, hasil);
	
	printf("\n\n");
	system("\npause");
	system("cls");
	
	printf("\n\nMasukkan bilangan : ");
    scanf("%f", &a);
    hasil = akar(a);
    printf("Akar kuadrat dari %f adalah %f \n", a, hasil);
    
    printf("\n\n");
    system("pause");
	system("cls");
    
    printf("\nMasukkan nilai x = ");
    scanf("%d", &c);
    printf("Masukkan nilai y = ");
	scanf("%d", &d);
	hasil = pangkat(a, b);
	printf("\n%d mod %d adalah %d", c, d, hasilmod);
	
	printf("\n\n");
	system("pause");
	system("cls");
    
    printf("\nMasukkan nilai n = ");
    scanf("%f", &a);
    printf("Masukkan nilai r = ");
	scanf("%f", &b);
	hasil = pangkat(a, b);
	printf("\nKombinasi dari n = %f dan r = %f adalah %f", a, b, hasil);
	
	printf("\n\n");
	system("pause");
    system("cls");
    
    float temperature, result;
    int pilihan;
    
    printf("Masukkan suhu skala ke konversi dari:\n");
    printf("1. Celsius\n");
    printf("2. Fahrenheit\n");
    printf("3. Reamur\n");
    printf("4. Kelvin\n");
    scanf("%d", &pilihan);
    
    printf("masukan temperatur: ");
    scanf("%f", &temperature);
    
    switch (pilihan) {
        case 1:
            printf("%.2f derajat Celsius sama dengan ke:\n", temperature);
            printf("%.2f derajat Fahrenheit\n", convertCelsiuskeFahrenheit(temperature));
            printf("%.2f derajat Reamur\n", convertCelsiuskeReamur(temperature));
            printf("%.2f derajat Kelvin\n", convertCelsiuskeKelvin(temperature));
            break;
        case 2:
            printf("%.2f derajat Fahrenheit sama dengan ke:\n", temperature);
            printf("%.2f derajat Celsius\n", 
            convertFahrenheitkeCelsius(temperature));
            printf("%.2f derajat Reamur\n", convertCelsiuskeReamur(convertFahrenheitkeCelsius(temperature)));
            printf("%.2f derajat Kelvin\n", convertFahrenheitkeKelvin(temperature));
            break;
        case 3:
            printf("%.2f derajat Reamur sama dengan ke:\n", temperature);
            printf("%.2f derajat Celsius\n", convertReamurkeCelsius(temperature));
            printf("%.2f derajat Fahrenheit\n", convertCelsiuskeFahrenheit(convertReamurkeCelsius(temperature)));
            printf("%.2f derajat Kelvin\n", convertReamurkeKelvin(temperature));
            break;
	}
	
	printf("\n\n");
	system("pause");
    system("cls");
    
	int baris, kolom;

    // Taking input from the user
    printf("Masukkan baris: ");
    scanf("%d", &baris);
    printf("Masukkan kolom ");
    scanf("%d", &kolom);

    // Allocate memory for the matriks
    float **matriks = (float **)malloc(baris * sizeof(float *));
    for (int i = 0; i < baris; i++) {
        matriks[i] = (float *)malloc(kolom * sizeof(float));
    }

// Taking input from the user
    printf("Masukkan elemen:\n");
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            printf("matriks[%d][%d]: ", i, j);
            scanf("%f", &matriks[i][j]);
        }
    }

    printf("Matriks:\n");
    printMatriks(matriks, baris, kolom);

    // Transpose the matriks
    float **transpose = transposeMatriks(matriks, baris, kolom);

    printf("Matriks Transpose:\n");
    printMatriks(transpose, kolom, baris);

    // Free the memory
    for (int i = 0; i < baris; i++) {
        free(matriks[i]);
    }
    free(matriks);

    for (int i = 0; i < kolom; i++) {
        free(transpose[i]);
    }
    free(transpose);
	
	printf("\n\n");
	system("pause");
    system("cls");
	
	float Panjang, ConvertedPanjang;
    int dariSatuan, keSatuan;

    // mencetak unit yang tersedia
    printf("ASatuan yang tersedia:\n");
    printf("1. Kilometer\n");
    printf("2. Hektameter\n");
    printf("3. Dekameter\n");
    printf("4. Meter\n");
    printf("5. Desimeter\n");
    printf("6. Sentimeter\n");
    printf("7. Millimeter\n");

//mendapatkan panjang dan unit input dan output dari pengguna
    printf("Masukkan Panjang: ");
    scanf("%lf", &Panjang);
    printf("Masukkan input unit (1-7): ");
    scanf("%d", &dariSatuan);
    printf("Masukkan output unit (1-7): ");
    scanf("%d", &keSatuan);

// Konversikan Panjang dari unit input ke meter
    switch (dariSatuan) {
        case 1:
            Panjang = ConvertPanjang(Panjang, KILOMETER, METER);
            break;
        case 2:
            Panjang = ConvertPanjang(Panjang, HECTOMETER, METER);
            break;
        case 3:
            Panjang = ConvertPanjang(Panjang, DEKAMETER, METER);
            break;
        case 4:
            // Panjang sudah dalam satuan meter
            break;
        case 5:
            Panjang = ConvertPanjang(Panjang, DesiMETER, METER);
            break;
        case 6:
            Panjang = ConvertPanjang(Panjang, SentiMETER, METER);
            break;
        case 7:
            Panjang = ConvertPanjang(Panjang, MILLIMETER, METER);
            break;
        default:
            printf("Input Satuan Tidak Valid.\n");
            return 1;
    }
// Konversi Panjang dari meter ke unit output
    switch (keSatuan) {
        case 1:
            ConvertedPanjang = ConvertPanjang(Panjang, METER, KILOMETER);
            break;
        case 2:
            ConvertedPanjang = ConvertPanjang(Panjang, METER, HECTOMETER);
            break;
        case 3:
            ConvertedPanjang = ConvertPanjang(Panjang, METER, DEKAMETER);
            break;
        case 4:
            ConvertedPanjang = Panjang;
            break;
        case 5:
            ConvertedPanjang = ConvertPanjang(Panjang, METER, DesiMETER);
            break;
        case 6:
            ConvertedPanjang = ConvertPanjang(Panjang, METER, SentiMETER);
            break;
        case 7:
            ConvertedPanjang = ConvertPanjang(Panjang, METER, MILLIMETER);
            break;
        default:
            printf("Output Satuan Tidak Valid.\n");
            return 1;
    }

    // mencetak Panjang yang Dikonversi
    printf("hasil konversi Panjang: %f\n", ConvertedPanjang);
    
	return 0;
	
}
