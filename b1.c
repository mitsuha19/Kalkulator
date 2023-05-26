#include<stdio.h>
#include<string.h>
#include<math.h>

typedef struct 
{
    double angka;
    double panjang, lebar;
    char operator[2];
}kalkulator;

void pertama(kalkulator pertama){
    float hasil = 0;
    int angkapertamadimasukkan = 0;
    char respond;

    printf("\n---------------------------------------------------------------\n");
    printf(" Kalkulator ini hanya mampu mengerjakan operasi dasar penjumlahan,\n pengurangan, perkalian, pembagian, perpangkatan, dan modulu\n");
    printf(" ------------FOR REMINDER !------------\n Kalkulator ini tidak dapat memprioritaskan perkalian dan pembagian.\n Kalkulator ini mengerjakan perhitungan sesuai dengan operator yang lebih dahulu digunakan\n ");
    printf("Masukkan angka dan operator(+, -, *, /, ^, |)\n");
    printf(" Masukkan karakter '=' untuk mengakhiri dan mendapatkan hasil.\n\n");
    
        do {
            if (angkapertamadimasukkan == 0) {
                printf("Masukkan angka: ");
                scanf("%lf", &pertama.angka);
                hasil = pertama.angka;
                angkapertamadimasukkan = 1;
            } else {
                printf("Masukkan operator: ");
                scanf(" %s", &pertama.operator);

                if (strcmp(pertama.operator, "=") == 0) {
                    printf("Hasil: %.2lf\n", hasil);
                    break;
                }

                printf("Masukkan angka: ");
                scanf("%lf", &pertama.angka);

                switch (pertama.operator[0]) {
                    case '+':
                        hasil += pertama.angka;
                        break;
                    case '-':
                        hasil -= pertama.angka;
                        break;
                    case '*':
                        hasil *= pertama.angka;
                        break;
                    case '/':
                        if (pertama.angka != '0') {
                            hasil /= pertama.angka;
                        } else {
                            printf("Error: Pembagian oleh nol tidak valid.\n");
                        }
                        break;
                    case '|':
                        hasil = fmod(hasil, pertama.angka);
                        break;
                    case '^':
                        hasil = pow(hasil, pertama.angka);
                        break;
                    case '=':
                        printf("Hasil: %.2lf\n", hasil);
                        break;    
                    default:
                        printf("Error: Operator tidak valid.\n");
                        break;
                }

            }
        } while (strcmp(pertama.operator, "=") != 0);
}

void kedua(kalkulator kedua){
    float hasil = 0 ;
    char respond;
        printf("\n---------------------------------------------------------------\n");
        printf(" Kalkulator ini hanya mampu mengerjakan operasi Trigonometri dan beberapa fungsi lain yaitu:\n 's' untuk menghitung nilai sin() dari inputan dalam bentuk radian\n 'c' untuk menghitung nilai cos() dari inputan dalam bentuk radian\n 't' untuk menghitung nilai tan() dari inputan dalam bentuk radian\n 'a' untuk menghitung nilai akar dari inputan\n 'm' untuk menghitung nilai mutlak dari inputan\n\n");
    do
    {
        printf("Masukkan angka: ");
        scanf("%lf", &kedua.angka);

        printf("Masukkan operator: ");
        scanf(" %s", &kedua.operator);

        switch (kedua.operator[0])
        {
        case 'a':
            hasil = sqrt(kedua.angka); 
            break;
        case 'm':
            hasil = fabs(kedua.angka);
            break;
        case 's':
            hasil = sin(kedua.angka) ;
            break;
        case 'c':
            hasil = cos(kedua.angka);
            break;
        case 't':
            hasil = tan(kedua.angka);
            break;
        default:
            printf("Error: Operator tidak valid.\n");
            break;
        }
    printf("Hasil: %.2lf\n", hasil);
    printf("Ingin Mencoba operasi lain? y/n :");
    scanf(" %c", &respond);
    } while (respond == 'y' || respond == 'Y');    
}
    
