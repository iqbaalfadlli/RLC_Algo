#include <stdio.h>											//Standard library
#include <conio.h>
#include <stdlib.h>
#include "rlc.h"											//Custom Library

void resistor(float a[]);									//function prototipe
void kapasitor(float a[]);
void induktor(float a[]);

int main(){
	
    for(;;){                                                                                                                //for(;;) sebagai Infinite loop
        char menuUtama='\0',keluar='\0';         //Variabel char untuk menyimpan input menu dan opsi lainnya. '\0' untuk menyatakan bahwa variabel tersebut bernilai kosong dan akan kosong setiap awal loop.                                                                                 						//Sebagai variabel untuk pemilihan unitPrefix
        float value[2];                                                                    									//Sebagai variabel digit kedua, rating nilai, nilai minimuum dan maksimum. float untuk menyimpan bilangan desimal
                                                         																	//Menu Utama
        do {                                                                            							        //Loop pada menu. Akan terus mengulang selama kondisi pada do-while tidak terpenuhi
            if (menuUtama!='\0'){                                                              		 						//Pesan error ketika dimasukaan input invalid
                printf("\nNilai Input salah, coba lagi");
                getch();
                system("cls");
            }
            printf("_______________________________________________________________");
    		printf("\nPROGRAM KONVERSI KODE WARNA RESISTOR, KAPASITOR, DAN INDUKTOR.\n");   										//Judul program
			printf("_______________________________________________________________");
            printf("\n\n[1] Konversi Kode Warna Resistor\n[2] Konversi Kode Kapasitor\n[3] Konversi Kode Warna Induktor\n[4] Panduan\n[5] About\n[6] Exit ");
            printf("\n\nSilahkan pilih opsi : ");                                                           				//Input menu utama.
            scanf(" %c",&menuUtama);
            system("cls");
        }while(menuUtama!='1' && menuUtama!='2' && menuUtama!='3' && menuUtama!='4' && menuUtama!='5'&& menuUtama!='6');    //Loop akan mengulang selama input tidak bernilai sama dengan while. Operator != artinya tidak sama dan && berfungsi seperti operator AND
        
		switch (menuUtama){                                                         					//Switch-Case menu, akan melaksanakan perintah sesuai dengan input yang dipilih.
            case '1':{
            	resistor(value);                                                       					//Memanggil Function resistor
				                       																	
  				do{
    				if (keluar!='\0'){                                                                  //Error messsage
    					printf("\nNilai Input salah, coba lagi\n");
    					getch();
						system("cls");
    				}
    				printf("\n\nApa anda ingin mecoba lagi? \n\n[1] YA \n[2] TIDAK\n");						//Pesan menanyakan apakah masih ingin menggunakan program
    				printf("\nSilahkan masukan input : ");
    				scanf(" %c",&keluar);
    				system("cls");
    			}while(keluar!='1' && keluar!='2'); 
				switch (keluar){                                                                            
            	    case '1':{printf("\nLoading...\n");system("cls");continue;}                             //Continue akan menskip perintah dibawahnya dan mengulang ke awal loop
            	    case '2':{printf("\nExiting...");exit(0);}                                              //exit(0) akan menghentikan programm
            	}
            }
            case '2':{                                                                                      //Kondisi apabila input bernilai 2, merupakan rangkaian program untuk mencari nilai kapasitor
                kapasitor (value);																			//memanggil function kapasitor
                	                        			 													
  				do{
    				if (keluar!='\0'){                                                                      //Error messsage
    					printf("\nNilai Input salah, coba lagi\n");
    					getch();
						system("cls");
    				}
    				printf("\n\nApa anda ingin mecoba lagi? \n\n[1] YA \n[2] TIDAK\n");						//Pesan menanyakan apakah masih ingin menggunakan program
    				printf("\nSilahkan masukan input : ");
    				scanf(" %c",&keluar);
    				system("cls");
    			}while(keluar!='1' && keluar!='2'); 
				switch (keluar){                                                                            //Switch-case
            	    case '1':{printf("\nLoading...\n");system("cls");continue;}                             //Continue akan menskip perintah dibawahnya dan mengulang ke awal loop
            	    case '2':{printf("\nExiting...");exit(0);}                                              //exit(0) akan menghentikan programm
            	}
            }
            case '3':{																						//Kondisi apabila input bernilai 3, merupakan rangkaian program untuk mencari nilai Induktor
            	induktor(value);																			//Memanggil function induktor
				                         
  				do{
    				if (keluar!='\0'){                                                                      //Error messsage
    					printf("\nNilai Input salah, coba lagi\n");
    					getch();
						system("cls");
    				}
    				printf("\n\nApa anda ingin mecoba lagi? \n\n[1] YA \n[2] TIDAK\n");						//Pesan menanyakan apakah masih ingin menggunakan program
    				printf("\nSilahkan masukan input : ");
    				scanf(" %c",&keluar);
    				system("cls");
    			}while(keluar!='1' && keluar!='2'); 
				switch (keluar){                                                                            //Switch-case
            	    case '1':{printf("\nLoading...\n");system("cls");continue;}                             //Continue akan menskip perintah dibawahnya dan mengulang ke awal loop
            	    case '2':{printf("\nExiting...");exit(0);}                                              //exit(0) akan menghentikan programm
            	}
			}
            case '4':{                                                                                      //Case apabila user memilih 4, akan menamplikan panduan tentang penggunaan program
                printf("\nPANDUAN\n\nInput 1\nUntuk menghitung kode warna pada komponen resistor 4 gelang warna,\nprogram ini digunakan dengan memasukan 4 input kode warna pada resistor,\n2 warna gelang pertama sebagai nilai resistor dan warna ketiga sebagai faktor \npengali, warna keempat sebagai nilai toleransi resistor.");
                printf("\n\nInput 2 \nUntuk menghitung nilai kapasitor berdasarkan kode pada kapasitor.\nProgram akan meminta 4 kode dari kapasitor, 2 kode pertama sebagai nilai awal \nkapasitor, kode ketiga sebagai faktor pengali, dan kode keempat sebagai nilai \ntoleransi.");
                printf("\n\nInput 3 \nUntuk menghitung nilai induktor berdasarkan kode warna induktor.\n\nInput 4\nUntuk melihat panduan.");
				printf("\n\nInput 5 \nUntuk info lebih tentang program .\n\nInput 6\nUntuk keluar program.\n\nTekan tombol apapun untuk melanjutkan.");
                getch();
				system("cls");                                                                              			//Jeda sebelum melanjutkan ke menu awal
                continue;
            }
            case '5':{																									//Case 5 Info mengenai pembuat program
            	printf("PROJECT ALPROG\n\nPROGRAM KONVERSI KODE RESISTOR, KAPASITOR, DAN INDUKTOR\n\nKelompok:2\nBy : Andri Rahadian (1706104501)\n     Iqbaal Fadlli  (1706104546).\n");
            	printf("\n\nTekan tombol apapun untuk melanjutkan..");
            	getch();
            	system("cls");
            	continue;
        	}
            case '6':{																									//Case 6 untuk keluar dari program
                do{
                    if (keluar!='\0'){                                                                                  //Pesan error keluar ketika user salah memasukan input
                        printf("\nNilai Input salah, coba lagi\n");                                                     //Pesan Error
                    	getch();
            			system("cls");
					}
					printf("\nAnda akan keluar dari program. Apa anda yakin?\n\n[1] Ya \n[2] Tidak");
                    printf("\n\nSilahkan masukan input : ");
                    scanf(" %c",&keluar);
                    system("cls");
                }while(keluar!='1' && keluar!='2');                                                                 	//Syarat kondisi do-while untuk exit
                switch (keluar){                                                                                        //Switch case untuk exit program
                    case '1':{printf("\nExiting...");exit(0);}                                                          //Program akan berhenti
                    case '2':{printf("\nLoading...\n");system("cls");continue;}                                         //Program akan mengulang ke menu awal
                }
            }
        }
    }
}
