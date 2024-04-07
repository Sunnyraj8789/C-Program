#include <stdio.h>

int main() {
    int n = 5;  
    char ch = 'a'; 
    
    for (int i = 1; i <= n; ++i) 
    {
        for (int j = 1; j <= i; ++j) {
            if(ch=='z')
            {
                printf("%c ", ch);

            }
        
            else
            {
                ch + 1; 

            }
        }
        printf("\n");
    }

    return 0;
}
