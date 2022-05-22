#include<stdio.h>
#include<stdlib.h>

void showprofiles();
void deleteacc();
void test();
int main()
{
    int num;
    printf("What you want sussy baka?\n");
    printf("\n\n1.Wifi password check\n2.Show Wi-fi profiles\n3.Delete wi-fi profile\n4.Exit\n\nEnter your choice: ");
    scanf("%d",&num);
    switch(num)
    {
        case 1:
        {
            test();
            break;
        }
        case 2:
        {
            showprofiles();
            break;
        }
        case 3:
        {
            deleteacc();
            break;
        }
        case 4:
        {
            return 0;
        }
    }
}
void showprofiles()
{
    system("cls");
    printf("********************** Wi-fi profiles ************************");
    system("netsh wlan show profiles");
    main();
}
void deleteacc()
{
    char w_name[20];
    char ccmd[512];
    printf("**********************Delete Wi-fi profile************************");
    system("netsh wlan show profiles");
    printf("\n\nEnter wi-fi name: ");
    scanf("%s",w_name);
    system("cls");
    sprintf(ccmd,"netsh wlan delete profile name=\"%s\"",w_name);
    system(ccmd);
    printf("\n%s deleted!\n",w_name);
    main();
}
void test()
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
    main();
}

// 