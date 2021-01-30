#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

typedef struct name{
    char name[50];
} name;

int main(){

    FILE *fp = fopen("name.txt", "r");
    name names[100];
    int count = 0;
    
    while (!feof(fp))
    {
        char value[50];
        fscanf(fp, "%s", &names[count++].name[0]);
    }
    
    srand(time(NULL));
    
    int a[N];
    int i;
    printf("지원자:\n");
    for(i=0;i<count;i++){
        printf("%s\n", names[i].name);
    }
    
    for(i=0;i<N;i++)
    {
        a[i] = (rand() % count);
    }
    
    printf("당첨자:");
    for(i=0;i<N;i++){
        printf("%s ",names[a[i]].name);
    }

}
