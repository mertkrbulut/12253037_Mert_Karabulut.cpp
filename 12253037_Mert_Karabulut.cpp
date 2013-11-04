1) Kullanıcı tarafından girilen pozitif bir N tam sayısına kadar olan tüm ASAL sayıları ve 
bunların adedini görüntüleyen C programını yazınız.

#include <stdio.h> //Temel giriş - çıkış elemanlarını kullanmamızı sağlayan kütüphane.
#include <stdlib.h> //Bu kütüphaneyi system(“pause”); kodu için ekledim.

int main ()
{   
	int sayi; //sayı değişkenini tanımladım.
	int asal, bolenler, sonuc; //bulunacak asal sayıları asal değişkeninde, asal sayıları bulmak için tek tek sayıları bölmesi için bölenler değişkenini ve sonucun asal sayı olup olmadığını tespit edip asal sayıysa 1 değilse 0 olması için sonuç değişkenini tanımladım.
	int topasal=0; //toplam asal sayı adedini gösterecek olan değişkeni tanımladım.

	printf (" Pozitif bir N sayisi giriniz : "); //klavyeden girilecek olan pozitif doğal sayıyı ekrana yazıyorum.
	scanf  (" %d", &sayi);

	for (asal =2; asal < sayi; asal++) //en küçük asal sayı 2 olduğundan dolayı asalı 2den başlatıyorum. Klavyeden girilen sayıya kadar döngüye sokuyorum.
	{
		sonuc = 1; //asal sayıysa
		for (bolenler = 2; bolenler < asal; bolenler++) //bölenleri, asal sayıya kadar birer birer arttırıyorum. 
		{
			if (asal % bolenler == 0) //eğer asal sayı, kendine kadar olan bölenlerin herhangi birine bölündüğünde kalan 0'sa;  
			{
				sonuc = 0; //asal sayı değildir.
				break; //döngüye geri döner.
			}
		}    
		if (sonuc == 1) //eğer sonuç 1'se
			printf (" %d \n", asal); //ekrana asal sayıları yazdırıyorum.       
		{
			topasal = topasal + sonuc; //toplam asal sayı adedini belirlemek için, çıkan her bir sonucu toplam asala ekliyorum.
		}
	}
	printf("Toplam asal sayi =%d\n", topasal); //toplam asal sayıyı ekrana yazdırıyoum.
	system("pause"); // Derleyicilerde ayarlar farklı olduğundan, kapanabilme ihtimaline karşı ekledim.
}



2) A ülkesinin bugünkü nüfusu 10 milyon ve yıllık nüfus artış hızı %25, B ülkesinin 
bugünkü nüfusu 40 milyon ve yıllık nüfus artış hızı %12’dir. Bu bilgilere gore A 
ülkesinin B ülkesinin nüfusunu kaç yıl sonra geçeceğini hesaplayarak ekrana yazan C 
programını for, while ve do-while döngü yapılarını kullanarak ayrı ayrı 
yazınız.

(for)

#include <stdio.h> //Temel giriş - çıkış elemanlarını kullanmamızı sağlayan kütüphane.
#include <stdlib.h> //Bu kütüphaneyi system(“pause”); kodu için ekledim.


void main ()
{  

	float nufusa=10000000, nufusb=40000000, yuzdelikartisa, yuzdelikartisb; //a ve b nin nüfuslarını ve yüzdelik artışlar sonucu tamsayı çıkmama ihtimaline karşı da float değişkeninde tanımladım.
	int yil=0; // yıl değerimi tamsayı olarak tanımlıyorum. Kaç yıl sonra nüfusunu geçtiğini bulmak için de yılımızı 0 dan başlatıyorum.

	for(nufusa,nufusb; nufusa<nufusb; yil++) //for döngüsünde a ülkesinin nüfusu b ülkesininkinden büyük olana kadar döngüye sokuyorum ve yılımızı birer birer arttırıyorum.
	{  
		yuzdelikartisa = 0.25*nufusa; yuzdelikartisb = 0.12*nufusb; //a ve b ülkelerinin nüfus artış miktarları
		nufusa = nufusa + yuzdelikartisa; nufusb = nufusb + yuzdelikartisb; //yıllar birer birer arttıkça, nüfus değerlerimiz de yıllık artış miktarına göre artıyor.
	}
	printf("%d yil sonra A'nin nufusu B'yi gecer\n", yil); //ekrana çıktımızı yazdırıyorum.

	system("pause"); // Derleyicilerde ayarlar farklı olduğundan, kapanabilme ihtimaline karşı ekledim.

}



