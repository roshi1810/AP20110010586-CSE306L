#include <stdio.h>
#include <stdlib.h>
int main(){
    int state = 0;
    int l;
    scanf("%d\n", &l); // Enter the length of the string
    char input[l];
    scanf("%s", &input); // Enter the string
    for(int i=0; input[i] != '\0'; i++){
        switch(state){
            case 0: if(input[i]=='a')
                        state=1;
                    else if(input[i]=='b')
                        state=3;
                    else
                    {
                        printf("Invalid token");
                        exit(0);
                    }
                    break;
            case 1: if(input[i]=='a')
                        state=2;
                    else if(input[i]=='b')
                        state=3;
                    else
                    {
                        printf("Invalid token");
                        exit(0);
                    }

                    break;
            case 2: if(input[i]=='a')
                        state=2;
                    else if(input[i]=='b')
                        state=3;
                    else
                    {
                        printf("Invalid token");
                        exit(0);
                    }
                    break;
            case 3: if(input[i]=='a')
                        state=1;
                    else if(input[i]=='b')
                        state=4;
                    else
                    {
                        printf("Invalid token");
                        exit(0);
                    }
                    break;
            case 4: if(input[i]=='a')
                        state=1;
                    else if(input[i]=='b')
                        state=4;
                    else
                    {
                        printf("Invalid token");
                        exit(0);
                    }
                    break;
    }
    }
    if(state==2 || state==4){
        printf("\nString accepted :)");
    }
    else{
        printf("\nString not accepeted :(");
    }
}