#include <stdio.h>

/*int main(void){
    int sayi1,sayi2,sayi3;
    
    printf("birinci sayiyi giriniz:");
    scanf("%d", &sayi1);
    
    printf("ikinci sayiyi giriniz:");
    scanf("%d", &sayi2);
    
    printf("üçüncü sayiyi giriniz:");
    scanf("%d", &sayi3);
    
    if (sayi1<sayi2 && sayi2<sayi3)
        printf("en büyük sayi: %d\n", sayi3);
    else if (sayi1<sayi2 && sayi3<sayi2)
        printf("en büyük sayi: %d\n", sayi2);
    else
        printf("en büyük sayi: %d\n", sayi1);
    
    return 0;
}*/

/*int main(void){
    int sayi,i;
    int faktor=1;
    
    printf("bir sayi girin:");
    scanf("%d", &sayi);
    
    for (i=1; i<=sayi; i++) {
        
        faktor = faktor * i;
    }
    printf("%d! = %d\n",sayi,faktor);
    
    return 0;
}*/

/*int main(void){
    int i=1000;
    
    while (1000<=i && i<=2000) {
        
        printf("%d  ", i);
        i=i+2;
    }
    printf("\n");
           
    return 0;
}*/

/*int main (void){
    int sayi ,ilkSayi;
    int tersSayi=0,gecici;
    
    printf("bir sayi girin: ");
    scanf("%d", &sayi);
    
    ilkSayi=sayi;
    
    while (sayi>0) {
        gecici = sayi % 10;
        tersSayi = tersSayi * 10 + gecici;
        sayi = sayi / 10;
    }
    
    if (ilkSayi==tersSayi)
        printf("%d palindrom sayidir..\n", ilkSayi);
    else
        printf("%d palindrom sayi degildir..\n", ilkSayi);
    
    return 0;
}*/


/*int main(void){
    float sayi,toplam=1;
    int i, j,carpım=1;
    int faktor=1;
    
    printf("bir sayi giriniz: ");
    scanf("%f", &sayi);
    
    for(i=1 ;i<=sayi;i++){
        for (j=1; j<=i; j++) {
            carpım = carpım * sayi;
            faktor = faktor * j;
        }
        
        toplam = toplam + (float)carpım / faktor;
        
        carpım=1;
        faktor=1;
    }
    printf("cevap = %.4f\n", toplam);
        
    return 0;
}*/







































