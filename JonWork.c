/* File        : date.cpp */
/* Deskripsi   : Unit untuk keperluan ADT Date */

/***************************/
/*  BODY PRIMITIF DATE     */
/***************************/

#include <stdio.h>
#include <math.h>
#include "date.h"

/*********** Operasi Primitif ************/
void CreateDate (date * D)
/* Constructor Membentuk sebuah DATE, dengan nilai default adalah 01/01/1900 */
{
	SetTgl (01, &(* D));
	SetBln (01, &(* D));
	SetThn (1900, &(* D));
}

void CreateD2 (date * D)
/* Constructor Membentuk sebuah DATE, dengan nilai default adalah 01/01/1900 */
{
	SetTgl (27, &(* D));
	SetBln (12, &(* D));
	SetThn (1972, &(* D));
}

void CreateD3 (date * D)
{

}

/******* Selector komponen **********/
int GetTgl (date D)
/* Mengambil bagian Tgl dari date */
{
	return(D.Tgl);
}

int GetBln (date D)
/* Mengambil bagian Bln dari date */
{
	return(D.Bln);
}


int GetThn (date D)
/* Mengambil bagian Thn dari date */
{
	return(D.Thn);
}


/****** Pengubah komponen ******/
void SetTgl (int NewTgl, date * D)
/* Memberi nilai untuk Tgl */
{
	(* D).Tgl = NewTgl;
}

void SetBln (int NewBln, date * D)
/* Memberi nilai untuk Bln */
{
	(* D).Bln = NewBln;
}


void SetThn (int NewThn, date * D)
/* Memberi nilai untuk Thn */
{
	(* D).Thn = NewThn;
}


/****** Kelompok Interaksi dengan I/O device, BACA/TULIS ******/
void BacaDate (date * D, boolean *Valid)
/* Membentuk DATE dari iTgl, iBln dan iThn yang dibaca dari keyboard */
{
	int Tgl, Bln, Thn;
	boolean kabisat;
	printf("Tanggal\t:\t");
	scanf("%d", &Tgl);
	printf("Bulan\t:\t");
	scanf("%d", &Bln);
	printf("Tahun\t:\t");
	scanf("%d", &Thn);
	SetTgl (Tgl, &(* D));
	SetBln (Bln, &(* D));
	SetThn (Thn, &(* D));
	kabisat = isKabisat(Thn);
	*Valid = isValid(*D, kabisat);
	DateBefore(*D, kabisat);
	printf("Todays Date\t:\t");
	PrintObj(*D);
	NextDate(*D, kabisat);
}

boolean isValid(date D, boolean KBST)
/* Memeriksa apakah suatu tanggal valid, yaitu dengan memperhatikan batas akhir per bulan */
{ 
	int num = TglAkhir(D, KBST);
	if ((GetThn(D) < 1900)||(GetThn(D) > 30000)||(GetBln(D) < 1) ||(GetBln(D) > 12)||(GetTgl(D) < 1)||(GetTgl(D) > num))
	{
		printf("Tanggal yang dimasukan tidak valid\n");
		return 0;
	}
	else
	{
		return 1;
	}
}

void PrintObj (date D)
/* Print nilai D dengan format dd/mm/yyyy */
{
	printf ("\t%d\t/\t%d\t/\t%d\n", GetTgl(D), GetBln(D), GetThn(D));
}

