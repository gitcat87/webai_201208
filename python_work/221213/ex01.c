#include <stdio.h>

int main(){

    int cur=2;
    int is=0;
    

    while(cur<10)
    {
      
        while(is<10)
        {
            printf("%d X %d=%d\n",cur,is,cur*is);
            is++;
        }
        printf("\n");
        cur++;
        
    }
    return 0;
   
}