(while)

#include <stdio.h> //Temel giriş - çıkış elemanlarını kullanmamızı sağlayan kütüphane.
#include <stdlib.h> //Bu kütüphaneyi system(“pause”); kodu için ekledim.



void main ()
{  

	float nufusa=10000000, nufusb=40000000, yuzdelikartisa, yuzdelikartisb; //a ve b nin nüfuslarını ve yüzdelik artışlar sonucu tamsayı çıkmama ihtimaline karşı da float değişkeninde tanımladım.

	int yil=0; //yıl değerimi tamsayı olarak tanımlıyorum. Kaç yıl sonra nüfusunu geçtiğini bulmak için de yılımızı 0 dan başlatıyorum. 


	while(nufusa<nufusb) //a ülkesinin nüfusu b ülkesininkinden büyük olana kadar döngüye sokuyorum.
	{  
		yuzdelikartisa = 0.25*nufusa; yuzdelikartisb = 0.12*nufusb; //a ve b ülkelerinin nüfus artış miktarlarını girdim.
		nufusa = nufusa + yuzdelikartisa; nufusb = nufusb + yuzdelikartisb; //yıllar birer birer arttıkça, nüfus değerlerimiz de yıllık artış miktarına göre artıyor.
		yil++; //Birer birer yıl değişkenimi arttırıyorum.
	}
	printf("%d yil sonra A'nin nufusu B'yi gecer\n", yil); //ekrana çıktımızı yazdırıyorum.

	system("pause"); // Derleyicilerde ayarlar farklı olduğundan, kapanabilme ihtimaline karşı ekledim.

}




(do-while)

#include <stdio.h> //Temel giriş - çıkış elemanlarını kullanmamızı sağlayan kütüphane.
#include <stdlib.h> //Bu kütüphaneyi system(“pause”); kodu için ekledim.



void main ()
{  

	float nufusa=10000000, nufusb=40000000, yuzdelikartisa, yuzdelikartisb; //a ve b nin nüfuslarını ve yüzdelik artışlar sonucu tamsayı çıkmama ihtimaline karşı da float değişkeninde tanımladım.
	int yil=0; // yıl değerimi tamsayı olarak tanımlıyorum. Kaç yıl sonra nüfusunu geçtiğini bulmak için de yılımızı 0 dan başlatıyorum. 


	do //do-while döngüsü için yapması gerekenleri do'ya yazacağım.
	{  
		yuzdelikartisa = 0.25*nufusa; yuzdelikartisb = 0.12*nufusb; //a ve b ülkelerinin nüfus artış miktarları
		nufusa = nufusa + yuzdelikartisa; nufusb = nufusb + yuzdelikartisb; //yıllar birer birer arttıkça, nüfus değerlerimiz de yıllık artış miktarına göre artıyor.
		yil++; //Birer birer yıl değişkenimi arttırıyorum.
	}
	while(nufusa<nufusb) ; //a ülkesinin nüfusu b ülkesininkinden büyük olana kadar döngüye sokuyorum.
	
	printf("%d yil sonra A'nin nufusu B'yi gecer\n", yil); //ekrana çıktımızı yazdırıyorum.
	system("pause"); // Derleyicilerde ayarlar farklı olduğundan, kapanabilme ihtimaline karşı ekledim.

}


