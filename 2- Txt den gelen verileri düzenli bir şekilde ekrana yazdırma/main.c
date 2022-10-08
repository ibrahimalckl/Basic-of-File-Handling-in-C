#include <stdio.h> // kütüphane tanýmladýk
#include <stdlib.h> // kütüphane tanýmadýk

int main(int argc, char *argv[]) { 
	FILE *notlarr = fopen("notlarr.txt", "r+"); // notlarr iþaretçisini tanýmlayýp notlarr.txt yi okuma modunda aç
	
	if(notlarr == NULL){ // notlarr yok ise
		printf("notlarr.txt bulunamadi"); // ekrana "notlarr.txt bulunamadi" yaz
		return 0;
	}
	
    int no[5],ogr[5],i; // 5 elemanlý diziler ve i tam sayýsý tanýmladýk
    float vize[5],final[5],ort[5]; // 5 elemanli diziler tanýmladýk
    
	printf("No    OgrNo           Vize    Final   Ortalama\n"); // Ekrana boþluk býrakarak "No OgrNo Vize Final Ortalama" yazdýk. 
    
	for(i=0;i<5;i++){ // i=0 ve i<5 olana kadar i yi 1 arttýr. (Döngü)
	fscanf(notlarr, "%d %f %f %f", &ogr[i], &vize[i], &final[i], &ort[i]); // notlarr.txt den ogr vize final ve ort verilerini çektik
	printf("%d     %d      %.1f     %.1f    %.1f\n",i+1 , ogr[i], vize[i], final[i], ort[i]); // çektiðimiz verileri ekrana yazdýrdýk.
	}
	
	fclose(notlarr); // notlarr.txt yi kapat.
	return 0;
}
