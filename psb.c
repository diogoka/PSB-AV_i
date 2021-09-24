#include <stdio.h>


#define NAME_LEN 50
#define NATIONALITY_LEN 50
#define LINKPHOTO_LEN 100


typedef struct{
    int day;
    int month;
    int year;
} Date;


struct persons
{
    char name [NAME_LEN + 1]; 
    char nationality[NATIONALITY_LEN + 1];
    Date birth;
    char linkPhoto[LINKPHOTO_LEN];
} personality[10];


struct persons personality[10] =
{
{"Alan Turing", "Britânico", {23,6,1920},"https://www.go2web.com.br/fotos/07072014_112554_Alan-Turing-1.jpg"},
{"Richard Stallman", "Americano", {16,3,1953},"https://www.go2web.com.br/fotos/07072014_112642_Richard-Stallman2.jpg"},
{"Edsger Dijkstra", "Holandês", {11,5,1930},"https://www.go2web.com.br/fotos/07072014_113006_Edsger-Dijkstra-3.jpg"},
{"Claude Elwood Shannon", "Americano", {30,4,1916},"https://www.go2web.com.br/fotos/07072014_113135_Claude-Elwood-Shannon-4.jpg"},
{"Donald Knuth", "Americano", {10,1,1938},"https://www.go2web.com.br/fotos/07072014_113338_Donald-Knuth-5.jpg"},
{"Andrew S. Tanenbaum", "Americano", {16,3,1944},"https://www.go2web.com.br/fotos/07072014_113457_Andrew-Tanenbaum-6.png"},
{"Niklaus Wirth", "Suiço", {15,2,1935},"https://www.go2web.com.br/fotos/07072014_113534_Niklaus-Wirth-7.jpg"},
{"Tim Berners-Lee", "Britânico", {8,6,1955},"hhttps://www.go2web.com.br/fotos/07072014_113606_Tim-Berners-Lee-8.jpg"},
{"Marvin Minsky", "Americano", {9,8,1927},"https://www.go2web.com.br/fotos/07072014_113636_Marvin-Minsky-9.jpg"},
{"John Backus", "Americano", {3,12,1924},"hhttps://www.go2web.com.br/fotos/07072014_175449_John-Backus-10.jpg"}
};


void calculation (void);
void order (void);
void print (void);


void print (void)
{
    int i;
    for(i=0; i<10; i++){
         printf("Personalidade %d %d\n", i, personality[i].birth.year);
    }
}



void order (void)
{
    int i, j;
    for(i=0; i<10;i++)
    {
        //printf("Personalidade %d %d\n", i, personality[i].birth.year);
        for(j=i; j<10;j++)
        {
            if(personality[i].birth.year>personality[j].birth.year){
                personality[10] = personality[i];
                personality[i] = personality[j];
                personality[j] = personality[10];
            }
        }
    }
}


void calculation (void)
{
    order();
    int avg, total, sum = 0;
    for(int i = 0; i<11;i++)
    {
        printf("Personalidade %d %d\n", i, personality[i].birth.year);
        sum += personality[i].birth.year - personality[i+1].birth.year;
    }
    avg = sum/10;
    total = personality[0].birth.year+avg;
    //printf("Personalidade zero %d\n", personality[0].birth.year);
    printf("A proxima personalidade vai nascer no ano de: %d\n", total);

}



int main ()
{

    calculation();
    //print();

    return 0;
    
}



