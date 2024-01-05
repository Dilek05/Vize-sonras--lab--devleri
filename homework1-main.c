//
//  homework1
//

#include <stdio.h>


/*int main(void){
    int sayi1,sayi2;
    
    printf("sayi girin:");
    scanf("%d", &sayi1);
    
    printf("sayi girin:");
    scanf("%d", &sayi2);
    
    printf("1 = %d\n", sayi1);
    printf("2 = %d\n", sayi2);
    
    return 0;
}*/


/*#define pi 3.14
int main(void){
    int yaricap;
    float alan;
    
    printf("yaricap giriniz:");
    scanf("%d", &yaricap);
    
    
    alan= pi*yaricap*yaricap;
    
    printf("alan: %f\n", alan);
    
    return 0;
}*/


/*int main(void){
    int sayi, sonuc;
    
    printf("sayi giriniz:");
    scanf("%d", &sayi);
    
    sonuc= sayi % 2 ;
    
    if (sonuc==0)
        printf("girilen sayi çift.\n");
    else
        printf("girilen sayi tek.\n");
    return 0;

}*/


/*int main(void){
    int sicaklik;
    
    printf("sıcaklık girin:");
    scanf("%d", &sicaklik);
    
    if(sicaklik>0)
        printf("donma noktasının üstünde. \n");
    else if (sicaklik<0)
        printf("donma noktasının altında.\n");
    else
        printf("donma noktasında. \n");
    return 0;
    
}*/


/*int main(void){
   
    float fahrenheit,celsius;
    
    printf("fahrenheit:");
    scanf("%f", &fahrenheit);
    
    celsius= (fahrenheit-32)*5/9;
    
    printf("celsius: %f\n", celsius);
    return 0;
    
}*/


/*int main(void){
    int feet;
    float sonuc;
    
    printf("feet:");
    scanf("%d",&feet);
    
    sonuc= feet* 30.48;
    
    printf("%f cm\n ",sonuc);
    return 0;
    
}*/


/*int main(void){
    int i=1;
    int sonuc;
    
    while (i<=10)
    {
        sonuc= i*i;
        printf("%d karesi: %d\n",i, sonuc);
        i++;
    }
    
    return 0;
}*/


/*int main (void){
    int n=3;
    int sum=0;
    
    while (n<=9)
    {
        sum= sum +n;
        n++;
    }
    printf("3ten 9a kadar olan sayıların toplamı: %d\n", sum);
    
    return 0;
}*/


/*int main (void){
    int sayi,sonuc;
    int i;
    
    printf("sayiyi giriniz:");
    scanf("%d", &sayi);
    
    for (i=1; i<=sayi; i++)
    {
        sonuc= sayi % i;
        
        if (sonuc==0)
            printf("%d\n",i);
    }
    
    return 0;
}*/


/*int main (void){
    int sayi1,sayi2,sayi3;
    
    printf("birinci sayiyi giriniz:");
    scanf("%d", &sayi1);
    
    printf("ikinci sayiyi giriniz:");
    scanf("%d", &sayi2);
    
    printf("üçüncü sayiyi giriniz:");
    scanf("%d", &sayi3);
    
    if (sayi2<sayi1 && sayi3<sayi1)
        printf("en büyük sayi: %d\n", sayi1);
    else if (sayi2<sayi1 && sayi1<sayi3)
        printf("en büyük sayi : %d\n", sayi3);
    else
        printf("en büyük sayi: %d\n", sayi2);
    
    return 0;
}*/

/*int main (void){
    int i;
    int sayi[11];
    int carpım=1;
    int toplam=0;
    
    for (i=1; i<=10; i++)
    {
        printf("%d. sayiyi giriniz: ",i);
        scanf("%d",&sayi[i]);
        
        toplam= toplam + sayi[i];
        carpım= carpım * sayi[i];
    }
    printf("\n");
    printf("girilen sayıların toplamı : %d\n", toplam);
    printf("girilen sayıların çarpımı : %d\n", carpım);
    printf("\n");
    
    return 0;
}*/


/*int main(void){
    int i;
    
    for (i=0; i<=100; i=i+5)
    {
        printf("%d\n", i);
    }
    printf("\n");
    
    return 0;
}*/


/*int main(void){
    int i;
    int sonuc;
    
    for (i=0; i<=10; i++)
    {
        sonuc = 6 * i;
        printf("6 * %d = %d\n", i, sonuc);
    }
    printf("\n");
    
    return 0;
}*/


