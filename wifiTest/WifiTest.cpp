//creating, starting and stopping an Wifi service of a notepad computer
// just for fun
//2015.1

#include "stdio.h"
#include "stdlib.h"

int wifi(); //function statement
int face() //interface function
{
	printf("\n\n\n\t\t\t ------------------------\n");
	printf("\t\t\t | 笔记本变成无线路由器 |\n");
	printf("\t\t\t | ☆Cacool Copyright☆ |\n");
	printf("\t\t\t ------------------------\n");
	return 0;
}

int next() //subsequent slection operations
{
	printf("\nselect operation number:\n");
	printf("【1】Back\n");
	printf("【2】Exit\n");

	int select;
loop:	scanf("%d", &select);
	if(select == 1)
		wifi();
	else if(select == 2)
		exit(0);
	else
	{
		printf("Incorrect number, input again:\n");
		goto loop;
	}
	return 0;
}

int wifi() //creating, starting and stopping Wifi
{
	system("cls"); //clear the print screen
	face();
	printf("\nselect operation number:\n");
	printf("【1】Creating WiFi\n");
	printf("【2】Starting WiFi\n");
	printf("【3】Stopping WiFi\n");
	printf("【4】Exit\n");

	int select;
loop2:	scanf("%d", &select);

	switch(select)
	{
	case 1:
	system("cls");
	face();

/*	char wifi_ssid[20];
	printf("give a WiFi name:\n");
	scanf("%s", wifi_ssid);

	char wifi_key[20];
	printf("\ngive a Wifi password:\n");
	scanf("%s", wifi_key);
	printf("\n");
*/
	system("netsh wlan set hostednetwork mode = allow ssid = Cool key = 12344321"); //call Windows built-in system() function
	printf("Created Wifi successfully!\n");
	printf("Wifi name：%s\n", "Cool");
	printf("Wifi password：%s\n", "12344321");
	next();
	break; //don't forget this statement
	
	
	case 2:
	system("cls");
	face();
	system("netsh wlan start hostednetwork");
	printf("Started　WiFi successfully!\n");
	next();
	break;


	case 3:
	system("cls");
	face();
	system("netsh wlan stop hostednetwork");
	printf("Stoppd Wifi successfully!\n");
	next();
	break;


	case 4:
		exit(0);
		next();
		break;


	default: 
		{
			system("cls");
			face();
			printf("Incorrect number, input again:\n");
			goto loop2;
			next();
		} //default
	
	} //switch

	return 0;
}

int main()
{
	wifi(); //call the wifi() function
	return 0;
}
