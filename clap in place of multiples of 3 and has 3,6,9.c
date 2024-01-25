#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
printf("[");
for(int i=1; i<=n;i++)
{
   if(i%3==0){
      printf("\"clap\"");}
   else if(i%10==3){
      printf("\"clap\"");}
   else if(i%10==6){
      printf("\"clap\"");}
   else if(i%10==9){
      printf("\"clap\"");}
   else if(i/10==3){
      printf("\"clap\"");}
   else if(i/10==6){
      printf("\"clap\"");}
   else if(i/10==9){
      printf("\"clap\"");}
   else{
      printf("\"%d\"",i);}
   if(i<n){
      printf(", ");}
}
printf("]");
return 0;
}
