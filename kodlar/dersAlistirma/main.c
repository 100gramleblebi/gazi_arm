#include <stdio.h>

int main()
{
    int sayi1=0, sayi2=0;
    float sonuc=0;
    char islem;
    printf("Ilk sayıyı giriniz= \n");
    scanf("%d",&sayi1);
    printf("Islem seciniz; toplama(+) veya t/T, cikarma(-) veya c/C bolme(/) veya b/B, carpma(*) veya r/R \n");
    scanf("%s ", &islem);
    printf("İsleminiz= %d\n",islem );
    printf("Ikinci sayıyı giriniz= \n");
    scanf("%d",&sayi2);

    switch (islem) {
    case '+' :
        sonuc=sayi1+sayi2;
        printf("Sonuc= %f", sonuc);
        break;
    case '-' :
        sonuc=sayi1-sayi2;
        printf("Sonuc= %f", sonuc);
        break;
    case '*' :
        sonuc=sayi1*sayi2;
        printf("Sonuc= %f", sonuc);
        break;
    case '/' :
        sonuc=sayi1/sayi2;
        printf("Sonuc= %f", sonuc);

        break;
    default:
        break;
    }
    return 0;
  }



