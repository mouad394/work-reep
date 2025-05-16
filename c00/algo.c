#include <stdio.h>
#include <unistd.h>

void number_prip(void){
    int x;
    write(1,"this number is:\n",17);
    scanf("%d",&x);
    if (x % 2==0){
        write(1,"this number is pair",20);
    }else{
        write(1,"this number is impaire",23);
    }

}
int main(){
    number_prip();
    return 0;
}