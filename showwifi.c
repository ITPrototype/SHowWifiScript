#include<stdio.h>
#include<stdlib.h>

int main()
{
    char name[20];
    char cmd[512];
    system("cls");
    printf(" ************************ Wi-fi *************************** ");
    system("netsh wlan show profiles");
    printf("\n\nEnter wi-fi name: ");
    scanf("%s",name);
    system("cls");
    sprintf(cmd,"netsh wlan show profile name=\"%s\" key=clear",name);
    system(cmd);
}
// 