void ketiga(kalkulator ketiga){
    float hasil = 0;
    char respond ;

    printf("\n---------------------------------------------------------------\n");
    printf("Kalkulator ini hanya mampu mengerjakan operasi konversi bilangan logritma dan natural menjadi bilangan Real\n");
    printf("ada beberapa operator yaitu :\n 'l' untuk menghitung nilai log() dari suatu bilangan\n 'n' untuk menghitung nilai dari ln() dari suatu bilangan\n 'e' untuk menghitung nilai dari exp() dari suatu bilangan\n");
    do
    {
        printf("Masukkan angka: ");
        scanf("%lf", &ketiga.angka);

        printf("Masukkan operator: ");
        scanf(" %s", &ketiga.operator);

        switch (ketiga.operator[0])
        {
        case 'l':
            hasil = log10(ketiga.angka);
            break;
        case 'n':
            hasil = log(ketiga.angka);
            break;
        case 'e':
            hasil = exp(ketiga.angka);
            break;
        default:
            printf("Error: Operator tidak valid.\n");
            break;
        }
        printf("Hasil: %.2lf\n", hasil);
        printf("Ingin Mencoba operasi lain? y/n :");
        scanf(" %c", &respond);
    } while (respond == 'y' || respond == 'Y');
    
    
}

void konversi(kalkulator konversi){
    char respond;
    float hasil = 0;
    int respond1;
    do
    {   printf("\n---------------------------------------------------------------\n");
        printf("Kalkulator ini hanya mampu mengkonversi suhu celcius, faranheid, reaumur, dan kelvin\n");
        printf("Beberapa pembagian kelompok dalam kalkulator ini yaitu:\n ");
        printf("1.Konversi suhu Celcius\n ");
        printf("2.Konversi suhu Reaumur\n ");
        printf("3.Konversi suhu Faranheid\n ");
        printf("4.Konversi suhu kelvin\n ");
        printf("Pilih kelompok kalkulator yang ingin digunakan : ");
        scanf("%d", &respond1);
        if (respond1 == 1)
        {
            printf("\nBerikut simbol operator yang digunakan :\n ");
            printf("'f' untuk mengubah celcius menjadi faranheid\n ");
            printf("'r' untuk mengubah celcius menjadi reaumur\n ");
            printf("'k' untuk mengubah celcius menjadi kelvin\n\n ");

            printf("masukkan suhu (dalam celcius): ");
            scanf("%lf", &konversi.angka);

            printf("Masukkan operator: ");
            scanf(" %c", &konversi.operator);

            switch (konversi.operator[0])
            {
            case 'f':
                hasil = (9 * konversi.angka / 5) + 32;
                break;
            case 'r':
                hasil = 4 * konversi.angka / 5;
                break;
            case 'k':
                hasil = konversi.angka + 273;
                break;
            default:
            printf("Error: Operator tidak valid.\n");
                break;
            }
            printf("Hasil: %.2lf\n", hasil);
        }else if (respond1 == 2)
        {
            printf("\nBerikut simbol operator yang digunakan :\n ");
            printf("'f' untuk mengubah reaumur menjadi faranheid\n ");
            printf("'c' untuk mengubah reaumur menjadi celcius\n ");
            printf("'k' untuk mengubah reaumur menjadi kelvin\n\n ");

            printf("masukkan suhu (dalam Reaumur): ");
            scanf("%lf", &konversi.angka);

            printf("Masukkan operator: ");
            scanf(" %c", &konversi.operator);

            switch (konversi.operator[0])
            {
            case 'f':
                hasil = (9 * konversi.angka / 4) + 32;
                break;
            case 'c':
                hasil = 5 * konversi.angka / 4;
                break;
            case 'k':
                hasil = (5 * konversi.angka / 4) + 273;
                break;
            default:
            printf("Error: Operator tidak valid.\n");
                break;
            }
            printf("Hasil: %.2lf\n", hasil);
        }else if (respond1 == 3)
        {
            printf("\nBerikut simbol operator yang digunakan :\n ");
            printf("'c' untuk mengubah faranheid menjadi celcius\n ");
            printf("'r' untuk mengubah faranheid menjadi reaumur\n ");
            printf("'k' untuk mengubah faranheid menjadi kelvin\n\n ");

            printf("masukkan suhu (dalam faranheid): ");
            scanf("%lf", &konversi.angka);

            printf("Masukkan operator: ");
            scanf(" %c", &konversi.operator);

            switch (konversi.operator[0])
            {
            case 'c':
                hasil = (konversi.angka - 32) * 5 / 9;
                break;
            case 'r':
                hasil = (konversi.angka - 32) * 4 / 9;
                break;
            case 'k':
                hasil = ((konversi.angka - 32) * 5 / 9) + 273;
                break;
            default:
            printf("Error: Operator tidak valid.\n");
                break;
            }
            printf("Hasil: %.2lf\n", hasil);
        }else if (respond1 == 4)
        {
            printf("\nBerikut simbol operator yang digunakan :\n ");
            printf("'f' untuk mengubah kelvin menjadi faranheid\n ");
            printf("'r' untuk mengubah kelvin menjadi reaumur\n ");
            printf("'c' untuk mengubah kelvin menjadi celcius\n\n ");
            printf("masukkan suhu (dalam kelvin): ");
            scanf("%lf", &konversi.angka);

            printf("Masukkan operator: ");
            scanf(" %c", &konversi.operator);

            switch (konversi.operator[0])
            {
            case 'c':
                hasil = konversi.angka - 273;
                break;
            case 'r':
                hasil = (konversi.angka - 273) * 4 / 5;
                break;
            case 'f':
                hasil = ((konversi.angka - 273) * 9 / 5) + 32;
                break;
            default:
            printf("Error: Operator tidak valid.\n");
                break;
            }
            printf("Hasil: %.2lf\n", hasil);
        }
        printf("\nIngin mencoba Operasi yang lain? y/n: ");
        scanf(" %c", &respond);
    } while (respond == 'y'  || respond == 'Y');

}

