#include <stdio.h> // kutuphane tanimladik

main()
{
    int a,b,c=1,d,e,f,g,h,i,yedek,yedek2,yedek3; // integer tanimla.
    char metin[100]; // max 100 karakter tutan metin adlı diziyi oluştur.
	char ters[100]; // max 100 karakter tutan ters adli diziyi olustur.
  
    printf("Metni giriniz:"); // ekrana "Metni giriniz:" yaz.
    gets(metin); // klavyeden metin al ve metin dizisine ata.
    
    a=strlen(metin); // metin dizisinin uzunlugunu a tam sayisina ata.
    yedek=a; // a tam sayisini yedek tam sayisina ata.
    yedek2=yedek; // yedek tam saysini yedek2 tam sayisina ata.
    yedek3=yedek2; // yedek2 tam sayisini yedek3 tam sayisina ata.
    
    for(i=0;i<=yedek2;i++){ // i 0 dan baslayip yedek2 tam sayisina esit olana kadar 1 arttir.
	yedek--; // yedek tam sayisin 1 eksilt.
	ters[yedek]=metin[i]; // ters dizisin yedek sayisini metin dizisinin i sayisina esitle.
    }
    
	printf("Metnin Tersi:"); // ekrana "Metnin Tersi:" yaz.
   
    for(f=yedek2;f>=0;f--){ // yedek2 tam sayisini f tam sayisina ata ve f 0 olana kadar 1 eksilt.                                        
    printf("%c",metin[f]); // ekrana metin dizisini yazdir.
    }
    
    printf("\n"); // bir alt satira gec.
    
    for(i=0;metin[i]!=NULL;i++) // i 0 dan baslayip metin dizisinin i sayisi null'a esit olana kadar i yi 1 arttir.
      if(c==1&&metin[i]!=' ') // eger c 1'e esit ve metin dizisin i sayisi null'a esit ise,
    {
     metin[i]=toupper(metin[i]); // metin dizisinin i sayisina denk gelen karakteri buyut, buyukse bir sey yapma.
     c=0; // c yi 0'a esitle.
    }
     else if(metin[i]==' ') // degilse, eger metin i sayisina denk gelen karakter null ise,
     c=1; // c yi 1'e esitle.
    
    printf("Ilk Harfleri Buyuk Hali: "); // ekrana "Ilk Harfleri Buyuk Hali: " yaz.
    printf("%s",metin); // ekrana metin stringini yaz.
	
    printf("\nMetnin Tersinin Bas Harfleri Buyuk Hali Aliniyor...\n"); // Bir alt satira gec ve ekrana "Metnin Tersinin Bas Harfleri Buyuk Hali Aliniyor..." yaz ve bir alt satira gec.

    for(yedek=0;ters[yedek]!=NULL;yedek++) // 0 dan baslayip ters dizisinin yedek sayisina denk gelen karakter null olana kadar yedek sayisin 1 arttir.
    if(e==1&&ters[yedek]!=' ') // e=1 ve ters dizisinin yedek sayisina denk gelen karakter null ise,
    {
    ters[yedek]=toupper(ters[yedek]); // ters dizisinin yedek sayisina denk gelen karakteri buyut, buyukse bir sey yapma.
    e=0; // e'yi 0'a esitle.
    }
    else if(ters[yedek]==' ') //degilse, ters dizisinin yedek sayisina denk gelen karakter null ise,
    e=1; // e'yi 1'e esitle.

    printf("Tersinin Ilk Harfleri Buyuk Hali: "); // ekrana "Tersinin Ilk Harfleri Buyuk Hali: " yaz.
    printf("%s",ters); // ekrana ters stringini yaz.

    getch(); // terminali kapatma.
    return 0; 
}
