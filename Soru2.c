#include<stdio.h>
void main()
{
    int i, j, toplam1 = 0, toplam2 = 0, Sonuc = 0;
    for(i=1; i<=100; i++)
    {
        toplam1+=i; 
    }
    toplam1 = toplam1*toplam1;
    printf("İlk 100 doğal sayının toplamının karesi: %d, ",toplam1);
    
    for(j=1; j<=100; j++)
    {
        toplam2=toplam2+j*j;
    }
    printf("İlk 100 doğal sayının kareleri toplamı: %d, ",toplam2);
    
    Sonuc = toplam1 - toplam2; 
    printf("Sonuç: %d ",Sonuc);
}