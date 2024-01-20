#include <stdio.h>
main(){
    char string[80];
    int index;
    printf("enter the string for checking its characters");
    scanf("%s", string);
    for(index=0; string[index]!='\0'; ++index){
        if (string[index]>='0' && string[index]<='9') {
            printf("%c is a digit", string[index]);
        }
        else if ((string[index]>='A' && string[index]<'Z') || (string[index]>='a' && string[index]<'z')) {
            printf("%c is an alphabet", string[index]);
        }
        else {
            printf("%c is a special character", string[index])
        }
    }
}