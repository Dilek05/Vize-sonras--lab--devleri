#include <stdio.h>

//  main.c
//  lab11
//
//  Created by Dilek ÜNLÜ on 3.01.2024.
//

/*int main(void){
    char s[40], gecici;
    int i,n;
    
    printf("bir seyler yazin: ");
    scanf("%s",s);
    
    for (n=0; s[n]!='\0'; n++);
    
    for (i=0; i<n/2; i++)
    {
        gecici = s[n-i-1];
        s[n-i-1]=s[i];
        s[i]= gecici;
    }
    printf("tersi: %s\n",s);
    
    return 0;
}*/



/*int main(void){
    
    char s1[40],s2[40];
    int i,j;
    
    printf("first string: ");
    scanf("%s", s1);
    
    printf("second string: ");
    scanf("%s", s2);
 
    for (i=0; s1[i]; i++);
    
    for (j=0; s2[j] ; j++, i++)
    {
        s1[i]= s2[j];
    }
    s1[i]='\0';
    
    printf("%s\n", s1);
    
    return 0;
}*/


/*int main(void){
    char s1[40],s2[40];
    int i,j;
    
    printf("mail adresinizini giriniz: ");
    fgets(s1, sizeof(s1), stdin);
    
    for (i=0,j=0; s1[i]; i++)
    {
        if ((s1[i]>='A' && s1[i]>='Z') || (s1[i]>='a' && s1[i]>='z'))
        {
            s2[j]=s1[i];
            j++;
        }
    }
    printf("%s\n",s2);
    
    return 0;
}*/






















































