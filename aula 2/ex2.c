#include<stdio.h>

typedef struct
{
    int horas, minutos, segundos;
} Time;

void SecondToTime(int total_segundos, int *horas, int *min, int *seg);
void PrintTime(Time time);

int main()
{
    int segundos;
    Time time;
    int *phoras = &time.horas, *pminutos = &time.minutos, *psegundos = &time.segundos;
    printf("Informa a quantidade de horas");
    scanf("%d", &segundos);

    SecondToTime(segundos, phoras,pminutos,psegundos);
    printf("%d: %d :%d", time.horas, time.minutos, time.segundos);
    PrintTime(time);

}

void SecondToTime(int total_segundos, int *horas, int *min, int *seg)
{
    *horas = (int)(total_segundos / 3600);
    total_segundos = total_segundos - ((*(horas)) * 3600);
    *min =  (int)(total_segundos / 60);
    total_segundos = total_segundos - ((*(min)) * 60);
    *seg = total_segundos;
}

void PrintTime(Time time)
{
    printf("\n%d:%d:%d\n", time.horas, time.minutos, time.segundos);
}