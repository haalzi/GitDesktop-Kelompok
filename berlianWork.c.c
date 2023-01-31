#include <stdio.h>

 void inputhitung(int luas,int p,int l){
 	 
 	
     printf("\n input nilai panjang: ");
     scanf ("%d",&p);
     printf("\n input nilai lebar: ");
     scanf("%d",&l); 
	  printf("\nluas persegi panjang=  %d",luas);
}
  int hitung(int *luas,int p,int l)
  {
       *luas=p*l;
	 
}

   int main(){
	
	//kamus data//
	int luas,p,l;
	
	
	//modul untuk pemanggil//
	 inputhitung(luas,p,l);
	 hitung( luas,p,l);
	
	return 0;

}

