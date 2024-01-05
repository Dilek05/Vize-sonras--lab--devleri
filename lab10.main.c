#include <stdio.h>

/*int main (void){
    float dizi[8];
    int i;
    
    for(i=0;i<8; i++){
        printf("%d. elemanı giriniz: ", i+1);
        scanf("%f", &dizi[i]);
    }
    float toplam=0;
    float ortalama;

    for(i=0;i<8; i++){
        toplam = toplam +dizi[i];
    }
    ortalama = toplam / 8;
    
    printf("ortalam :%.2f\n", ortalama);
    
    return 0;
}*/


/*int main (void){
    int dizi[10];
    int i,kare;
    
    for (i=0; i<10; i++)
    {
        printf("sayi giriniz:");
        scanf("%d", &dizi[i]);
        
        if(dizi[i]!= -1)
        {
            kare = dizi[i] *dizi[i];
            
        }
        else{
            break;
        }
        printf("girilen sayinin karesi: %d\n", kare);
    
    }
    return 0;
}*/

/*int main(void){
    int sayi, basamak,i;
    int dizi[5];
    
    printf("sayi giriniz: ");
    scanf("%d", &sayi);
    
    if (sayi<=99999) {
        
        for (i=0; i<5; i++)
        {
            basamak = sayi % 10;
            
            dizi[i]=basamak;
            printf("%d\n", dizi[i]);
            
            sayi= sayi /10;
            if (sayi==0) {
                break;
                
            }
        }
    }
    else
        printf("tekrar sayi girişi yapın: ");
    return 0;
}*/


/*int main(void){
    int i,dizi[10];
    
    for (i=0; i<10; i++)
    {
        printf("sayi giriniz: ");
        scanf("%d",& dizi[i]);
    }
    printf("tersten !!\n ");
    
    for (i=0; i<10; i++)
    {
        printf("%d\n",dizi[9-i]);
    }
    return 0;
}*/


int main (void){
    int satir,gecici;
    int i,j;
    char harf[14]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n'};
    
    printf("taban değeri alınız: ");
    scanf("%d", &satir);
    
    
    for(i=0; i<satir; i++){
       gecici = 2*i+1;
       
        for (j=0; j<gecici; j++)
        {
            
            printf("%c", harf[j]);
        }
        printf("\n");
    }
    return 0;
}







































