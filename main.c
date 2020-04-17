#include "func.h"
int main(void)
{
    char slovo[512];
    int b;
    b=func("test.txt", slovo);
    if (b==1)
        {
            printf("%s\n", slovo);
        }
    else
        {
            if(b==-5)
                {
                }
            printf("Net takovo slova...\n");
        }
    autotest();
}
