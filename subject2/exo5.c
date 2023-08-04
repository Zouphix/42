#include <unistd.h>

void ft_print_comb(void){
    char a = '0';
    char b = '1';
    char c = '2';

    while (a <= '7')
    {
        
        while (b <= '8')
        {
            

            while (c <= '9')
            {
                if (a!=b && a!=c && b!=c)
                {
                    write(1,&a,1);
                    write(1,&b,1);
                    write(1,&c,1);
                    write(1,", ",2);
                
                }
                c++;
                
            }
            c = '0';
            b++;
        }
        b='0';
        a++;
    }

    
}

int main(){
    ft_print_comb();
    return 0;
}