#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){

    printf("PROGRAM MENGHITUNG KODE RESISTOR DAN KAPASITOR\n\nPROJECT AKHIR DASKOM-02\nBy : Andri R.F. dan Iqbaal F.\n");   //Judul program

    for(;;){                                                                                                                //for(;;) sebagai Infinite loop
        char menu='\0',first='\0',second='\0',third='\0',fourth='\0',promptExit ='\0',unitPrefix='\0';                      //Variabel char untuk menyimpan input menu dan opsi lainnya. '\0' untuk menyatakan bahwa variabel tersebut bernilai kosong dan akan kosong setiap awal loop.
        int firstDigit,multiplier;                                                                                          //Sebagai variabel digit pertama dan faktor pengali, hanya dapat menyimpan bilangan bulat
        float secondDigit,ratedValue,minValue,maxValue;                                                                     //Sebagai variabel digit kedua, rating nilai, nilai minimuum dan maksimum. float untuk menyimpan bilangan desimal

        printf("\n[1] Resistor \n[2] Kapasitor \n[3] Panduan \n[4] Exit ");                                                 //Menu Utama
        do {                                                                                                                //Loop pada menu. Akan terus mengulang selama kondisi pada do-while tidak terpenuhi
            if (menu!='\0'){                                                                                                //Pesan error ketika dimasukaan input invalid
                printf("\nNilai Input salah, coba lagi");
            }
            printf("\n\nSilahkan pilih ospi : ");                                                                           //Input sesuai dengan opsi pada menu utama.
            scanf(" %c",&menu);
        }while(menu!='1' && menu!='2' && menu!='3' && menu!='4');                                                           //Loop akan mengulang selama input tidak bernilai 1, 2 ,3 atau 4. Operator != artinya tidak sama dan && berfungsi seperti operator AND
        switch (menu){                                                                                                      //Switch-Case menu, akan melaksanakan perintah sesuai dengan input yang dipilih.
            case '1':{
                printf("\n[0] Hitam [1] Coklat [2] Merah [3] Oranye [4] Kuning \n[5] Hijau [6] Biru [7] Ungu [8] Abu-abu [9] Putih");
                do{                                                                                                         // Merupakan input kode untuk gelang warna pertama resistor
                    if (first!='\0'){                                                                                       //Loop do-while sebagai penccegahan input invalid
                        printf("\nNilai Input salah, coba lagi");                                                           //Error Message hanya keluar ketika input pertama kali dimasukan dan nilainya invalid
                    }
                    printf("\n\nMasukan gelang pertama : ");                                                                //Input kode pertama
                    scanf(" %c",&first);
                }while(first!='0' && first!='1' && first!='2' && first!='3' && first!='4' && first!='5' && first!='6' && first!='7' && first!='8' && first!='9');   //Kondisi do-while
                switch (first){                                                                                             //Switch Case untuk input pertama, untuk menentukan nilai digit pertama resistor
                    case '0':{firstDigit=0;break;}                                                                          //Fungsi break adalah untuk mengakhiri loop dan membawanya ke perintah selanjutnya
                    case '1':{firstDigit=1;break;}
                    case '2':{firstDigit=2;break;}
                    case '3':{firstDigit=3;break;}
                    case '4':{firstDigit=4;break;}
                    case '5':{firstDigit=5;break;}
                    case '6':{firstDigit=6;break;}
                    case '7':{firstDigit=7;break;}
                    case '8':{firstDigit=8;break;}
                    case '9':{firstDigit=9;break;}
                }
                do{                                                                                                         //Loop do-while, akan mengulang selama input yang invalid
                    if (second!='\0'){
                        printf("\nNilai Input salah, coba lagi\n");                                                         //Error Message
                    }
                    printf("\nMasukan gelang kedua : ");                                                                    //Input gelang warna kedua resistor
                    scanf(" %c",&second);
                }while(second!='0' && second!='1' && second!='2' && second!='3' && second!='4' && second!='5' && second!='6' && second!='7' && second!='8' && second!='9');     //Kondisi do-while kedua
                switch (second){                                                                                            //Switch-case kode kedua, menentukan nilai digit kedua resistor
                    case '0':{secondDigit=0;break;}
                    case '1':{secondDigit=0.1;break;}
                    case '2':{secondDigit=0.2;break;}
                    case '3':{secondDigit=0.3;break;}
                    case '4':{secondDigit=0.4;break;}
                    case '5':{secondDigit=0.5;break;}
                    case '6':{secondDigit=0.6;break;}
                    case '7':{secondDigit=0.7;break;}
                    case '8':{secondDigit=0.8;break;}
                    case '9':{secondDigit=0.9;break;}
                }
                do{                                                                                                         //Loop ketiga resistor untuk mencari nilai pengali resistor
                    if (third!='\0'){
                        printf("\nNilai Input salah, coba lagi\n");                                                         //Error message
                    }
                    printf("\nMasukan gelang ketiga : ");
                    scanf(" %c",&third);
                }while(third!='0' && third!='1' && third!='2' && third!='3' && third!='4' && third!='5' && third!='6' && third!='7' && third!='8' && third!='9');   //Kondisi do-while ketiga
                switch (third){                                                                                             //Switch-case Ketiga, menentukan nilai faktor pengali resistor
                    case '0':{multiplier=10;unitPrefix='\0';break;}                                                         //Melihat bahwa faktor pengali bisa mencapai 10 milyar lebih, maka digunakan unit prefix seperti Kilo, Giga, Mega
                    case '1':{multiplier=100;;unitPrefix='\0';break;}
                    case '2':{multiplier=1;unitPrefix='K';break;}
                    case '3':{multiplier=10;unitPrefix='K';break;}
                    case '4':{multiplier=100;unitPrefix='K';break;}
                    case '5':{multiplier=1;unitPrefix='M';break;}
                    case '6':{multiplier=10;unitPrefix='M';break;}
                    case '7':{multiplier=100;unitPrefix='M';break;}
                    case '8':{multiplier=1;unitPrefix='G';break;}
                    case '9':{multiplier=10;unitPrefix='G';break;}
                }
                ratedValue= firstDigit*multiplier+secondDigit*multiplier;                                                   //Rumus nilai resistor
                printf("\n[1] Emas \n[2] Perak\n");                                                                         //Input gelang warna keempat resistor, merupakan nilai toleransi
                do{
                    if (fourth!='\0'){
                        printf("\nNilai Input salah, coba lagi\n");                                                         //Error message
                    }
                    printf("\nMasukan gelang keempat : ");
                    scanf(" %c",&fourth);
                }while(fourth!='1' && fourth!='2');                                                                         //Kondisi/syarat do-while
                switch (fourth){                                                                                            //Switch case untuk gelang warna keempat resistor
                    case '1':{                                                                                              //Apabila warna silver maka nilai toleransi = 5%
                        minValue=ratedValue*0.95;                                                                           //Rumus nilai toleransi nilai minimum resistor
                        maxValue=ratedValue*1.05;                                                                           //Rumus nilai toleransi nilai maximum resistor
                        printf("\nNilai resistor tersebut adalah %.1f%c ohm. \nDengan toleransi 5 persen berkisar antara %.2f%c ohm dan %.2f%c ohm.\n\nTekan tombol apapun untuk melanjutkan..",ratedValue,unitPrefix,minValue,unitPrefix,maxValue,unitPrefix);
                        getch();                                                                                            //Jeda sebelum melanjutkan ke pesan selanjutnya
                        printf("\n\nApa anda ingin mecoba lagi? \n\n[1] YA \n[2] TIDAK\n");                                 //Pesan menanyakan apakah masih ingin menggunakan program
                        do{
                            if (promptExit!='\0'){                                                                          //Error messsage
                                printf("\nNilai Input salah, coba lagi\n");
                            }
                            printf("\nSilahkan masukan input : ");
                            scanf(" %c",&promptExit);
                        }while(promptExit!='1' && promptExit!='2');                                                         //Kondisi do-while

                        switch (promptExit){                                                                                //Switch-case
                            case '1':{printf("\nLoading...\n");continue;}                                                   //Continue akan menskip perintah dibawahnya dan mengulang ke awal loop
                            case '2':{printf("\nExiting...");exit(0);}                                                      //exit(0) akan menghentikan programm
                        }
                    }
                    case '2':{
                        minValue=ratedValue*0.9;                                                                            //Rumus nilai toleransi minimum resistor untuk gelang emas -+10%
                        maxValue=ratedValue*1.1;                                                                            //Rumus nilai toleransi maximum resistor untuk gelang emas -+10%
                        printf("\nNilai rating resistor tersebut adalah %.1f%c ohm.\nDengan toleransi 10 persen berkisar antara %.1f%c ohm dan %.1f%c ohm.\n\nTekan tombol apapun untuk melanjutkan..",ratedValue,unitPrefix,minValue,unitPrefix,maxValue,unitPrefix);
                        getch();
                        printf("\n\nApa anda ingin mecoba lagi? \n\n[1] YA \n[2] TIDAK\n");
                        do{
                            if (promptExit!='\0'){
                                printf("\nNilai Input salah, coba lagi\n");                                                 //Error message
                            }
                            printf("\nSilahkan masukan input : ");
                            scanf(" %c",&promptExit);
                        }while(promptExit!='1' && promptExit!='2');

                        switch (promptExit){
                            case '1':{printf("\nLoading...\n");continue;}
                            case '2':{printf("\nExiting...");exit(0);}
                        }
                    }
                }
            }
            case '2':{                                                                                                      //Kondisi apabila input bernilai 2, merupakan rangkaian program untuk mencari nilai kapasitor
                do{                                                                                                         //loop do-while untuk kode pertama kapasitor
                    if (first!='\0'){
                        printf("\nNilai Input salah, coba lagi\n");                                                         //Error message ketika input invalid
                    }
                    printf("\nMasukan angka pertama (1 s/d 9) : ");
                    scanf(" %c",&first);
                }while(first!='1' && first!='2' && first!='3' && first!='4' && first!='5' && first!='6' && first!='7' && first!='8' && first!='9'); //Syarat loop do-while pertama
                switch (first){                                                                                             //Switch case kode pertama kapasitor, menentukan nilai digit pertama kapasitor
                    case '1':{firstDigit=1;break;}
                    case '2':{firstDigit=2;break;}
                    case '3':{firstDigit=3;break;}
                    case '4':{firstDigit=4;break;}
                    case '5':{firstDigit=5;break;}
                    case '6':{firstDigit=6;break;}
                    case '7':{firstDigit=7;break;}
                    case '8':{firstDigit=8;break;}
                    case '9':{firstDigit=9;break;}
                }
                do{                                                                                                         //Loop do-while untuk kode kedua kapasitor
                    if (second!='\0'){
                        printf("\nNilai Input salah, coba lagi\n");                                                         //Pesan error, hanya keluar ketika input dimasukan tetapi nilainya invalid
                    }
                    printf("\nMasukan angka kedua (0 s/d 9) : ");                                                           //input kedua kapasitor
                    scanf(" %c",&second);
                }while(second!='0' && second!='1' && second!='2' && second!='3' && second!='4' && second!='5' && second!='6' && second!='7' && second!='8' && second!='9'); //Syarat kondisi do-while kedua
                switch (second){                                                                                            //Switch-case kedua, menentukan nilai digit kedua dari kappasitor
                    case '0':{secondDigit=0;break;}
                    case '1':{secondDigit=0.1;break;}
                    case '2':{secondDigit=0.2;break;}
                    case '3':{secondDigit=0.3;break;}
                    case '4':{secondDigit=0.4;break;}
                    case '5':{secondDigit=0.5;break;}
                    case '6':{secondDigit=0.6;break;}
                    case '7':{secondDigit=0.7;break;}
                    case '8':{secondDigit=0.8;break;}
                    case '9':{secondDigit=0.9;break;}
                }
                do{                                                                                                         //Loop do-while ketiga untuk kode ketiga kapasitor
                    if (third!='\0'){
                        printf("\nNilai Input salah, coba lagi\n");                                                         //Pesan error
                    }
                    printf("\nMasukan angka ketiga (0 s/d 9) : ");                                                          //Input kode ketiga kapasitor
                    scanf(" %c",&third);
                }while(third!='0' && third!='1' && third!='2' && third!='3' && third!='4' && third!='5' && third!='6' && third!='7' && third!='8' && third!='9');   //Syarat kondisi do-while
                switch (third){                                                                                             //Switch-case kode ketiga kapasitor, menentukan nilai faktor pengali dari nilai kapasitor
                    case '0':{multiplier=10;unitPrefix='p';break;}                                                          //Unit terkecil kapasitor adalah pico (p) (10^-12)
                    case '1':{multiplier=100;unitPrefix='p';break;}
                    case '2':{multiplier=1;unitPrefix='n';break;}                                                           //Unit (n) = nano (10^-9)
                    case '3':{multiplier=10;unitPrefix='n';break;}
                    case '4':{multiplier=100;unitPrefix='n';break;}
                    case '5':{multiplier=1;unitPrefix='u';break;}                                                           //Unit (u) = micro (10^-6)
                    case '6':{multiplier=10;unitPrefix='u';break;}
                    case '7':{multiplier=100;unitPrefix='u';break;}
                    case '8':{multiplier=1;unitPrefix='m';break;}                                                           //Unit (m) = mili (10^-3)
                    case '9':{multiplier=10;unitPrefix='m';break;}
                }
                ratedValue=firstDigit*multiplier+secondDigit*multiplier;                                                    //Rumus untuk mecari nilai rating kapasitor
                do{                                                                                                         //Loop do-while keempat, untuk mencari nilai toleransi Kapasitor
                    if (fourth!='\0'){
                        printf("\nNilai Input salah, coba lagi\n");                                                         //Pesan error
                    }
                    printf("\nMasukan kode toleransi (E,F,G,H,I,J,K,M): ");                                                 //Input nilai toleransi kapasitor, berupa abjad
                    scanf(" %c",&fourth);
                }while(fourth!='E' && fourth!='F' && fourth!='G' && fourth!='H' && fourth!='I' && fourth!='J' && fourth!='K' && fourth!='M');   //Kondisi loop do-while keempat
                switch (fourth){                                                                                            //Switch case dari nilai toleransi kapasitor, menentukan nilai minimal dan maksimal kapasitor berdasarkan nilai toleransi
                    case 'E':{minValue=ratedValue*0.995;maxValue=ratedValue*1.005;break;}
                    case 'F':{minValue=ratedValue*0.99;maxValue=ratedValue*1.01;break;}
                    case 'G':{minValue=ratedValue*0.98;maxValue=ratedValue*1.02;break;}
                    case 'H':{minValue=ratedValue*0.97;maxValue=ratedValue*1.03;break;}
                    case 'I':{minValue=ratedValue*0.96;maxValue=ratedValue*1.04;break;}
                    case 'J':{minValue=ratedValue*0.95;maxValue=ratedValue*1.05;break;}
                    case 'K':{minValue=ratedValue*0.94;maxValue=ratedValue*1.06;break;}
                    case 'M':{minValue=ratedValue*0.93;maxValue=ratedValue*1.07;break;}
                }
                printf("\n\nNilai rating kapasitor tersebut adalah %.2f %cF \ndengan nilai minimum %.2f %cF dan nilai maksimum %.2f %cF \n\nTekan tombol apapun untuk melanjutkan..",ratedValue,unitPrefix,minValue,unitPrefix,maxValue,unitPrefix); //Hasil output dari kode kapasitor
                getch();                                                                                                    //Jeda sebelum melanjutkan ke perintah selanjutnya
                printf("\n\nApa anda ingin mecoba lagi? \n\n[1]YA \n[2]TIDAK\n");                                           //Pesan untuk mengetahui apakah masih ingin melanjutkan menggunakan program
                do{
                    if (promptExit!='\0'){                                                                                  //Pesan error hanya keluar jika nilai promptExit tidak bernilai NULL atau kosong
                        printf("\nNilai Input salah, coba lagi\n");                                                         //Pesan error untuk memasukan input lagi
                    }
                    printf("\nSilahkan masukan input : ");
                    scanf(" %c",&promptExit);                                                                               //Input untuk melanjutkan program atau keluar dari program
                }while(promptExit!='1' && promptExit!='2');                                                                 //Syarat kondisi dari do-while

                switch (promptExit){                                                                                        //Switch-case dari promptExit
                    case '1':{printf("\nLoading...\n");continue;}                                                           //continue menskip perintah selanjutnya dan mengulang ke loop awal (for(;;))
                    case '2':{printf("\nExiting...");exit(0);}                                                              //exit(0) menghentikan program
                }
            }
            case '3':{                                                                                                      //Case apabila user memilih 3, akan menamplikan panduan tentang penggunaan program
                printf("\nPANDUAN\n\nInput 1 \nUntuk menghitung kode warna pada komponen resistor 4 gelang warna, \nprogram ini digunakan dengan memasukan 4 input kode warna pada resistor,\n2 warna gelang pertama sebagai nilai resistor dan warna ketiga sebagai faktor \npengali, warna keempat sebagai nilai toleransi resistor.");
                printf("\n\nInput 2 \nUntuk menghitung nilai kapasitor berdasarkan kode pada kapasitor. \nProgram akan meminta 4 kode dari kapasitor, 2 kode pertama sebagai nilai awal \nkapasitor, kode ketiga sebagai faktor pengali, dan kode keempat sebagai nilai \ntoleransi.");
                printf("\n\nInput 3 \nUntuk melihat panduan. \n\nInput 4 \nuntuk keluar dari program.\n\nTekan tombol apapun untuk melanjutkan.");
                getch();                                                                                                    //Jeda sebelum melanjutkan ke menu awal
                continue;
            }
            case '4':{                                                                                                      //Case apabila user memilih 4, keluar dari program
                printf("\nApa anda yakin?\n[1] Ya \n[2] Tidak");                                                            //Pesan menanyakan apakah user yakin ingin keluar dari program
                do{
                    if (promptExit!='\0'){                                                                                  //Pesan error keluar ketika user salah memasukan input
                        printf("\nNilai Input salah, coba lagi\n");                                                         //Pesan Error
                    }
                    printf("\nSilahkan masukan input : ");
                    scanf(" %c",&promptExit);
                }while(promptExit!='1' && promptExit!='2');                                                                 //Syarat kondisi do-while untuk exit
                switch (promptExit){                                                                                        //Switch case untuk exit program
                    case '1':{printf("\nExiting...");exit(0);}                                                              //Program akan berhenti
                    case '2':{printf("\nLoading...\n");continue;}                                                           //Program akan mengulang ke menu awal
                }
            }
        }
    }
}

