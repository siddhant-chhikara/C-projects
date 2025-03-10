#include <stdio.h>
typedef struct 
{
     int no;
     int count;
} ar;

int main(void)
{
     printf("Enter an array :");
     int num[10];
     for (int i=0 ; i < 10 ; i++)
     {
          scanf("%d", &num[i]);
     }

     int posi;
     printf("How many positions ? ");
     scanf("%d",&posi);

     ar rep[10]={0};
     int flag =0,size=0;
     for (int a=0 ; a<10 ;a++)
     {
          flag = 0;
          int q=num[a];
          for (int b=0 ; b<size ; b++)
          {
               if (q == rep[b].no)
               {
                    rep[b].count++;
                    flag =1;
                    break;
               }
               
          }
          if (!flag)
          {
               rep[size].no=q;
               rep[size].count=1;
               size++;
          }
          
     }
     
     int max = 0,maxx ;
     for (int s=0 ; s<size ; s++)
     {
          if (rep[s].count > max)
          {
               max = rep[s].count;
               maxx = s;
          }
          
     }
     for (int i = 0; i < size-1; i++) {     
          for (int j = 0; j < size-i-1; j++) { 
               if (rep[j].count < rep[j+1].count) {
                    
                    ar temp = rep[j];
                    rep[j] = rep[j+1];
                    rep[j+1] = temp;
               }
          }
     }
     for (int x= 0 ; x < posi ;x++ )
     {
         printf("%d is repeated %d time(s)\n",rep[x].no,rep[x].count); 
     }
     
}    