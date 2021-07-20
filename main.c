#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

typedef struct dataBarang{
            int code;
            char kategori[20];
            char nama[20];
            int harga;
            };

struct dataBarang barang[100];
int a, loop, f, c, d, b;
char z[20];
void main()
{
   int pilih;
    printf("=========================================================\n");
    printf("                     TOKO SWALAYAN FTI\n");
    printf("=========================================================\n");
    printf("                         Pilih Menu :                   \n");
    printf("\t\t1. Input Data\t\t\t\t\n");
    printf("\t\t2. Daftar Barang\t\t\t\t\n");
    printf("\t\t3. Cari Barang\t\t\t\t\n");
    printf("\t\t4. Sorting\t\t\t\t\n");
    printf("\t\t5. Keluar\t\t\t\t\n");
    printf("=========================================================\n");
    printf("\t\tPilih Menu  : ");
    scanf("%i", &pilih);

    switch(pilih){
    	case 1:
    		system("cls");
    		input();
    		break;
    	case 2:
    		lihat();
    		break;
    	case 3:
    		system("cls");
    		cari();
    		break;
        case 4:
            sort();
            break;
        case 5:
            printf("Terima Kasih Sudah Berkunjung !!");
            exit(0);
    	default:
    	break;
	}
}

void input(){
printf("Masukan Jumlah data yang ingin Dimasukkan : ");
	scanf("%d", &loop);
	system("cls");
	printf("Jumlah Inputan Data - %d ", loop);
	printf("\n==============================================\n");
	for(a=0; a<loop+f; a++){
		printf("Kode        : ");
		scanf("%d", &barang[a].code);
		printf("Kategori    : ");
		scanf("%s", &barang[a].kategori);
		printf("Nama        : ");
		scanf("%s", &barang[a].nama);
		printf("Harga       : Rp ");
		scanf(" %d", &barang[a].harga);
		printf("==============================================\n");
	}

	f = a;
	system("cls");
	main();
}

void lihat(){
	char pilih;
	system("cls");
	for(a=0; a<f; a++){
		printf("Daftar Barang ke -%i\n", a+1);
		printf("==============================================\n");
		printf("Kode        : %i\n", barang[a].code);
		printf("Kategori    : %s\n", barang[a].kategori);
		printf("Nama        : %s\n", barang[a].nama);
		printf("Harga       : Rp. %d\n", barang[a].harga);
		printf("==============================================\n");

	}

	printf("\n");
	printf("Mau Input Barang lagi ? (y/n)");
	scanf("%s", &pilih);
		if(pilih == 'y'){
			system("cls");
			main();
		}else{
		    printf("GoodBye!");
		}
}

void cari()
{
    system("cls");
    printf("Pencarian Berdasarkan \n");
    printf("==============================================\n");
    printf("1. Code Barang \n");
    printf("2. Kategori Barang \n");
    printf("3. Nama Barang \n");
    printf("4. Harga Barang \n");
    printf("==============================================\n");
    printf("Pilihan :");
    scanf("%d", &b);
    switch(b)
    {
    case 1:
        codebarang();
        break;
    case 2:
        kategoribarang();
        break;
    case 3:
        namabarang();
        break;
    case 4:
        hargabarang();
        break;
    default:
        printf("Maaf, Inputan yang anda masukkan salah !");
        getch();
        system("cls");
        cari();
        break;
    }
    main();
}


void hargabarang()
{
    system("cls");
    printf("=========================================================\n");
    printf("Pencarian Barang \n");
    printf("=========================================================\n");
    printf("Harga Barang yang dicari : ");
    scanf("%d", &c);
    printf("\n");
    printf("Kode\tKategori\tNama\t\tHarga\n");
    printf("=========================================================\n");
    for(a = 0; a < loop+f ; a++)
    {
        if(c == barang[a].harga)
        {
            printf("%d\t%s\t\t%s\t\t%d\n", barang[a].code, barang[a].kategori, barang[a].nama, barang[a].harga);
        }
    }
    printf("\n\nTekan Enter untuk Kembali ke Menu");
    getch();
    system("cls");
    main();
}
void namabarang()
{
    {
    system("cls");
    printf("=========================================================\n");
    printf("Pencarian Barang \n");
    printf("=========================================================\n");
    printf("Nama Barang yang dicari :");
    scanf("%s", &z);
    printf("\n");
    printf("Kode\tKategori\tNama\t\tHarga\n");
    printf("=========================================================\n");
    for(a = 0; a < loop+f ; a++)
    {
        d = strcmp(z, barang[a].nama);
        if(d == 0 || d == 32)
        {
            printf("%d\t%s\t\t%s\t\t%d\n", barang[a].code, barang[a].kategori, barang[a].nama, barang[a].harga);
        }
    }
    printf("\n\nTekan Enter untuk Kembali ke Menu");
    getch();
    system("cls");
    main();
}
}
void kategoribarang()
{
   system("cls");
    printf("=========================================================\n");
    printf("Pencarian Barang \n");
    printf("=========================================================\n");
    printf("Kategori Barang yang dicari :");
    scanf("%s", &z);
    printf("\n");
    printf("Kode\tKategori\tNama\t\tHarga\n");
    printf("=========================================================\n");
    for(a = 0; a < loop+f ; a++)
    {
        d = strcmp(z, barang[a].kategori);
        if(d == 0 || d == 32)
        {
            printf("%d\t%s\t\t%s\t\t%d\n", barang[a].code, barang[a].kategori, barang[a].nama, barang[a].harga);
        }
    }
    printf("\n\nTekan Enter untuk Kembali ke Menu");
    getch();
    system("cls");
    main();
}

