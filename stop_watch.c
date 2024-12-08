#include<stdio.h>
#define CYCLE 5

#ifdef _WIN32                                 //same work// this code all system run for using this same work comment function.
#include<conio.h>                             //clear screen
#define sleep(x) Sleep(x * 1000);               //same work
#else                                         //same work
#define clrscn() clrscn()
#include<unistd.h>                           //use for sleep .this function doing  code run time 1 second late run .
#define clrscn() printf("\e[1;1H\e[2J")                          
#endif                                         //same work
int main(){
    int hour,minute,second;
    printf("Enter hour minute second :");
    scanf("%d %d %d",&hour,&minute,&second);
    
    clrscn();// Clear screen at the start
    
    int h=0,m=0,s=0;
    while(1){
    printf("\n\n---------- STOP WATCH ----------\n\n\n");	
    printf("%.2d:%.2d:%.2d\n",h,m,s); 
    printf("\n\n---------------------------------\n\n\n");	

    if(h==hour && m==minute && s==second){
        break;
    }
    else
	{
         clrscn();
    }
    sleep(1);
        s++;

    if(s==CYCLE)
	{
        m++;
        s=0;
    }
    if(m==CYCLE)
	{
        h++;
        m=0;
    }
    }
    return 0;
}
