#include <stdio.h>
#include <windows.h>
#include <string.h>    
#include <stdlib.h> 

void Cool_Print(char* text, int time);

int main(int argc, char** argv){
    if (argc == 1){
        printf("Please enter a valid arguments as\n=> ./CoolPrint <Text> <Delay Time>\n");
    }
    Cool_Print(argv[1],atoi(argv[argc-1]));
    return 0;
}


void Cool_Print(char* text,int time){
    int Len = strlen(text);
    char Printed[Len];
    for(int k = 0; k < Len; k++){
        Printed[k] = 0;
    }
    for (int j = 0; j < Len; j++){
        for (int i = 32; i < 123; i++){
            printf("\r%s%c", Printed, (char)(i));
            if ((int)(text[j]) == i){
                Printed[j] = (char)(i);
                break;
            }
            Sleep(time);   
        }
    }
}