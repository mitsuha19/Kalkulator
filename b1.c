#include<stdio.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>


//membuat tipe bentukan dengan nama kalkulator
typedef struct 
{
    double angka;
    double panjang, lebar;
    char operator[2];
    int detik;
}kalkulator;


//deklarasi fungsi yang akan digunakan
void pertama(kalkulator pertama);
void kedua(kalkulator kedua);
void ketiga(kalkulator ketiga);
void konversi(kalkulator konversi);    
void luas(kalkulator luas);
void volume(kalkulator volume);
void waktu(kalkulator waktu);
void game();


//fungsi main
int main(){
    kalkulator bilangan;
    int respond;
    char respond1;

    printf("\tKALKULATOR!\n");
    printf("***Rohit panjaitan<11S22036>***\n\n");
    printf("Terdapat 8 jenis operasi pada kalkulator ini!\n");

    //membuat looping dan pengondisian untuk memilih kalkulator dan membuat kalkulator itu dapat digunakan berulang ulang 
    do
    {  
        printf(" 1. Kalkulator dasar\n ");
        printf("2. Kalkulator Trigonometri\n ");
        printf("3. Kalkulator Logaritma, Eksponensial dan fungsi tambahan\n ");
        printf("4. Kalkulator Konversi Suhu\n ");
        printf("5. Kalkulator Luas\n ");
        printf("6. Kalkulator volume\n ");
        printf("7. Kalkulator waktu\n ");
        printf("8. Tebak Angka\n");

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
            }else if (respond == 5)
            {
                luas(bilangan);
            }else if (respond == 6)
            {
                volume(bilangan);
            }else if (respond == 7)
            {
                waktu(bilangan);
            }else if (respond == 8)
            {
                game();
            }
            printf("\nIngin mencoba Kalkulator yang lain? y/n: ");
            scanf(" %c", &respond1);
    } while (respond1 == 'y' || respond == 'Y');

    printf("Thank you! Have a nice Day \n" );
    printf("Semoga Daspro A :)");
    return 0;
}