void codebarang()
{
    {
    system("cls");
    printf("=========================================================\n");
    printf("Pencarian Barang \n");
    printf("=========================================================\n");
    printf("Kode barang yang dicari :");
    scanf("%d", &c);
    printf("\n");
    printf("Kode\tKategori\tNama\t\tHarga\n");
    printf("=========================================================\n");
    for(a = 0; a <loop+f ; a++)
    {
        if(c == barang[a].code)
        {
            printf("%d\t%s\t\t%s\t\t%d\n", barang[a].code, barang[a].kategori, barang[a].nama, barang[a].harga);
        }
    }
    printf("\n\nTekan Enter untuk Kembali ke Menu");
    getch();
    system("cls");
    main();
}
}

void sort()
{
    int pilihansort;
    system("cls");
    printf("================================================\n");
    printf("Sorting Berdasarkan : \n");
    printf("================================================\n");
    printf("1. Ascending\n");
    printf("2. Descending\n");
    printf("================================================\n");
    printf("Pilih : ");scanf("%d",&pilihansort);
    switch(pilihansort)
    {
        case 1 :
            system("cls");
            asc();
            getch();
            break;
        case 2 :
            system("cls");
            desc();
            getch();
            break;
    }
    system("cls");
    main();
}

void desc()
{
int sortkode, sortharga;
char sortnama[50], sortkat[50];
int y;
for(a = 0;a < loop-1 ; a++){
    for(y = 0; y < loop-a-1; y++){
        if(barang[y+1].code > barang[y].code){
            sortkode = barang[y+1].code;
            barang[y+1].code = barang[y].code;
            barang[y].code = sortkode;

            sortharga = barang[y+1].harga;
            barang[y+1].harga = barang[y].harga;
            barang[y].harga = sortharga;

            strcpy(sortnama,barang[y+1].nama);
            strcpy(barang[y+1].nama,barang[y].nama);
            strcpy(barang[y].nama,sortnama);

            strcpy(sortkat,barang[y+1].kategori);
            strcpy(barang[y+1].kategori,barang[y].kategori);
            strcpy(barang[y].kategori,sortkat);
        }
    }
}
        printf("=========================================================\n");
        printf("Sorting Berdasarkan Desc\n");
        printf("=========================================================\n");
        printf("\n");
        printf("Kode\tKategori\tNama\t\tHarga\n");
        printf("=========================================================\n");
for(a=0;a<loop;a++)
   {
        printf("%d\t%s\t\t%s\t\t%d\n", barang[a].code, barang[a].kategori, barang[a].nama, barang[a].harga);
   }
   printf("\n\nTekan Enter untuk Kembali ke Menu");
    getch();
    system("cls");
    main();
}

void asc()
{
int sortcode, sortharga;
char sortnama[50], sortkat[50];
int y;
for(a = 0;a < loop-1 ; a++){
    for(y = 0; y < loop-a-1; y++){
        if(barang[y].code> barang[y+1].code){
            sortcode = barang[y].code;
            barang[y].code = barang[y+1].code;
            barang[y+1].code = sortcode;

            sortharga = barang[y].harga;
            barang[y].harga = barang[y+1].harga;
            barang[y+1].harga = sortharga;

            strcpy(sortnama,barang[y].nama);
            strcpy(barang[y].nama,barang[y+1].nama);
            strcpy(barang[y+1].nama,sortnama);

            strcpy(sortkat,barang[y].kategori);
            strcpy(barang[y].kategori,barang[y+1].kategori);
            strcpy(barang[y+1].kategori,sortkat);
        }
    }
}
        printf("=========================================================\n");
        printf("Sorting Berdasarkan Asc\n");
        printf("=========================================================\n");
        printf("Kode\tKategori\tNama\t\tHarga\n");
        printf("=========================================================\n");
for(a=0;a<loop;a++)
   {
        printf("%d\t%s\t\t%s\t\t%d\n", barang[a].code, barang[a].kategori, barang[a].nama, barang[a].harga);
   }
   printf("\n\nTekan Enter untuk Kembali ke Menu");
    getch();
    system("cls");
    main();
}

