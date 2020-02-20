/* berrasadıkoğlu
 * 19120205033
 * tarih:15.05.2020
 *Bu ödevde ekrana 3 farklı şekli çizebilen bir programdır. Ana program içinde
kullanıcıdan istediği şekli seçmesini isteyecek [1: Düz Üçgen, 2: Ters Üçgen, 3: Elmas, 0: Çıkış] ve sonrasında o
şeklin boyutunu kullanıcıdan bekler Sadece geçerli boyut verileri için çizim ypar
 */

 #include <iostream>
 using namespace std;

 
 
 void duzUcgen (int y){ //duzUcgen fonksiyonunu tanımladım y değişkeni boyut verisini temsil eder
       int b=0;   //b değişkeni hatalı girdiği sayıları tutar 
	   for(;;){ //sonsuz döngü koyarak hatalı girdiğinde 3 kere değer almasını sağladım
		  if(b>0){ // bi kere hatalı veri girdikten sonra ekrana bu yazıyı basar
		 cout<<"lutfen gecerli boyut bilgisini giriniz."<<endl; 

		 cout<<"Boyut:"; //boyut verisini istedim
		 cin>>y;
		 cout<<""<<endl; } //boyut verisini aldım
      if(y%2==1&&y>2&&y<16){ // if ile boyutun 3 ile 15 aralığında tek sayılar olması şartını kontrol ettim.
		
		  for(int j=1;j<=y;){ // burdaki for ile boyut verisini kadar şekli bastırması için koydum
			// j değişkeni satırlardaki sırası ile yıldız değerini tutar döngüde 2 şer arttırdım
			// böylece j boyut sayısı olan y ye eşit olunca döngüden çıkıyor
		for(int i=0;i<(y-j)/2;i++) //for döngüsü ile boşlukları bastırdım
		{ 
		 cout<<" "; //boşluk basar
	 }
		 for(int a=0;a<j;a++){ // for döngüsü ile yıldızları bastırdım
		 cout<<"*";}  //yıldız basar
		 cout<<""<<endl; //alt satıra geçer
	 j+=2;
	  } 
	  break;  // sonsuz döngüden çıksın diye break koydum
	  } 
	   else { // eğer boyut bilgisi uygun değerleri karşılamazsa program burdan ilerler
    cout<<"gecersiz boyut bilgisi. "<<endl; //ekrana uyarı verdim
      b++; // her hatalı  değerde b yi bir arttırarak hata sayısı tuttum
    if(b==3){ // 3 hatalı değerde programı sonlandırdım
		cout<<"3 gecersiz boyut bilgisi girdiniz program sonlandirildi.";
    break;
} } } }
	void tersUcgen (int y){//tersUcgen fonksiyonunu tanımladım y değişkeni boyut verisini temsil eder
         int b=0;   //b değişkeni hatalı girdiği sayıları tutar 
	    while(1){  //sonsuz döngü koyarak hatalı girdiğinde 3 kere değer almasını sağladım
		  if(b>0){ // bi kere hatalı veri girdikten sonra ekrana bu yazıyı basar
		 cout<<"lutfen gecerli boyut bilgisini giriniz."<<endl; 

		 cout<<"Boyut:"; //boyut verisini istedim
		 cin>>y;
		 cout<<""<<endl; } //boyut verisini aldım
      if(y%2==1&&y>2&&y<16){ // if ile boyutun 3 ile 15 aralığında tek sayılar olması şartını kontrol ettim.
		   int j=y;
		  while(j>=1){ // burdaki while ile boyut verisini kadar şekli bastırması için koydum
			// j değişkeni satırlardaki sırası ile yıldız değerini tutar döngüde 2 şer azalttım
			// böylece j 1 den küçük olunca döngüden çıkıyor
	    int i=0;
		while(i<(y-j)/2) //bu döngüde boşluk bastırdım
		{ 
		 cout<<" "; //boşluk basar 
		 i++; // değeri arttırarak  yeterli  boşluk sayıaı bastırdım
	 }
int a=0;
     while(a<j){ // uygun yıldız değerlerini bastırdım
		 cout<<"*"; // yıldız basar 
		 a++;}
	    cout<<""<<endl; //alt satıra geçer
		 j-=2;   
	  } 
	  break; // ekrana şekli bastırdıktan sonra baştaki sonsuz while döngüsünden çıkması için break ekledim
	  } 
  else { // eğer boyut bilgisi uygun değerleri karşılamazsa program burdan ilerler
    cout<<"gecersiz boyut bilgisi. "<<endl; //ekrana uyarı verdim
      b++; // her hatalı  değerde b yi bir arttırarak hata sayısı tuttum
    if(b==3){ // 3 hatalı değerde programı sonlandırdım
		cout<<"3 gecersiz boyut bilgisi girdiniz program sonlandirildi.";
    break;
} } } }

