#include <unistd.h>

void ft_print_comb(void){
    int x ='0';
    int y;
    int z;
    while ( x <= 55){
        y=x+1;
        while(y<='8'){
            z=y+1;
            while(z<= 57){
                write(1, &x, 1);
                write(1, &y, 1);
                write(1, &z, 1);
                if (!(x==55 && y=='8' && z==57 )){
                    write(1, "," ,1); // ila wsel 789 madirch fassila
                }
            z++;
        }
        y++;
    }
    x++;
}
}
int main(){
    ft_print_comb();
return 0;    
}