/****** Operator Relasional ******/
boolean isKabisat (int Tahun)
/* Memeriksa apakah suatu tanggal adalah kabisat; Dipakai untuk bulan == 2 saja
Harusnya kabisat adalah thn yang habis dibagi 4, atau habis dibagi 100 dan 400, tapi implementasinya seringkali hanya menggunakan 4 sebagai pembagi */
{
	if(Tahun % 4 == NULL||Tahun % 400 == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

/***** Predikat lain *******/
int TglAkhir (date  bulan, boolean KBST)
/* Memberikan tanggal terakhir dari sebuah bulan */
{
	int num = GetBln(bulan);
	if (num == 1||num == 3||num == 5||num == 7||num == 8||num == 10||num == 12)
	{
		return 31;
	}
	else if (num == 2)
		if (KBST == true)
		{
			return 29;
		}
		else
		{
			return 28;
		}
	else
	{
		return 30;
	}
}

void DateBefore (date D, boolean KBST)
/* Menampilkan tanggal sebelumnya dari sebuah Date
	I.S = Tanggal tertentu diketahui
	F.S = Tanggal sebelumnya diketahui
	Hal yang perlu diketahui : Batas akhir tiap bulan dan jika jan, thn-1 */
{
	int tgl = GetTgl(D);
	int bln = GetBln(D);
	int thn = GetThn(D);
	if (bln == 1)
	{
		tgl = 31;
		bln = 12;
		thn = thn - 1;
		SetTgl(tgl, &D);
		SetBln(bln, &D);
		SetThn(thn, &D);
	}
	else if (bln == 3 && KBST == true)
	{
		tgl = 29;
		bln = bln - 1;
		SetTgl(tgl, &D);
		SetBln(bln, &D);
	}
	else if (bln == 3 && KBST == false)
	{
		tgl = 28;
		bln = bln - 1;
		SetTgl(tgl, &D);
		SetBln(bln, &D);
	}
	else if (tgl == 1)
	{
		tgl = TglAkhir(D, KBST);
		bln = bln - 1;
		SetTgl(tgl, &D);
		SetBln(bln, &D);
	}
	else
	{
		tgl = tgl - 1;
		SetTgl(tgl, &D);
	}
	printf("\nDate Before\t:\t");
	PrintObj(D);
}

void NextDate (date D, boolean KBST)
/* Menampilkan tanggal berikutnya dari sebuah Date
	I.S = Tanggal tertentu diketahui
	F.S = Tanggal berikutnya diketahui
	Hal yang perlu diketahui : Batas akhir tiap bulan dan jika des, thn+1 */
{
	int tgl = GetTgl(D);
	int bln = GetBln(D);
	int thn = GetThn(D);
	int tglakhr = TglAkhir(D, KBST);
	if(tgl < tglakhr)
	{
		tgl = tgl + 1;
		SetTgl(tgl, &D);
	}
	else if (GetBln(D) == 12)
	{
		tgl = 1;
		bln = 1;
		thn = thn + 1;
		SetTgl(tgl, &D);
		SetBln(bln, &D);
		SetThn(thn, &D);
	}
	else if (tgl == tglakhr)
	{
		tgl = 1;
		bln = bln + 1;
		SetTgl(tgl, &D);
		SetBln(bln, &D);
	}
	printf("\nNext Date\t:\t");
	PrintObj(D);
}


void SelisihDate (date D1, date D2, int *slsh)
/* Menampilkan selisih dua tanggal
	I.S = 2 buah Tanggal tertentu diketahui
	F.S = Tampil selisih dua buah tanggal
	Asumsi : 1 tahun = 365 hari */
{
	date selisih;
	int tgl1 = GetTgl(D1);
	int tgl2 = GetTgl(D2);
	int bln1 = GetBln(D1);
	int bln2 = GetBln(D2);
	int thn1 = GetThn(D1);
	int thn2 = GetThn(D2);
	boolean KbstSlsh;
	int btsbln, btstgl;
	if (abs(thn2 - thn1) == 1)
	{
		
	}
	else if (abs(thn2 - thn1)> 1)
	{
		
	}
	if (thn1 == thn2)
	{
		btstgl = tgl1;
		btsbln = bln2 - bln1;
		selisih.Bln = bln1;
		KbstSlsh = isKabisat(selisih.Thn);
		btstgl = TglAkhir(selisih, KbstSlsh) - btstgl + 2;
		if (bln1 == 2)
		{
			if (abs(bln2 - bln1) == 1)
			{
				*slsh = abs(btstgl + tgl2);
			}
			else if (bln1 == bln2)
			{
				*slsh = abs(tgl2 - tgl1);
			}
			else
			{
				do
				{
					selisih.Bln = selisih.Bln + 1;
					btstgl = btstgl + TglAkhir(selisih, KbstSlsh);
					*slsh = abs(btstgl);
				}while (selisih.Bln < btsbln);
			}
		}
		else if (abs(bln2 - bln1) == 1)
		{
			*slsh = abs(btstgl + tgl2);
		}
		else if (bln1 == bln2)
		{
			*slsh = abs(tgl2 - tgl1);
		}
		else if(KbstSlsh == true)
		{
			btstgl = TglAkhir(selisih, KbstSlsh) - btstgl;
			do
			{
				selisih.Bln = selisih.Bln + 1;
				btstgl = btstgl + TglAkhir(selisih, KbstSlsh);
				*slsh = abs(btstgl + tgl2);
			}while (selisih.Bln <= btsbln);
		}
		else
		{
			do
			{
				selisih.Bln = selisih.Bln + 1;
				btstgl = btstgl + TglAkhir(selisih, KbstSlsh);
				*slsh = abs(btstgl);
			}while (selisih.Bln <= btsbln);
			*slsh = abs(*slsh + tgl2);
		}
	}
}