//fungsi pertama
void pertama(kalkulator pertama){
    float hasil = 0;
    int angkapertamadimasukkan = 0;
    char respond;

    printf("\n---------------------------------------------------------------\n");
    printf(" Kalkulator ini hanya mampu mengerjakan operasi dasar penjumlahan,\n pengurangan, perkalian, pembagian, perpangkatan, dan modulu\n");
    printf(" ------------FOR REMINDER !------------\n ");
    printf("Kalkulator ini tidak dapat memprioritaskan perkalian dan pembagian.\n ");
    printf("Kalkulator ini mengerjakan perhitungan sesuai dengan operator yang lebih dahulu digunakan\n ");
    printf("Masukkan angka dan operator(+, -, *, /, ^, |)\n ");
    printf(" Masukkan karakter '=' untuk mengakhiri dan mendapatkan hasil.\n\n");
    
        //membuat do while loop agar dapat mengimput nilai dan operasi secara berulang ulang, dan akan berakhir bila menginput operasi '='
        do {
            //membuat pengondisian untuk inputan pertama agar nilai untuk hasil tidak lagi 0
            if (angkapertamadimasukkan == 0) {
                printf("Masukkan angka: ");
                scanf("%lf", &pertama.angka);
                hasil = pertama.angka;
                angkapertamadimasukkan = 1;
            } else {
                //else ini akan dijalankan ketika kita sudah mengimput bilangan pertama yang ingin dioperasikan
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
                        if (pertama.angka != 0) {
                            hasil /= pertama.angka;
                        } else {
                            printf("Error: Pembagian oleh nol tidak valid.\n");
                        }
                        break;

                    //fungsi fmod dan pow merupakan fungsi bawaan dari library math.h
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

//fungsi kedua
void kedua(kalkulator kedua){
    float hasil = 0 ;
    char respond;

        printf("\n---------------------------------------------------------------\n");
        printf(" Kalkulator ini hanya mampu mengerjakan operasi Trigonometri yaitu:\n ");
        printf("'s' untuk menghitung nilai sin() dari inputan dalam bentuk derajat\n ");
        printf("'c' untuk menghitung nilai cos() dari inputan dalam bentuk derajat\n ");
        printf("'t' untuk menghitung nilai tan() dari inputan dalam bentuk derajat\n ");
        printf("'q' untuk menghitung nilai csc() dari inputan dalam bentuk derajat\n ");
        printf("'w' untuk menghitung nilai sec() dari inputan dalam bentuk derajat\n ");
        printf("'e' untuk menghitung nilai cot() dari inputan dalam bentuk derajat\n ");
       
    /*menggunakan do while loop agar ketika kita selesai dengan mencoba 1 operasi 
     trigonometri, kita masih bisa mencoba menggunakan operasi trigonometri yang lain
     tanpa harus mengload ulang program*/
    do
    {
        printf("Masukkan angka: ");
        scanf("%lf", &kedua.angka);

        printf("Masukkan operator: ");
        scanf(" %s", &kedua.operator);

        //menggunakan switch case, agar lebih mudah dalam pengelompokan operasi
        //fungsi trigonometri berikut tersedia dalam library math.h
        switch (kedua.operator[0])
        {
            /* fungsi dari 3.14159265358979323846 / 180.0 adalah mengubah nilai inputan dari
            derajat menjadi radian, karna dalam fungsi trigonometri di math.h hanya bisa 
            mengerjakan nilai dalam radian*/
        case 'c':
            hasil = cos(kedua.angka * 3.14159265358979323846 / 180.0); 
            break;
        case 't':
            hasil = tan(kedua.angka * 3.14159265358979323846 / 180.0);
            break;
        case 's':
            hasil = sin(kedua.angka * 3.14159265358979323846 / 180.0) ;
            break;
        case 'q':
            hasil = 1/(sin(kedua.angka * 3.14159265358979323846 / 180.0) );
            break;
        case 'w':
            hasil = 1/(cos(kedua.angka * 3.14159265358979323846 / 180.0) );
            break;
        case 'e':
            hasil = 1/(tan(kedua.angka * 3.14159265358979323846 / 180.0) );
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


//fungsi ketiga
void ketiga(kalkulator ketiga){
    float hasil = 1;
    char respond ;

    printf("\n---------------------------------------------------------------\n");
    printf("Kalkulator ini hanya mampu mengerjakan operasi konversi bilangan logritma, natural menjadi bilangan Real dan beberapa fungsi lain\n");
    printf("ada beberapa operator yaitu :\n ");
    printf("'f' untuk menghitung nilai dari faktorial suatu inputan\n ");
    printf("'l' untuk menghitung nilai log() dari suatu bilangan\n ");
    printf("'n' untuk menghitung nilai dari ln() dari suatu bilangan\n ");
    printf("'e' untuk menghitung nilai dari exp() dari suatu bilangan\n ");
    printf("'a' untuk menghitung nilai akar dari inputan\n " );
    printf("'m' untuk menghitung nilai mutlak dari inputan\n\n ");

     /*menggunakan do while loop agar ketika kita selesai dengan mencoba 1 operasi , 
     kita masih bisa mencoba menggunakan operasi yang lain
     tanpa harus mengload ulang program*/
    do
    {
        printf("Masukkan angka: ");
        scanf("%lf", &ketiga.angka);

        printf("Masukkan operator: ");
        scanf(" %s", &ketiga.operator);

        //fungsi fungsi dalam case ini merupakan fungsi bawaan dari library math.h
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
        case 'a':
            hasil = sqrt(ketiga.angka);
            break;
        case 'm':
            hasil = fabs(ketiga.angka);
            break;
        case 'f':
            for (int i = 1; i <= ketiga.angka; i++)
            {
                hasil *= i;
            }
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


//fungsi keempat
void konversi(kalkulator konversi){
    char respond;
    float hasil = 0;
    int respond1;

     /*menggunakan do while loop agar ketika kita selesai dengan mencoba 1 konversi , 
     kita masih bisa mencoba menggunakan konversi yang lain tanpa harus mengload ulang program*/
    do
    { 
        //kita akan memilih konversi yang dilakukan dan akan dievaluasi satu per satu berdasarkan pilihan kita
        printf("\n---------------------------------------------------------------\n");
        printf("Kalkulator ini hanya mampu mengkonversi suhu celcius, faranheid, reaumur, dan kelvin\n");
        printf("Beberapa pembagian kelompok dalam kalkulator ini yaitu:\n ");
        printf("1.Konversi suhu Celcius\n ");
        printf("2.Konversi suhu Reaumur\n ");
        printf("3.Konversi suhu Faranheid\n ");
        printf("4.Konversi suhu kelvin\n ");
        printf("Pilih kelompok kalkulator yang ingin digunakan : ");
        scanf("%d", &respond1);
        
        //didalam setiap pengondisian akan terdapat pilihan untuk menggunakan operasi
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
            //didalam pengondisian ini terdapat juga swith case untuk mempermudah pemilihan operasi
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

//fungsi kelima
void luas(kalkulator luas){
    char respond;
    int respond1 ;
    double const phi = 3.14;
    //double a;

    /*menggunakan do while loop agar ketika kita selesai dengan mencoba 1 bangun datar , 
     kita masih bisa mencoba menghitung bangun datar yang lain tanpa harus mengload ulang program*/
    do
    {
        printf("\n---------------------------------------------------------------\n");
        printf("Kalkulator ini mampu menghitung nilai luas dari beberapa bangun datar\n ");
        printf("Berikut beberapa bangun datas yang mampu dihitung\n ");
        printf("1. Persegi\n 2. Persegi panjang\n 3. Segitiga\n 4. Lingkaran\n\n");
        printf("pilih Bangun datar yang ingin dihitung : ");
        scanf("%d", &respond1);

        //setiap respond meminta input dan mengeluarkan output yang berbeda sesuai dengan rumus yang dimiliki
        if (respond1 == 1)
        {
            printf("Masukkan panjang sisi : ");
            scanf("%lf", &luas.panjang);

            printf("Luas = %lf\n", luas.panjang * luas.panjang);
        }else if (respond1 == 2)
        {
            printf("Masukkan panjang  : ");
            scanf("%lf", &luas.panjang);

            printf("Masukkan lebar : ");
            scanf("%lf", &luas.lebar); 

            printf("Luas = %lf\n", luas.lebar * luas.panjang );  
        }else if (respond1 == 3)
        {
            printf("Masukkan alas  : ");
            scanf("%lf", &luas.panjang);

            printf("Masukkan tinggi : ");
            scanf("%lf", &luas.lebar); 

            printf("Luas = %lf\n", 0.5 * luas.lebar * luas.panjang ); 
        } else if (respond1 == 4)
        {
            printf("Masukkan jari jari : ");
            scanf("%lf", &luas.lebar); 

            printf("Luas = %lf\n", phi * luas.lebar * luas.lebar );   
        }else
        {
            printf("Operator tidak valid");
        }
        

        printf("\nIngin menghitung bangun yang lain? y/n: ");
        scanf(" %c", &respond);    
    } while (respond == 'y' || respond == 'Y');
}


//fungsi keenam
void volume(kalkulator volume){
    char respond;
    int respond1 ;
    double const phi = 3.14;
    //double a;

    /*menggunakan do while loop agar ketika kita selesai dengan mencoba 1 bangun ruang , 
     kita masih bisa mencoba menghitung bangun ruang yang lain tanpa harus mengload ulang program*/
    do
    {
        printf("\n---------------------------------------------------------------\n");
        printf("Kalkulator ini mampu menghitung nilai volume dari beberapa bangun ruang\n ");
        printf("Berikut beberapa bangun datas yang mampu dihitung\n ");
        printf("1. Kubus\n 2. Balok\n 3. Bola\n 4. Tabung \n 5. Kerucut\n\n");
        printf("pilih Bangun ruang yang ingin dihitung : ");
        scanf("%d", &respond1);

        //setiap respond meminta input dan mengeluarkan output yang berbeda sesuai dengan rumus yang dimiliki
        if (respond1 == 1)
        {
            printf("Masukkan panjang sisi : ");
            scanf("%lf", &volume.panjang);

            printf("volume = %lf\n", volume.panjang * volume.panjang * volume.panjang);
        }else if (respond1 == 2)
        {
            printf("Masukkan panjang  : ");
            scanf("%lf", &volume.panjang);

            printf("Masukkan lebar : ");
            scanf("%lf", &volume.lebar);

            printf("Masukkan tinggi : ");
            scanf("%lf", &volume.angka); 

            printf("Volume = %lf\n", volume.lebar * volume.panjang * volume.angka );  
        }else if (respond1 == 3)
        {
            printf("Masukkan jari jari : ");
            scanf("%lf", &volume.panjang);

            printf("volume = %lf\n", 4 * phi * volume.panjang * volume.panjang * volume.panjang / 3 ); 
        } else if (respond1 == 4)
        {
            printf("Masukkan tinggi : ");
            scanf("%lf", &volume.lebar); 

            printf("Masukkan jari jari : ");
            scanf("%lf", &volume.panjang); 

            printf("Luas = %lf\n", phi * volume.panjang * volume.panjang* volume.lebar );   
        }else if (respond1 == 5)
        {
             printf("Masukkan tinggi : ");
            scanf("%lf", &volume.lebar); 

            printf("Masukkan jari jari : ");
            scanf("%lf", &volume.panjang); 

            printf("Luas = %lf\n", phi * volume.panjang * volume.panjang* volume.lebar / 3);  
        }else
        {
            printf("Operator tidak valid");
        }
        
        printf("\nIngin menghitung bangun yang lain? y/n: ");
        scanf(" %c", &respond);    
    } while (respond == 'y' || respond == 'Y');

}


//fungsi ketujuh
void waktu(kalkulator waktu){
    int jam;
    int menit;
    int detik;
    char respond;

    printf("\n---------------------------------------------------------------\n");
    printf("Kalkulator ini mampu mengubah inputan berupa detik menjadi sebuah format jam\n");

    /*menggunakan do while loop agar ketika kita selesai mengonversi suatu waktu , 
     kita masih bisa mencoba mengonversi waktu yang lain tanpa harus mengload ulang program*/
    do
    {   
        printf("Masukkan waktu dalam satuan detik : ");
        scanf("%d", &waktu.detik);
        //fungsi ini membuat pengondisian berdasarkan detik yang diinput, dan mengeluarkan output dalam jam menit dan detik
        if (waktu.detik >= 3600)
        {
            jam = waktu.detik / 3600 ;
            menit = (waktu.detik % 3600) / 60 ;
            detik = (waktu.detik % 3600) % 60 ;
        }else if (waktu.detik < 3600 && waktu.detik >= 60)
        {
            jam = 0 ;
            menit = waktu.detik / 60 ;
            detik = waktu.detik % 60 ;
        }else
        {
            jam = 0;
            menit = 0;
            detik = waktu.detik;
        }
        //kita akan menggunakan format %02d untuk menghasilkan output yang selalu memiliki 2 digit
        printf("\t%02d:%02d:%02d\n" ,jam ,menit ,detik);
        printf("ingin mencoba detik yang lain?y/n : ");
        scanf(" %c", &respond);
    } while (respond == 'y' || respond == 'Y');
}


//fungsi kedelapan
//fungsi ini merupakan fungsi yang dapat membuat random number menggunakan library time.h dan stdblid.h
void game(){
    //pada fungsi ini tidak menggunakan parameter apapun, karna untuk setiap nilai di fungsi ini sudah dideklarsikan di dalam fungsi
    const int max = 100;
    const int min = 1;
    int guess;
    int guesses;
    int answer;
    char response;

    /*menggunakan do while loop agar dapat mengulang permainan lagi ketika sudah menyelesaikan permaianan*/
    do
    {
        printf("\n---------------------------------------------------------------\n");
        printf("Selamat datang dipermainan tebak angka!!\n");
        printf("Pilih angka dari 1-100 dan Lihat apakah tebakan benar\n");
        srand(time(0)); /* fungsi srand digunakan untuk mengatur 'seed' dari generator acak
                            dan fungsi time(0) digunakan untuk mendapatkan waktu sistem saat ini dalam detik
                            yang dimana akan menghasilkan nilai yang berubah setiap detik */
        answer = (rand() % max) + min ; /*fungsi rand() menghasilakn bilangan acak dari 0 hingga max (100)*/
        guesses = 0; //inisialisasi nilai awal tebakan = 0, agar setiap mengulang permainan nilai tebakan kembali menjadi 0

        //kita menggunakan do while loop agar selalu bisa menebak angka hingga nilai tebakan = answer 
        do
        {
            printf("\nMasukkan tebakan : ");
            scanf("\n%d", &guess);
            if (guess < answer)
            {
                printf("Tebakan terlalu rendah");
            }
            else if(guess > answer)
            {
                printf("Tebakan terlalu tinggi");
            }
            else
            {
                printf("Tebakan benar !");
            } 
            guesses++;
        } while (guess != answer);

        printf("\n***********************");
        printf("\nJawaban : %d", answer);   
        printf("\nJumlah tebakan : %d", guesses); 
        printf("\n***********************");  
        
        printf("\nIngin bermain lagi(Y/N): ");
        scanf(" %c", &response);

    } while (response == 'y' || response == 'Y' );
    
    printf("Thanks for playing!\n");
}