/*int main(void){
    int sayi;
    int carpım=1;
    int i;

    printf("faktoriyeli hesaplanacak olan sayiyi giriniz: ");
    scanf("%d", &sayi);
    
    i=sayi;
    
    while (1<=sayi)
    {
        carpım = carpım * sayi;
        sayi--;
    }
    printf("%d! = %d \n", i, carpım);
    
    return 0;
}*/


/*int main(void){
    int sayi;
    
    printf("sayiyi giriniz:");
    scanf("%d", &sayi);
    
    while (1<=sayi)
    {
        printf("%d -- ", sayi);
        sayi--;
    }
    return 0;
}*/

/*int main(void){
    int i;
    int toplam=0;
    
    for (i=1000; i<=2000; i=i+2)
    {
        printf("%d - ",i);
        
        toplam = toplam + i;
    }
    printf("\n");
    printf("toplam: %d\n", toplam);
    
    return 0;
}*/

// 17.soru
int main(void){
    int sayi,n;
    int toplam=0;
     
    printf("sayi girisi:");
    scanf("%d", &sayi);
    
    n=sayi*sayi;
    
    while (1<=sayi)
    {
        toplam = toplam + (1/n);
        sayi--;
        n=sayi;
    }
    printf("toplam: %d", toplam);
    
    return 0;
}


 int main (void){
    int sayi;
    int sonuc;

    printf("onluk tabandaki sayi girisini yapiniz:");
    scanf("%d", &sayi);
    
    
    while (0<sayi)
    {
        sonuc=sayi % 2;
        if (sonuc==0)
            printf("1");
        else
            printf("0");
        
        sayi = sayi /2;
       
    }
    printf("\n");
    
    return 0;
}


/*int main(void){
    int sayi,sonuc;
    int i=0;
    
    printf("sayi girisi: ");
    scanf("%d", &sayi);
    
    while (i<=10)
    {
        sonuc= i * sayi;
        
        printf("%d * %d = %d\n", i, sayi, sonuc);
        i++;
    }
    return 0;
}*/


/*int main (void){
    int sayi,rakam;
    int rakamSayisi=0;
    
    printf("sayi giriniz:");
    scanf("%d", &sayi);
    
    while (sayi !=0)
    {
        rakam = sayi %10;
        
        rakamSayisi++;
        
        sayi = sayi / 10;
    }
    printf("girilen sayi %d basamaklı..\n", rakamSayisi);
    
    return 0;
}*/


/*int main (void){
    int sayi, rakam1 = 0, rakam2;
    int i;
    
    printf("sayi giriniz: ");
    scanf("%d", &sayi);
    
    i=sayi;
    
    while (sayi>0)
    {
        rakam1 = sayi % 10;
        
        sayi= sayi /10;
    }
    
    rakam2 = i % 10;
    
    printf("ilk rakam: %d\n", rakam1);
    printf("son rakam: %d\n", rakam2);
    
    return 0;
}*/

//22.soruyu yapamadım..

/*int main(void) {
    
    int sayi, ilkSayi;
    int tersSayi=0 , gecici;
 
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    ilkSayi = sayi;

    while (sayi > 0) {
        gecici = sayi % 10;
        tersSayi = tersSayi * 10 + gecici;
        sayi = sayi / 10;
    }

    if (ilkSayi == tersSayi) {
        printf("%d bir palindrom sayidir.\n", ilkSayi);
    } else {
        printf("%d bir palindrom sayi degildir.\n", ilkSayi);
    }

    return 0;
}*/


/*int main(void) {
    int sayi, gecici, basamak;
    int frekans[10] = {0}; // Her basamak için frekansı saklamak için dizi

    // Kullanıcıdan bir sayı al
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    // Sayının her basamağını bul ve frekansları güncelle
    gecici = sayi;
    while (gecici > 0) {
        basamak = gecici % 10;
        frekans[basamak]++;
        gecici = gecici / 10;
    }

    // Frekansları ekrana yazdır
    printf("Her basamaktaki frekanslar:\n");
    for (int i = 0; i < 10; i++) {
        if (frekans[i] > 0) {
            printf("Basamak %d: %d kere\n", i, frekans[i]);
        }
    }

    return 0;
}*/


/*int main(void){
    
    int sayi1, sayi2,ebob=1;
    int i=1;
    
    printf("birinci sayiyi giriniz: ");
    scanf("%d", &sayi1);
    
    printf("ikinci sayiyi giriniz: ");
    scanf("%d", &sayi2);
    
    while (i<=sayi1 && i<=sayi2)
    {
        if (0==sayi1 % i && 0==sayi2 %i){
            printf("%d-", i);
            ebob=i;
        }
        i++;
    }
    printf("\n");
    printf("girilen sayinin EBOB u: %d\n", ebob);
    
    return 0;
    
}*/




   















































































