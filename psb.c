#include <stdio.h>
#include <string.h>
#include <stdbool.h>

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



void ascendingOrder (void);
void calculation (void);

void ascendingOrder(void)
{
    int i, j, aux;

    for(i=0; i<10;i++)
    {
        for(j=0; j<10;j++)
        {
            if(personality[i].birth.year>personality[j].birth.year)
            {
                personality[10] = personality[i];
                personality[i] = personality[j];
                personality[j] = personality[10];
            }
        }
    }
}

void calculation (void)
{
    ascendingOrder();
    int average, total, sum = 0;

    for(int i = 0; i<=9;i++)
    {
        sum = personality[i].birth.year + sum;
    }

    average = sum/10;
    total = average - personality[0].birth.year;
    printf("A proxima personalidade vai nascer no ano de: %d\n", personality[9].birth.year + total);
}



int main ()
{

    strcpy(personality[0].name, "Alan Turing");
    strcpy(personality[0].nationality, "Britânico");
    personality[0].birth.day = 23;
    personality[0].birth.month = 6;
    personality[0].birth.year = 1920;    
    strcpy(personality[0].linkPhoto, "https://www.go2web.com.br/fotos/07072014_112554_Alan-Turing-1.jpg");
   
    
    strcpy(personality[1].name, "Richard Stallman");
    strcpy(personality[1].nationality, "Americano");
    personality[1].birth.day = 16;
    personality[1].birth.month = 3;
    personality[1].birth.year = 1953;
    strcpy(personality[1].linkPhoto, "https://www.go2web.com.br/fotos/07072014_112642_Richard-Stallman2.jpg");

    strcpy(personality[2].name, "Edsger Dijkstra");
    strcpy(personality[2].nationality, "Holandês");
    personality[2].birth.day = 11;
    personality[2].birth.month = 5;
    personality[2].birth.year = 1930;
    strcpy(personality[2].linkPhoto, "https://www.go2web.com.br/fotos/07072014_113006_Edsger-Dijkstra-3.jpg");
      
    strcpy(personality[3].name, "Claude Elwood Shannon");
    strcpy(personality[3].nationality, "Americano");
    personality[3].birth.day = 30;
    personality[3].birth.month = 4;
    personality[3].birth.year = 1916;
    strcpy(personality[3].linkPhoto, "https://www.go2web.com.br/fotos/07072014_113135_Claude-Elwood-Shannon-4.jpg");
      
    strcpy(personality[4].name, "Donald Knuth");
    strcpy(personality[4].nationality, "Americano");
    personality[4].birth.day = 10;
    personality[4].birth.month = 1;
    personality[4].birth.year = 1938;
    strcpy(personality[4].linkPhoto, "https://www.go2web.com.br/fotos/07072014_113338_Donald-Knuth-5.jpg");

    strcpy(personality[5].name, "Andrew S. Tanenbaum");
    strcpy(personality[5].nationality, "Americano");
    personality[5].birth.day = 16;
    personality[5].birth.month = 3;
    personality[5].birth.year = 1944;
    strcpy(personality[5].linkPhoto, "https://www.go2web.com.br/fotos/07072014_113457_Andrew-Tanenbaum-6.png");

    strcpy(personality[6].name, "Niklaus Wirth");
    strcpy(personality[6].nationality, "Suiço");
    personality[6].birth.day = 15;
    personality[6].birth.month = 2;
    personality[6].birth.year = 1935;
    strcpy(personality[6].linkPhoto, "https://www.go2web.com.br/fotos/07072014_113534_Niklaus-Wirth-7.jpg");

    strcpy(personality[7].name, "Tim Berners-Lee");
    strcpy(personality[7].nationality, "Britânico");
    personality[7].birth.day = 8;
    personality[7].birth.month = 6;
    personality[7].birth.year = 1955;
    strcpy(personality[7].linkPhoto, "https://www.go2web.com.br/fotos/07072014_113606_Tim-Berners-Lee-8.jpg");

    strcpy(personality[8].name, "Tim Berners-Lee");
    strcpy(personality[8].nationality, "Britânico");
    personality[8].birth.day = 8;
    personality[8].birth.month = 6;
    personality[8].birth.year = 1955;
    strcpy(personality[8].linkPhoto, "https://www.go2web.com.br/fotos/07072014_113606_Tim-Berners-Lee-8.jpg");

    strcpy(personality[9].name, "Marvin Minsky");
    strcpy(personality[9].nationality, "Americano");
    personality[9].birth.day = 9;
    personality[9].birth.month = 8;
    personality[9].birth.year = 1927;
    strcpy(personality[9].linkPhoto, "https://www.go2web.com.br/fotos/07072014_113636_Marvin-Minsky-9.jpg");

    strcpy(personality[10].name, "John Backus");
    strcpy(personality[10].nationality, "Americano");
    personality[10].birth.day = 3;
    personality[10].birth.month = 12;
    personality[10].birth.year = 1924;
    strcpy(personality[10].linkPhoto, "https://www.go2web.com.br/fotos/07072014_175449_John-Backus-10.jpg");
  
   
    calculation();


    printf("Hello World");   
    return 0;
    
}



