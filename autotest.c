#include"func.h"
void autotest(void){
char* slovo[256];
printf("Beginning autotest\n");
func("text.txt", slovo);
if (strlen(slovo)==2){
    printf("Passed respect+...\n");
}
else {printf("failed\n");}
}
