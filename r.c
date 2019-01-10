#include<stdio.h>

int main() {
int n;
printf("enter the word n");
scanf("%d",&n);

for(int i=0;i<n;i++) {
printf("\n");
if((i<n/2&&n%2==0)||(i<=n/2&&n%2!=0)) {
for(int j=0;j<n/2;j++){
if(n%2==0){
if(i==0||i==n/2-1)
printf("*\t");
else{
if(j==0||j==n/2-1)
printf("*\t");
else
printf("\t");
}
}
else{
if(i==0||i==n/2-1)
printf("*\t");
else{
if(j==0||j==n/2-1)
printf("*\t");
else
printf("*\t");
}
}
}
}
else{
if(n%2==0){
for(int k=n/2;k<n;k++){
if(k==n/2||k==i)
printf("*\t");
else
printf("\t");
}
}
else{
for(int k=n/2+1;k<n;k++){
if(k==n/2+1||k==i)
printf("*\t");
else
printf("\t");
}
}
}
}
}
