//iki sayının toplamı
//a ve b değişkenleri al ve aralarında değiştir
//öğrenci no, vize final notu al vize 40 final 60 sonucu yazdır
//yarıçap ve işlem türü 1 ise çevre 2 ise alan hesapla bunun dışında girilirse yanlış giriş de
//10 un katları olması lazım para miktarı gir en az banknot ver 100,50,20,10

#include <stdio.h>

/*int main (void) {
    int sayi1,sayi2,toplam;
    
    printf("birinci sayiyi girin:");
    scanf("%d", &sayi1);
    
    printf("ikinci sayiyi girin:");
    scanf("%d", &sayi2);
    
    toplam = sayi1+ sayi2;
    printf("toplam: %d\n", toplam);
    
    return 0;
    
}*/

/*int main(void){
    int A,B,C;
    
    printf("A sayisi giriniz:");
    scanf("%d", &A);
    
    printf("B sayisi giriniz:");
    scanf("%d", &B);
    
    C=A;
    A=B;
    
    printf("A: %d\n",B);
    printf("B: %d\n",C);
    
    return 0;
        
}*/

/*int main(void){
    int ogrencinumarasi, vize, final;
    float ortalama;
    
    printf("ogrenci numarasi :");
    scanf("%d", &ogrencinumarasi);
    
    printf("vize notu:");
    scanf("%d", &vize);
    
    printf("final notu:");
    scanf("%d", &final);
    
    ortalama =vize*0.4+ final*0.6;
    
    printf("ogrenci numarasi %d\n", ogrencinumarasi);
    printf("ortalama %f\n", ortalama);
    
    return 0;
    
}*/

/* #define pi 3.14
   // sabit değişken atama define la yapılıyor..
 
int main(void){
    int yaricap, islemturu ;
    float cevre, alan;
    
    printf("yaricap giriniz:");
    scanf("%d", &yaricap);
    
    printf("islemturu giriniz:");
    scanf("%d", &islemturu);
    
    cevre=2*pi*yaricap;
    alan=pi*yaricap*yaricap;
    
    if (islemturu==1)
        printf("çevre: %f\n",cevre);
    else if (islemturu==2)
        printf("alan %f\n", alan);
    else
        printf("yanlıs giris\n");
    return 0;
    
}*/

/*int main(void){
    int para, yuzluk, ellilik,yirmilik,onluk, toplambanknot, kalanmiktar;
    
    printf("onun katı olan bir para miktarı girin:");
    scanf("%d", &para);
    
    if(para>=10){
        yuzluk= para/100;
        kalanmiktar= para-yuzluk*100;
        ellilik=kalanmiktar/50;
        kalanmiktar= kalanmiktar-ellilik*50;
        yirmilik=kalanmiktar/20;
        kalanmiktar= kalanmiktar-yirmilik*20;
        onluk= kalanmiktar/10;
        
        toplambanknot= yuzluk+ellilik+yirmilik+onluk;
        
        printf("toplam banknot sayısı: %d\n", toplambanknot);
        
    }
   else
       printf("geçersiz miktar girdiniz! \n");
    
    return 0;
    
    
}*/

//
//
//




































































