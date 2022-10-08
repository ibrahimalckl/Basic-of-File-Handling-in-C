#include <stdio.h> // kütüphane tanýmladýk
#include <stdlib.h> // kütüphane tanýmladýk

int main(int argc, char *argv[]) { // main açtýk
    FILE *notlar; // notlar pointerý tanýmladýk
    notlar = fopen("notlar.txt", "r+"); // notlar.txt dosyasýndan veri almak için kullanýyoruz
    if(notlar == NULL){ // eger notlar.txt yok ise
	printf("notlar.txt bulunamadi yenisi olusturuluyor...\n"); // ekrana "notlar.txt bulunamadi" yaz
		
	notlar = fopen("notlar.txt", "w+");	// notlar.txt yi oluþtur
		
	int a; // a tam sayýsýný tanýmladýk
    float ort,b,c; // ort,b,c ondalýklý sayýlarýný tanýmladýk
    printf("Ogrenci Numaranizi Giriniz: "); // ekrana "Ogrenci Numaranizi Giriniz: " yazdýrdýk
    scanf("%d", &a); // klavyeden tam sayý alýp 'a' ya atadýk 
    
    printf("Vize: "); // ekrana "Vize: " yazdýrdýk
    scanf("%f", &b); // klavyeden ondalýklý sayý alýp 'b' ye atadýk
    
    printf("Final: "); // ekrana "Final: " yazdýrdýk
    scanf("%f", &c); // klavyeden ondalýklý sayý alýp 'c' ye atadýk
    
    ort = (b*40)/100 + (c*60)/100; // ortalama alip 'ort' ye atadýk
    printf("Ortalama: %.1f", ort); // ekrana "Ortalama: " yazdýrýp 'ort' gönderdik
    
    fprintf(notlar, "%d\n", a); // notlar.txt "Ogrenci Numarasi: " yazdýrýp 'a' yi gönderdip bir alt satýra geçtik
    fprintf(notlar, "%g\n", b); // notlar.txt "Vize: " yazdýrýp 'b' yi gönderdip bir alt satýra geçtik
    fprintf(notlar, "%g\n", c); // notlar.txt "Final: " yazdýrýp 'c' yi gönderdip bir alt satýra geçtik
    fprintf(notlar, "%.1f\n\n", ort); // notlar.txt "Ortalama: " yazdýrýp 'ort' gönderdip iki alt satýra geçtik
	    
    printf("\nKayit Basarili Bir Sekilde Yapildi."); // bir alt satýra geçip ekrana "Kayit Basarili Bir Sekilde Yapildi." yazdýrdýk
    fclose(notlar); // notlar.txt yi kapattýk
		
		return 0;
	}
	
	int a; // a tam sayisi tanimla
	float b,c,ort; // b, c, ort, ondalikli sayilarini tanimla
    
	fscanf(notlar, "%d", &a); // notlar.txt den a tam sayýsýný çek
	printf("Ogrenci Numarasi: %d\n", a); // ekrana "Ogrenci Numarasi: " yaz 'a' yi gönder ve alt satýra geç
    fscanf(notlar, "%f", &b); // notlar.txt den b ondalýklý sayýsýný çek
    printf("Vize: %g\n", b); // ekrana "Vize: " yaz 'b' yi gönder ve alt satýra geç
    fscanf(notlar, "%f", &c); // notlar.txt den c ondalýklý sayýsýný çek
    printf("Final: %g\n", c); // ekrana "Final: " yaz 'c' yi gönder ve alt satýra geç
    fscanf(notlar, "%f", &ort); // notlar.txt den ort ondalýklý sayýsýný çek
    printf("Ortalama: %.1f\n", ort); // ekrana "Ortalama: " yaz 'ort' gönder ve alt satýra geç
    
    fclose(notlar); // notlar.txt yi kapattýk
    
	return 0;
	getch();
}
