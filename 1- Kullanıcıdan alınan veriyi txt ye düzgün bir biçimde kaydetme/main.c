#include <stdio.h> // k�t�phane tan�mlad�k
#include <stdlib.h> // k�t�phane tan�mlad�k

int main(int argc, char *argv[]) { // main a�t�k
    FILE *notlar; // notlar pointer� tan�mlad�k
    notlar = fopen("notlar.txt", "r+"); // notlar.txt dosyas�ndan veri almak i�in kullan�yoruz
    if(notlar == NULL){ // eger notlar.txt yok ise
	printf("notlar.txt bulunamadi yenisi olusturuluyor...\n"); // ekrana "notlar.txt bulunamadi" yaz
		
	notlar = fopen("notlar.txt", "w+");	// notlar.txt yi olu�tur
		
	int a; // a tam say�s�n� tan�mlad�k
    float ort,b,c; // ort,b,c ondal�kl� say�lar�n� tan�mlad�k
    printf("Ogrenci Numaranizi Giriniz: "); // ekrana "Ogrenci Numaranizi Giriniz: " yazd�rd�k
    scanf("%d", &a); // klavyeden tam say� al�p 'a' ya atad�k 
    
    printf("Vize: "); // ekrana "Vize: " yazd�rd�k
    scanf("%f", &b); // klavyeden ondal�kl� say� al�p 'b' ye atad�k
    
    printf("Final: "); // ekrana "Final: " yazd�rd�k
    scanf("%f", &c); // klavyeden ondal�kl� say� al�p 'c' ye atad�k
    
    ort = (b*40)/100 + (c*60)/100; // ortalama alip 'ort' ye atad�k
    printf("Ortalama: %.1f", ort); // ekrana "Ortalama: " yazd�r�p 'ort' g�nderdik
    
    fprintf(notlar, "%d\n", a); // notlar.txt "Ogrenci Numarasi: " yazd�r�p 'a' yi g�nderdip bir alt sat�ra ge�tik
    fprintf(notlar, "%g\n", b); // notlar.txt "Vize: " yazd�r�p 'b' yi g�nderdip bir alt sat�ra ge�tik
    fprintf(notlar, "%g\n", c); // notlar.txt "Final: " yazd�r�p 'c' yi g�nderdip bir alt sat�ra ge�tik
    fprintf(notlar, "%.1f\n\n", ort); // notlar.txt "Ortalama: " yazd�r�p 'ort' g�nderdip iki alt sat�ra ge�tik
	    
    printf("\nKayit Basarili Bir Sekilde Yapildi."); // bir alt sat�ra ge�ip ekrana "Kayit Basarili Bir Sekilde Yapildi." yazd�rd�k
    fclose(notlar); // notlar.txt yi kapatt�k
		
		return 0;
	}
	
	int a; // a tam sayisi tanimla
	float b,c,ort; // b, c, ort, ondalikli sayilarini tanimla
    
	fscanf(notlar, "%d", &a); // notlar.txt den a tam say�s�n� �ek
	printf("Ogrenci Numarasi: %d\n", a); // ekrana "Ogrenci Numarasi: " yaz 'a' yi g�nder ve alt sat�ra ge�
    fscanf(notlar, "%f", &b); // notlar.txt den b ondal�kl� say�s�n� �ek
    printf("Vize: %g\n", b); // ekrana "Vize: " yaz 'b' yi g�nder ve alt sat�ra ge�
    fscanf(notlar, "%f", &c); // notlar.txt den c ondal�kl� say�s�n� �ek
    printf("Final: %g\n", c); // ekrana "Final: " yaz 'c' yi g�nder ve alt sat�ra ge�
    fscanf(notlar, "%f", &ort); // notlar.txt den ort ondal�kl� say�s�n� �ek
    printf("Ortalama: %.1f\n", ort); // ekrana "Ortalama: " yaz 'ort' g�nder ve alt sat�ra ge�
    
    fclose(notlar); // notlar.txt yi kapatt�k
    
	return 0;
	getch();
}
