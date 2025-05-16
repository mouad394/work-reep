#include <unistd.h>

void  ft_print_numbers(void){
    int x = 0;
    while(x < 10){
        write(1, &x, 1);
        x++;
    }    
}
int main(){
    ft_print_numbers();
    return 0;    
}