3) 1 ile 1000 arasındaki kendisi hariç bölenlerinin toplamı kendisine eşit olan sayıları (bu 
sayılara mükemmel sayı denir) ekrana yazan program yazınız.

#include <stdio.h> //Temel giriş - çıkış elemanlarını kullanmamızı sağlayan kütüphane.
#include <stdlib.h> //Bu kütüphaneyi system(“pause”); kodu için ekledim.
	
int main()
{
	int mukemmelsayi, bolen, tamboltoplam=0; //mükemmel sayı, bölenleri ve tam bölenler toplamını değişkene tanımlıyorum.

	for (mukemmelsayi =1; mukemmelsayi<=1000; mukemmelsayi++) //mükemmel sayıyı 1den 1000'e kadar birer birer deneyerek for döngüsüne sokuyorum.
	{
		tamboltoplam = 0; //tam bölenlerin toplamını 0'dan başlatıyorum.
		
		for (bolen = 1; bolen<mukemmelsayi; bolen++) //2.for döngüsüyle bölenleri 1'den başlatıp mükemmel sayıya kadar birer birer arttırıyorum.
		{
			if (mukemmelsayi % bolen == 0) //eğer mükemmel sayıya kadar olan bölenler mükemmel sayıya tam bölünüyorsa;
			{
				tamboltoplam = tamboltoplam + bolen; //mükemmel sayıya kadar olan tam bölen sayıları kendi aralarında topladım.
			}
		}  
		if(tamboltoplam==mukemmelsayi) //ve bu toplanan sayılar eğer sayıya eşitse, bu sayıyı mükemmel sayı olarak tespit ettim.
		{	
			printf("%d mukemmel sayidir\n", mukemmelsayi); //belirlenen mükemmel sayıları da yazdırıyorum.
		}
	}
  system("pause"); // Derleyicilerde ayarlar farklı olduğundan, kapanabilme ihtimaline karşı ekledim.
}


4) İki basamaklı ikiz asal sayılardan (aralarındaki fark 2 olan asal sayılar) en büyük 
çiftini bulan C programını yazınız.

#include<stdio.h> //Temel giriş - çıkış elemanlarını kullanmamızı sağlayan kütüphane. 
#include<stdlib.h> //Bu kütüphaneyi system(“pause”); kodu için ekledim.

void main()
{
	int asal, bolenler, sonuc, ikiz; //değişkenleri tanımladım.

	for(asal=9; asal<100; asal++) //döngümü başlattım, iki basamaklı asal sayılar olduğu için asal değişkeninin başlangıç değerini 9 yaptım.
	{ sonuc = 1; //eğer asalsa
	for(bolenler=2; bolenler<asal; bolenler++) //asal sayıları bulmak için bölenleri döngü içine soktum.
	{
		if(asal % bolenler == 0) //eğer bir sayıya tam bölünüyorsa,
		{   sonuc = 0; //asal sayı değildir.
		break; //ve tekrar döngüye geri döner.
		}
	}
	if(sonuc == 1) //eğer asal sayıysa aşağıdaki işlemlere devam eder.
	{
		ikiz=asal-2; //ikiz asal sayı olma şartı olan aralarındaki fark 2dir diye işlem yaptım.
			{
				for(bolenler=2; bolenler<ikiz; bolenler++)
				{	
					if(ikiz % bolenler == 0)
					{
						sonuc = 0; //ikiz asal sayı değilse,
						break; //ikiz asal sayı değilse döngüye geri dönüyor.
					}
				}
				if(sonuc == 1 && ikiz>9) //eğer ikiz asal sayıysa ve iki basamaklı ikiz asal sayıları göstermesi için 10dan başlatma şartı ekledim.
				{
					printf("Iki basamakli ikiz asal sayilar = %d - %d\n", ikiz, asal); //ikiz asal sayıları ekrana yazdırıyorum.
				}
			}
	}
	
	}
	system("pause"); // Derleyicilerde ayarlar farklı olduğundan, kapanabilme ihtimaline karşı ekledim.
}




