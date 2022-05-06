#include <stdio.h>

int main()
{
    int i=1;
    
    do{
        if(i <=100){
            printf("%d - %d \n", i, i*2);
        }
        else{
            printf("%d - %d \n",i,i);
        }
        i++;
    }while(i <= 120);
        
}
