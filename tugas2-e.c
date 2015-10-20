#include<stdio.h>
#include<math.h>
int main(){
printf("Tugas membuat program akar kuadrat\n");
printf("Nama :Rahmad Bahrudin A \n");
printf("Nim  :D400150156\n");
printf("Kelas:E\n");

    int a,b,c;
    float D;
    float x1,x2;
    a = 2;
    b = 10 ;
    c = 4;

if(a == 0) {
    printf( "nilai variabel tidak boleh nol...! \n");
    return 0;
} else {
    D =(b*b)-(4*a*c);
    D =pow(b,2)-(4*a*c);
if (D < 0){
    printf("Nilai determinan tidak boleh negatif \n");
return 0 ;
}else{
    x1 = (-b+sqrt(D))/ (2*a);
    x2 = (-b-sqrt(D))/ (2*a);
    printf("variabel input a=%d ,b=%d ,c=%d \n" ,a,b,c);
    printf("akar 1,x1=%.2f \n",x1);
    printf("akar 2,x1=%.2f \n",x2);
    return 0;
}}
return 0;
}