void tersveduzucgen(int y){ //tersveduzUcgen fonksiyonunu tanımladım  bu fonsiyon ekrana elmas basar
	// y değişkeni boyut verisini temsil eder
       int b=0;   //b değişkeni hatalı girdiği sayıları tutar 
	   for(;;){ //sonsuz döngü koyarak hatalı girdiğinde 3 kere değer almasını sağladım
		  if(b>0){ // bi kere hatalı veri girdikten sonra ekrana bu yazıyı basar
		 cout<<"lutfen gecerli boyut bilgisini giriniz."<<endl; 

		 cout<<"Boyut:"; //boyut verisini istedim
		 cin>>y;
		 cout<<""<<endl; } //boyut verisini aldım
      if(y%2==1&&y>4&&y<16){ // if ile boyutun 5 ile 15 aralığında tek sayılar olması şartını kontrol ettim.
		
		  for(int j=1;j<=y;){ // burdaki for ile boyut verisini kadar şekli bastırması için koydum
			// j değişkeni satırlardaki sırası ile yıldız değerini tutar döngüde 2 şer arttırdım
			// böylece j boyut sayısı olan y ye eşit olunca döngüden çıkıyor
		for(int i=0;i<(y-j)/2;i++) //for döngüsü ile boşlukları bastırdım
		{ 
		 cout<<" "; //boşluk basar
	 }
		 for(int a=0;a<j;a++){ // for döngüsü ile yıldızları bastırdım
		 cout<<"*";}  //yıldız basar
		 cout<<""<<endl; //alt satıra geçer
	 j+=2;
	  } 
	  		int j=y;
		  while(j>=1){ // burdaki while ile boyut verisini kadar şekli bastırması için koydum
			// j değişkeni satırlardaki sırası ile yıldız değerini tutar döngüde 2 şer azalttım
			// böylece j 1 den küçük olunca döngüden çıkıyor
	    int i=0;
		while(i<(y-j)/2) //bu döngüde boşluk bastırdım
		{ 
		 cout<<" "; //boşluk basar 
		 i++; // değeri arttırarak  yeterli  boşluk sayıaı bastırdım
	 }
int a=0;
     while(a<j){ // uygun yıldız değerlerini bastırdım
		 cout<<"*"; // yıldız basar 
		 a++;}
	    cout<<""<<endl; //alt satıra geçer
		 j-=2;   
	  } 
	  break; // ekrana şekli bastırdıktan sonra baştaki sonsuz while döngüsünden çıkması için break ekledim
	  } 
  else { // eğer boyut bilgisi uygun değerleri karşılamazsa program burdan ilerler
    cout<<"gecersiz boyut bilgisi. "<<endl; //ekrana uyarı verdim
      b++; // her hatalı  değerde b yi bir arttırarak hata sayısı tuttum
    if(b==3){ // 3 hatalı değerde programı sonlandırdım
		cout<<"3 gecersiz boyut bilgisi girdiniz program sonlandirildi.";
    break;
} } } }
void elmas(int y){ // elmas fonksiyonu tanımladım. bu fonksiyon ekrana elmas görseli basar
	// y değeri boyut verisini tutar . 

	tersveduzucgen(y); // bi önceki fonksiyonu çağırdım.
}

 int main(){
	
	int x; // menüdeki seçiceği değeri tutması için bir x değişkeni tanımladım
	 cout <<"MERHABA PROGRAMA HOSGELDINIZ."<< endl;
	 cout<<" MENU"<<endl;
	 cout<<"1:Duz Ucgen\n2:Ters ucgen\n3:Elmas\n0:cikis  "<<endl;
     cout<<"Cizimini istediginiz Seklin numarasini giriniz."<<endl; 
     
	 cin >>x; // x değerini aldım
// aşağıdaki ifler ile menüye uygun işlemler yapmasını sağladım
     if(x==1){  // bu if içeriği düz üçgen basar
		int y; // boyut verisini tutar
    // boyut verisini isteyip aşağıda aldım
		 cout<<"seklin boyut bilgisini giriniz."<<endl; 
         cout<<"Boyut:";
		 cin>>y;
		 cout<<""<<endl;
   duzUcgen(y); // fonksiyonu çağırarak ekrana bastırdım


	  
	   }
	  
	 else if(x==2){ // bu if içeriği ters üçgen basar
		   int y; // boyut verisini tutar
    // boyut verisini isteyip aşağıda aldım
    
		 cout<<"seklin boyut bilgisini giriniz."<<endl; 
         cout<<"Boyut:";
		 cin>>y;
		 cout<<""<<endl;
   tersUcgen(y); // fonksiyonu çağırarak ekrana bastırdım


	  
	 }
	 else if(x==3){// bu if içeriği elmas basar
		   int y; // boyut verisini tutar
    // boyut verisini isteyip aşağıda aldım
        cout<<"seklin boyut bilgisini giriniz."<<endl; 
         cout<<"Boyut:";
		 cin>>y;
		 cout<<""<<endl;
         elmas(y); // fonksiyonu çağırarak ekrana bastırdım
	}

  else if(x==0){ // bu if ile programdan çıkış yapmasını sağladım .
	  cout<<"program sonlandirildi";
	}  
		  
	 
	return 0;
}
