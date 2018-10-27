#include <stdio.h>
#include <conio.h>
#include <stdlib.h>



void resistor(float a[]){
	char menu[3]={'\0'};									//Variabel menu untuk menyimpan pilihan menu
	int pengali[3]={1,10,100};								//Variabel pengali untuk faktor pengali komponen
	char unitPrefix[4]={'K','M','G','\0'};					//Variabel unitPrefix menyimpan satuan Kilo, Mega, Giga
	int i,j,k,c;											
	float digit[1],toleransi[2]={0.05,0.1};
	FILE *fptr;
	
	do{                                                                                                         // Merupakan input kode untuk gelang warna pertama resistor
        if (menu[0]!='\0'){                                                                                       //Loop do-while sebagai penccegahan input invalid
            printf("\nNilai Input salah, coba lagi");															//Error Message hanya keluar ketika input pertama kali dimasukan dan nilainya invalid
			getch();
       		system("cls");                                                     		      
        }
        fptr=fopen("D:\\C\\ALPROproyek1\\resistor.txt","r");													//Membuka file txt
		if (fptr) {
 		while ((c = getc(fptr)) != EOF)																			//Menampilkan karakter pada file txt sampai End of File
        	putchar(c);
    		fclose(fptr);
		}
		printf("\n[0] Hitam  [1] Coklat  [2] Merah  [3] Oranye  [4] Kuning \n[5] Hijau  [6] Biru  [7] Ungu  [8] Abu-abu  [9] Putih\n");
        
        
        printf("\n\nMasukan gelang pertama : ");                                                                //Input kode pertama
        scanf(" %c",&menu[0]);
        
        system("cls");
    }while(menu[0]!='0' && menu[0]!='1' && menu[0]!='2' && menu[0]!='3' && menu[0]!='4' && menu[0]!='5' && menu[0]!='6' && menu[0]!='7' && menu[0]!='8' && menu[0]!='9');   //Kondisi do-while
                
	switch (menu[0]){                                                                                             //Switch Case untuk input pertama, untuk menentukan nilai digit pertama resistor
        case '0':{digit[0]=0;break;}                                                                          //Fungsi break adalah untuk mengakhiri loop dan membawanya ke perintah selanjutnya
        case '1':{digit[0]=1;break;}
        case '2':{digit[0]=2;break;}
        case '3':{digit[0]=3;break;}
        case '4':{digit[0]=4;break;}
        case '5':{digit[0]=5;break;}
        case '6':{digit[0]=6;break;}
        case '7':{digit[0]=7;break;}
        case '8':{digit[0]=8;break;}
        case '9':{digit[0]=9;break;}
    }
                
	do{                                                                                                         //Loop do-while, akan mengulang selama input yang invalid
        if (menu[1]!='\0'){
            printf("\nNilai Input salah, coba lagi\n");														 //Error Message
			getch();
       		system("cls");                                                         
        }
        fptr=fopen("D:\\C\\ALPROproyek1\\resistor2.txt","r");												//Membuka file txt
        if (fptr) {
 		while ((c = getc(fptr)) != EOF)																		//Menampilkan karakter pada file txt sampai End of File
        	putchar(c);
    		fclose(fptr);
		}
		printf("\n[0] Hitam  [1] Coklat  [2] Merah  [3] Oranye  [4] Kuning \n[5] Hijau  [6] Biru  [7] Ungu  [8] Abu-abu  [9] Putih");
        printf("\n\nMasukan gelang kedua : \n");                                                                    //Input gelang warna kedua resistor
        
		scanf(" %c",&menu[1]);
        system("cls");
    }while(menu[1]!='0' && menu[1]!='1' && menu[1]!='2' && menu[1]!='3' && menu[1]!='4' && menu[1]!='5' && menu[1]!='6' && menu[1]!='7' && menu[1]!='8' && menu[1]!='9');     //Kondisi do-while kedua
                
	switch (menu[1]){                                                                                            //Switch-case kode kedua, menentukan nilai digit kedua resistor
    	case '0':{digit[1]=0;break;}
        case '1':{digit[1]=0.1;break;}
        case '2':{digit[1]=0.2;break;}
        case '3':{digit[1]=0.3;break;}
        case '4':{digit[1]=0.4;break;}
        case '5':{digit[1]=0.5;break;}
        case '6':{digit[1]=0.6;break;}
        case '7':{digit[1]=0.7;break;}
        case '8':{digit[1]=0.8;break;}
        case '9':{digit[1]=0.9;break;}
	}
                
	do{                                                                                                         //Loop ketiga resistor untuk mencari nilai pengali resistor
        if (menu[2]!='\0'){
            printf("\nNilai Input salah, coba lagi\n");															//Error message
			getch();
       		system("cls");                                                         
        }
        fptr=fopen("D:\\C\\ALPROproyek1\\resistor3.txt","r");
    	if (fptr) {
 		while ((c = getc(fptr)) != EOF)
        	putchar(c);
    		fclose(fptr);
		}
		printf("\n[0] Hitam  [1] Coklat  [2] Merah  [3] Oranye  [4] Kuning \n[5] Hijau  [6] Biru  [7] Ungu  [8] Abu-abu  [9] Putih");
    	printf("\n\nMasukan gelang ketiga : \n");
        
		scanf(" %c",&menu[2]);
        system("cls");
    }while(menu[2]!='0' && menu[2]!='1' && menu[2]!='2' && menu[2]!='3' && menu[2]!='4' && menu[2]!='5' && menu[2]!='6' && menu[2]!='7' && menu[2]!='8' && menu[2]!='9');   //Kondisi do-while ketiga
                
	switch (menu[2]){                                                                                             //Switch-case Ketiga, menentukan nilai faktor pengali resistor
        case '0':{k=1;i=3;break;}                                                         						//Melihat bahwa faktor pengali bisa mencapai 10 milyar lebih, maka digunakan unit prefix seperti Kilo, Giga, Mega
        case '1':{k=2;i=3;break;}
        case '2':{k=0;i=0;break;}
        case '3':{k=1;i=0;break;}
        case '4':{k=2;i=0;break;}
        case '5':{k=0;i=1;break;}
        case '6':{k=1;i=1;break;}
        case '7':{k=2;i=1;break;}
        case '8':{k=0;i=2;break;}
        case '9':{k=1;i=2;break;}
    }
                                                                                                                                             
    do{
        if (menu[3]!='\0'){
            printf("\nNilai Input salah, coba lagi\n");						 //Error message
            getch();
			system("cls");                                                        
        }
        fptr=fopen("D:\\C\\ALPROproyek1\\resistor4.txt","r");
        if (fptr) {
 		while ((c = getc(fptr)) != EOF)
        	putchar(c);
    		fclose(fptr);
		}
		printf("\n[1] Emas \n[2] Perak\n");									//Input gelang warna keempat resistor, merupakan nilai toleransi
        printf("\nMasukan gelang keempat : \n");
        
		scanf(" %c",&menu[3]);
        system("cls");
    }while(menu[3]!='1' && menu[3]!='2');									//Kondisi/syarat do-while
				
	                                                                         
    switch(menu[3]){
	    case '1':{j=0;break;}
		case '2':{j=1;break;}                                                                           
	}
	a[0]=digit[0]*pengali[k]+digit[1]*pengali[k];							//Rumus nilai resistor
	a[1]=a[0]*(1-toleransi[j]);a[2]=a[0]*(1+toleransi[j]);
	printf("\nNilai resistor tersebut adalah %.1f %c ohm. \nDengan toleransi %.2f persen berkisar antara %.2f %c ohm dan %.2f %c ohm.\n\nTekan tombol apapun untuk melanjutkan..",a[0],unitPrefix[i],toleransi[j],a[1],unitPrefix[i],a[2],unitPrefix[i]);
    getch();
    system("cls");
}
void kapasitor(float a[]){
	char menu[3]={'\0'},unitPrefix[5]={'m','u','n','p','\0'};
	int i,j,k,c;
	float pengali[3]={1,10,100},digit[1],toleransi[8]={0.005,0.01,0.02,0.03,0.04,0.05,0.06,0.07};
	FILE *fptr;
	
	do{                                                                                                         //loop do-while untuk kode pertama kapasitor
        if (menu[0]!='\0'){                                                                                      //Sebagai pencegahan salah input
            printf("\nNilai Input salah, coba lagi");															//Error Message hanya keluar ketika input pertama kali dimasukan dan nilainya invalid
			getch();
       		system("cls");                                                     		      
        }
        fptr=fopen("D:\\C\\ALPROproyek1\\kapasitor.txt","r");
        if (fptr) {
 		while ((c = getc(fptr)) != EOF)
        	putchar(c);
    		fclose(fptr);
		}
        printf("\nMasukan angka pertama (1 s/d 9) : ");
        scanf(" %c",&menu[0]);
        system("cls");
    }while(menu[0]!='0' && menu[0]!='1' && menu[0]!='2' && menu[0]!='3' && menu[0]!='4' && menu[0]!='5' && menu[0]!='6' && menu[0]!='7' && menu[0]!='8' && menu[0]!='9'); //Syarat loop do-while pertama
   
    switch (menu[0]){                                                                                             //Switch case kode pertama kapasitor, menentukan nilai digit pertama kapasitor
        case '1':{digit[1]=1;break;}
        case '2':{digit[1]=2;break;}
        case '3':{digit[1]=3;break;}
        case '4':{digit[1]=4;break;}
        case '5':{digit[1]=5;break;}
        case '6':{digit[1]=6;break;}
        case '7':{digit[1]=7;break;}
        case '8':{digit[1]=8;break;}
        case '9':{digit[1]=9;break;}
    }
   
    do{                                                                                             //Loop do-while untuk kode kedua kapasitor
    	if (menu[1]!='\0'){
            printf("\nNilai Input salah, coba lagi\n");												//Pesan error, hanya keluar ketika input dimasukan tetapi nilainya invalid
			getch();
       		system("cls");                                             
        }
        fptr=fopen("D:\\C\\ALPROproyek1\\kapasitor2.txt","r");
        if (fptr) {
 		while ((c = getc(fptr)) != EOF)
        	putchar(c);
    		fclose(fptr);
		}
        printf("\nMasukan angka kedua (0 s/d 9) : ");                                               //input kedua kapasitor
        scanf(" %c",&menu[1]);
        system("cls");
    }while(menu[1]!='0' && menu[1]!='1' && menu[1]!='2' && menu[1]!='3' && menu[1]!='4' && menu[1]!='5' && menu[1]!='6' && menu[1]!='7' && menu[1]!='8' && menu[1]!='9'); //Syarat kondisi do-while kedua
    
	switch (menu[1]){                                                                               //Switch-case kedua, menentukan nilai digit kedua dari kappasitor
        case '0':{digit[2]=0;break;}
        case '1':{digit[2]=0.1;break;}
        case '2':{digit[2]=0.2;break;}
        case '3':{digit[2]=0.3;break;}
        case '4':{digit[2]=0.4;break;}
        case '5':{digit[2]=0.5;break;}
        case '6':{digit[2]=0.6;break;}
        case '7':{digit[2]=0.7;break;}
        case '8':{digit[2]=0.8;break;}
        case '9':{digit[2]=0.9;break;}
    }
    
	do{                                                                                             //Loop do-while ketiga untuk kode ketiga kapasitor
        if (menu[2]!='\0'){
            printf("\nNilai Input salah, coba lagi\n");                                             //Pesan error
        	getch();
       		system("cls");
		}
		fptr=fopen("D:\\C\\ALPROproyek1\\kapasitor3.txt","r");
        if (fptr) {
 		while ((c = getc(fptr)) != EOF)
        	putchar(c);
    		fclose(fptr);
		}
    	printf("\nMasukan angka ketiga (0 s/d 9) : ");                                              //Input kode ketiga kapasitor
    	scanf(" %c",&menu[2]);
    	system("cls");
    }while(menu[2]!='0' && menu[2]!='1' && menu[2]!='2' && menu[2]!='3' && menu[2]!='4' && menu[2]!='5' && menu[2]!='6' && menu[2]!='7' && menu[2]!='8' && menu[2]!='9');   //Syarat kondisi do-while
    
	switch (menu[2]){                                                                               //Switch-case kode ketiga kapasitor, menentukan nilai faktor pengali dari nilai kapasitor
        case '0':{k=1;i=3;break;}                                                          //Unit terkecil kapasitor adalah pico (p) (10^-12)
        case '1':{k=2;i=3;break;}
        case '2':{k=0;i=2;break;}                                                           //Unit (n) = nano (10^-9)
        case '3':{k=1;i=2;break;}
    	case '4':{k=2;i=2;break;}
        case '5':{k=0;i=1;break;}                                                           //Unit (u) = micro (10^-6)
        case '6':{k=1;i=1;break;}
        case '7':{k=2;i=0;break;}
        case '8':{k=0;i=0;break;}                                                           //Unit (m) = mili (10^-3)
        case '9':{k=1;i=0;break;}
    }
                                                        
    do{                                                                                                         //Loop do-while keempat, untuk mencari nilai toleransi Kapasitor
        if (menu[3]!='\0'){
            printf("\nNilai Input salah, coba lagi\n");                                                         //Pesan error
        	getch();
       		system("cls");
		}
		fptr=fopen("D:\\C\\ALPROproyek1\\kapasitor4.txt","r");
        if (fptr) {
 		while ((c = getc(fptr)) != EOF)
        	putchar(c);
    		fclose(fptr);
		}
        printf("\nMasukan kode toleransi (E,F,G,H,I,J,K,M): ");                                                 //Input nilai toleransi kapasitor, berupa abjad
        scanf(" %c",&menu[3]);
        system("cls");
    }while(menu[3]!='E' && menu[3]!='F' && menu[3]!='G' && menu[3]!='H' && menu[3]!='I' && menu[3]!='J' && menu[3]!='K' && menu[3]!='M');   //Kondisi loop do-while keempat
    
									
		
	switch (menu[3]){                                                   //Rumus untuk mecari nilai toleransi kapasitor                                         
        case 'E':{j=0;break;}
        case 'F':{j=1;break;}
        case 'G':{j=2;break;}
        case 'H':{j=3;break;}
        case 'I':{j=4;break;}
        case 'J':{j=5;break;}
        case 'K':{j=6;break;}
        case 'M':{j=7;break;}
    }
    a[0]=digit[0]*pengali[k]+digit[1]*pengali[k];						//Rumus untuk mecari nilai rating kapasitor
    a[1]=a[0]*(1-toleransi[j]);
	a[2]=a[0]*(1+toleransi[j]);
    
	printf("\n\nNilai rating kapasitor tersebut adalah %.2f %c F \ndengan nilai toleransi sebesar %.2f persen,\ndengan nilai minimum %.2f %c F dan nilai maksimum %.2f %c F \n\nTekan tombol apapun untuk melanjutkan..",a[0],unitPrefix[i],toleransi[j],a[1],unitPrefix[i],a[2],unitPrefix[i]); //Hasil output dari kode kapasitor
   	getch();
   	system("cls");            
}
void induktor(float a[]){
	char menu[3]={'\0'},unitPrefix[2]={'K','\0'};
	int i,j,k,c;
	float digit[1],pengali[4]={0.1,1,10,100},toleransi[6]={0.05,0.1,0.2,0.01,0.02,0.03};
	FILE *fptr;
	
	do{                                                              //Merupakan input kode untuk gelang warna pertama induktor
        if (menu[0]!='\0'){                                           //Loop do-while sebagai penccegahan input invalid
            printf("\nNilai Input salah, coba lagi");				 //Error Message hanya keluar ketika input pertama kali dimasukan dan nilainya invalid
			getch();
       		system("cls");                                                     		      						
        }
        fptr=fopen("D:\\C\\ALPROproyek1\\induktor.txt","r");
        if (fptr) {
 		while ((c = getc(fptr)) != EOF)
        	putchar(c);
    		fclose(fptr);
		}
		printf("\n[0] Hitam  [1] Coklat  [2] Merah  [3] Oranye  [4] Kuning \n[5] Hijau  [6] Biru  [7] Ungu  [8] Abu-abu  [9] Putih");
        printf("\n\nMasukan gelang pertama : ");                     //Input kode pertama
        scanf(" %c",&menu[0]);
        system("cls");
    }while(menu[0]!='0' && menu[0]!='1' && menu[0]!='2' && menu[0]!='3' && menu[0]!='4' && menu[0]!='5' && menu[0]!='6' && menu[0]!='7' && menu[0]!='8' && menu[0]!='9');   //Kondisi do-while
                
	switch (menu[0]){                                                //Switch Case untuk input pertama, untuk menentukan nilai digit pertama resistor
        case '0':{digit[0]=0;break;}                                 //Fungsi break adalah untuk mengakhiri loop dan membawanya ke perintah selanjutnya
        case '1':{digit[0]=1;break;}
        case '2':{digit[0]=2;break;}
        case '3':{digit[0]=3;break;}
        case '4':{digit[0]=4;break;}
        case '5':{digit[0]=5;break;}
        case '6':{digit[0]=6;break;}
        case '7':{digit[0]=7;break;}
        case '8':{digit[0]=8;break;}
        case '9':{digit[0]=9;break;}
    }
                
	do{                                                              //Loop do-while, akan mengulang selama input yang invalid
        if (menu[1]!='\0'){
            printf("\nNilai Input salah, coba lagi\n");
			getch();
       		system("cls");                                           //Error Message
        }
        fptr=fopen("D:\\C\\ALPROproyek1\\induktor2.txt","r");
        if (fptr) {
 		while ((c = getc(fptr)) != EOF)
        	putchar(c);
    		fclose(fptr);
		}
        printf("\n[0] Hitam  [1] Coklat  [2] Merah  [3] Oranye  [4] Kuning \n[5] Hijau  [6] Biru  [7] Ungu  [8] Abu-abu  [9] Putih");
        printf("\n\nMasukan gelang kedua : ");                       //Input gelang warna kedua resistor
        scanf(" %c",&menu[1]);
        system("cls");
    }while(menu[1]!='0' && menu[1]!='1' && menu[1]!='2' && menu[1]!='3' && menu[1]!='4' && menu[1]!='5' && menu[1]!='6' && menu[1]!='7' && menu[1]!='8' && menu[1]!='9');     //Kondisi do-while kedua
                
	switch (menu[1]){                                                //Switch-case kode kedua, menentukan nilai digit kedua resistor
    	case '0':{digit[1]=0;break;}
        case '1':{digit[1]=0.1;break;}
        case '2':{digit[1]=0.2;break;}
        case '3':{digit[1]=0.3;break;}
        case '4':{digit[1]=0.4;break;}
        case '5':{digit[1]=0.5;break;}
        case '6':{digit[1]=0.6;break;}
        case '7':{digit[1]=0.7;break;}
        case '8':{digit[1]=0.8;break;}
        case '9':{digit[1]=0.9;break;}
	}
                
	do{                                                            	//Loop ketiga induktor untuk mencari nilai pengali induktor
        if (menu[2]!='\0'){
            printf("\nNilai Input salah, coba lagi\n");			   	//Error message
			getch();
       		system("cls");                                         
        }
        fptr=fopen("D:\\C\\ALPROproyek1\\induktor3.txt","r");
        if (fptr) {
 		while ((c = getc(fptr)) != EOF)
        	putchar(c);
    		fclose(fptr);
		}
    	printf("\n[0] Hitam  [1] Coklat  [2] Merah  [3] Oranye  [4] Kuning\n[5] Emas [6] Perak");
    	printf("\n\nMasukan gelang ketiga : ");
        scanf(" %c",&menu[2]);
        system("cls");
    }while(menu[2]!='0' && menu[2]!='1' && menu[2]!='2' && menu[2]!='3' && menu[2]!='4'&& menu[2]!='5'&& menu[2]!='6');   //Kondisi do-while ketiga
                
	switch (menu[2]){                                               //Switch-case Ketiga, menentukan nilai faktor pengali induktor
        case '0':{k=2;i=0;break;}                         			//Untuk unitPrefix
        case '1':{k=3;i=0;break;}
        case '2':{k=1;i=1;break;}
        case '3':{k=2;i=1;break;}
        case '4':{k=3;i=1;break;}
        case '5':{k=1;i=0;break;}
        case '6':{k=0;i=0;break;}
    }
                                                                        
    do{																//Input gelang warna keempat induktor, merupakan nilai toleransi
        if (menu[3]!='\0'){
            printf("\nNilai Input salah, coba lagi\n");				//Error message
            getch();
			system("cls");                                          
        }
        fptr=fopen("D:\\C\\ALPROproyek1\\induktor4.txt","r");
        if (fptr) {
 		while ((c = getc(fptr)) != EOF)
        	putchar(c);
    		fclose(fptr);
		}
        printf("\n[1] Emas [2] Perak [3] Coklat \n[4] Merah [5] Oranye [6] Kuning\n");
        printf("\nMasukan gelang keempat : ");
        scanf(" %c",&menu[3]);
        system("cls");
    }while(menu[3]!='1' && menu[3]!='2'&&menu[3]!='3' && menu[3]!='4'&&menu[3]!='5' && menu[3]!='6');
				
	                                                                         //Kondisi/syarat do-while
    switch(menu[3]){
	    case '1':{j=0;break;}
		case '2':{j=1;break;}
		case '3':{j=2;break;}
		case '4':{j=3;break;}
		case '5':{j=4;break;}
		case '6':{j=5;break;}
		                                                                           
	}
	a[0]=digit[0]*pengali[k]+digit[1]*pengali[k];					//Rumus Induktor
	a[1]=a[0]*(1-toleransi[j]);
	a[2]=a[0]*(1+toleransi[j]);
	printf("\n\nNilai rating induktor tersebut adalah %.2f %c F \ndengan nilai toleransi sebesar %.2f persen,\ndengan nilai minimum %.2f %c H dan nilai maksimum %.2f %c H \n\nTekan tombol apapun untuk melanjutkan..",a[0],unitPrefix[i],toleransi[j],a[1],unitPrefix[i],a[2],unitPrefix[i]); //Hasil output dari kode kapasitor
   	getch();
   	system("cls");            
}
