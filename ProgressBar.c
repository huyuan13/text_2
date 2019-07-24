#include<stdio.h>
#include<unistd.h>

int main()
{
   char arr[102];
   const char stat[4]={'|','/','-','\\'};
   int i = 0;
   while(i <= 100)
   {
    arr[i] = '#';
    arr[i+1] = '\0';

    printf("[%s[%d%%%c]]\r",arr,i,stat[i%6]);
    i++;
    usleep(100000);

   
   }
   return 0;


}
