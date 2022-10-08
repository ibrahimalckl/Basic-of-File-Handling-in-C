#include <stdio.h> //kutuphane tanimladik
#include <stdlib.h> //kutuphane tanimladik
 
main()
{
    int sayac = 0, a, c, kackere = 0, b, i, r, bosluk, kelimesayisi; // integer tanimla.
    char metin[1000]; // max 1000 karakter tutan metin adli diziyi olustur.
 
    puts("Bir metin giriniz:"); // ekrana "Bir metin giriniz:" yaz.
    gets(metin); // klavyeden girilen cumleyi metin dizisine ata.
    
    c = strlen(metin); // metin dizisinin uzunlugunu alip c ye ata.
    
    while (c>=0) // c>=0 olana kadar donguye sok.
    {
	if(metin[c]==' ') // Eger metin dizisinin c tam sayisina denk gelen karakteri null ise
	kelimesayisi++; // kelimesayisi tam sayisini 1 arttir.
	c--; // c tam sayisini 1 eksilt.
    }
    
    while (metin[sayac]!= '\0') // metin karakterinin sayac degeri null olana kadar,
    {
        sayac++; // sayaci 1 arttir.
    }
    
    for (a = 0; a <= sayac - 3; a++) // 0 dan baslayip a tam sayisini sayacin -3 degerinden buyuk olana kadar a yi 1 arttir.
    {
        b =(metin[a] == 'b' || metin[a] == 'B'); //  metin dizisinin a. tam sayisina denk gelen karakteri 'b' ve 'B' ye esitleyip bunu b ye ata.
        i =(metin[a + 1] == 'i' || metin[a + 1] == 'I'); // metin dizisinin a+1. tam sayisina denk gelen karakteri 'i' ve 'I' ya esitleyip bunu i ye ata.
        r =(metin[a + 2] == 'r' || metin[a + 2] == 'R'); // metin dizisinin a+2. tam sayisina 'r' ve 'R' ye esitleyip bunu r ye ata.
        bosluk =(metin[a + 3] == ' ' || metin[a + 3] == '\0'); //metin a+3. sayisini NULL a esitleyip bosluk a ata.
        if ((b && i && r && bosluk) == 1) // eger b, i, r, ve bosluk integerlari 1 e esitse,
        kackere++; // kackere tam sayisini 1 arttir.
    }
    printf("Aradagimiz kelime 'bir' bu metinde %d kere vardir. \nBu metin %d kelimeden olusmaktadir.", kackere, kelimesayisi+1);
    
    //ekrana "Aradigimiz kelime 'bir' bu metinde kere vardir." yazip kackere gonder, alt satira gec ve "Bu metin kelimeden olusmaktadir." yazip kelimesayisi+1 gonder.
    
	getch(); // terminali kapatma.
    return 0;
}



