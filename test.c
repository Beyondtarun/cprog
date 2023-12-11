// #include<stdio.h>
// // int increment(int i){
// //     static int value = 0;
// //     value = value +i;
// //     return(value);
// // }

// void main(){
//     int i=5,j=NULL;
//     // for(i=0;i<=4;i++)
//     // j=increment(i);
//     // printf("%d",j);
//     // return 0;

//     // int a =5,b= -7,c=0, d;
//     //  d= ++a&& NULL || ++c;
//     //  printf("%d\t%d\t%d\t%d.",a,b,c,d);
//   if(3 & 4)
//   printf("1");
//   else
//   printf("2");

    
// }
#include<stdio.h>
void main(){
  int x=1;
  for(int i=0; i<100;i=x-i){
    printf("%3d",i);
    x=x+i;
  }
}