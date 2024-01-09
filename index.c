#include <stdio.h>

int main(){
    // for(int i=0; i<=8; i++){
    //     for(int j=0; j<=8;j++){
    //         if(i==0||j==0||i==8||j==8){
    //             printf("* ");
    //         }
    //         else{
    //             printf("  ");
    //         }
    //     }
    //     printf("\n");
    // }

    int abc[3][3]={{8,20,30},
                    {13,35,9},
                    {2,7,6}};
    int sum1=0;
    int sum2=0;
    for(int i=0;i<=3;i++){
        for(int j=0;j<=3;j++){
            if(i=j){
                sum1=sum1+abc[i][j];
            }
        }
       
    }
     printf("%d",sum1);


    // qus 2
int abc[3][3]={{8,20,30},
                 {13,35,9},
                  {2,7,6}};
    int sum1=0;
    int av;
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
           sum1=sum1+abc[i][j];
        }
       
    }
    av=sum1/9;
    printf("%d",av);


    //  qus 3 
      int abc[3][3]={{8,20,30},
                 {13,35,9},
                  {2,7,6}};
    int sum1=0;
    int sum2=0;
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            if(i==j){
                sum1=sum1+abc[i][j];
            }else if(i==0 && j==2 || i==1 && j==1 || i==2 && j==0 ){
                sum2=sum2+abc[i][j];
            }
        }
       
    }
  
      printf("%d",sum2+sum1);
    return 0;
}