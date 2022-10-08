#include <stdio.h> // k�t�phane tan�mlad�k
#include <stdlib.h> // k�t�phane tan�mad�k

int main(int argc, char *argv[]) { 
	FILE *notlarr = fopen("notlarr.txt", "r+"); // notlarr i�aret�isini tan�mlay�p notlarr.txt yi okuma modunda a�
	
	if(notlarr == NULL){ // notlarr yok ise
		printf("notlarr.txt bulunamadi"); // ekrana "notlarr.txt bulunamadi" yaz
		return 0;
	}
	
    int no[5],ogr[5],i; // 5 elemanl� diziler ve i tam say�s� tan�mlad�k
    float vize[5],final[5],ort[5]; // 5 elemanli diziler tan�mlad�k
    
	printf("No    OgrNo           Vize    Final   Ortalama\n"); // Ekrana bo�luk b�rakarak "No OgrNo Vize Final Ortalama" yazd�k. 
    
	for(i=0;i<5;i++){ // i=0 ve i<5 olana kadar i yi 1 artt�r. (D�ng�)
	fscanf(notlarr, "%d %f %f %f", &ogr[i], &vize[i], &final[i], &ort[i]); // notlarr.txt den ogr vize final ve ort verilerini �ektik
	printf("%d     %d      %.1f     %.1f    %.1f\n",i+1 , ogr[i], vize[i], final[i], ort[i]); // �ekti�imiz verileri ekrana yazd�rd�k.
	}
	
	fclose(notlarr); // notlarr.txt yi kapat.
	return 0;
}