void luas(kalkulator luas){
    char respond;
    int respond1 ;
    const phi = 3.14;
    double a;

    printf("\n---------------------------------------------------------------\n");

    if (respond1 == 1)
    {
        printf("Masukkan panjang sisi : ");
        scanf("%d", luas.panjang);

        printf("Luas = %lf\n", luas.panjang * luas.panjang);
    }else if (respond1 == 2)
    {
        printf("Masukkan panjang  : ");
        scanf("%d", luas.panjang);

        printf("Masukkan lebar : ");
        scanf("%d", luas.lebar); 

        printf("Luas = %lf\n", luas.angka * luas.panjang );  
    }
    
    

}

int main(){
    kalkulator bilangan;
    int respond;
    char respond1;

    printf("KALKULATOR!\n");
    printf("Terdapat 3 jenis operasi pada kalkulator ini!\n");
    do
    {  
        printf(" 1. Kalkulator dasar\n ");
        printf("2. Kalkulator Trigonometri\n ");
        printf("3. Kalkulator Logaritma dan Eksponensial\n ");
        printf("4. Kalkulator Konversi Suhu\n");

        printf("Pilih Kalkulator :");
        scanf("%d", &respond);

            if (respond == 1 )
            {
                pertama(bilangan);
            }else if (respond == 2)
            {
                kedua(bilangan);
            }else if (respond == 3)
            {
                ketiga(bilangan);
            }else if (respond == 4)
            {
                konversi(bilangan);
            }
            printf("\nIngin mencoba Kalkulator yang lain? y/n: ");
            scanf(" %c", &respond1);
    } while (respond1 == 'y' || respond == 'Y');

    printf("Thank you! Have a nice Day :)");
    return 0;
}


