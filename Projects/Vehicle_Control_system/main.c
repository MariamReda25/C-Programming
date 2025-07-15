/*
 * Mini_Project.c
 *
 *  Created on: Aug 13, 2023
 *      Author: Mariam Reda
 */

#include<stdio.h>
#define WITH_ENGINE_TEMP_CONTROLLER 1
/* Strcut for vehicle Characteristics */
typedef struct{
	unsigned char speed;
	float room_temp;
	float engine_temp;
}Characteristic;

/* Enum for Vehicle States */
typedef enum{
	Off ,
	ON
}State;

/* initial values for vehicle charac.*/
Characteristic vehicle ={25,35,90};

/* initial states for engine,AC,Controller */
State engine=Off;
State AC = Off;
State Controller = Off;

/* Functions Prototype */
void Turn_On(char *choice);
void Traffic_Light(void);
void Check_Speed(unsigned int speed);
void display (void);
void Room_Temp(void);
void Engine_Controller(void);

int main(void){

	char choice;
	do{
		printf("\na.Turn on the vehicle engine\n");
		printf("b.Turn off the vehicle engine\n");
		printf("c.Quite the system\n");
		fflush(stdout);
		scanf(" %c",&choice);
		switch(choice){
		case 'a':
		case 'A':
			engine = ON;
			Turn_On(&choice);
			break;
		case 'B':
		case 'b':
			printf("Turn off the vehicle engine\n");
			break;
		case 'c':
		case 'C':
			printf("Quite the system");
			return 0;
		default:
			choice='b';
		}
	}while(choice=='b'|| choice == 'B');

}

/* Turn_ON Function */
void Turn_On(char *choice ){
	char c;
	do{
		printf("\na.Turn off the engine\n");
		printf("b.Set the traffic light color\n");
		printf("c.Set the room temperature\n");
#if(WITH_ENGINE_TEMP_CONTROLLER)
		printf("d.Set the engine temperature\n");
#endif
		fflush(stdout);
		scanf(" %c",&c);
		switch(c){
		case 'a':
		case 'A':
			*choice='b';
			engine = Off;
			return;
		case 'b':
		case 'B':
			Traffic_Light();
			Check_Speed(vehicle.speed);
			display();
			break;
		case 'c':
		case 'C':
			Room_Temp();
			display();
			break;
#if(WITH_ENGINE_TEMP_CONTROLLER)
		case 'd':
		case 'D':
			Engine_Controller();
			display();
			break;
#endif
		}
	}while(1);

}
/* Traffic_Light Function */
void Traffic_Light(void)
{
	char light;
	do{
		printf("Enter Required Light:\n");
		fflush(stdout);
		scanf(" %c",&light);
		switch(light){
		case'G':
		case'g':
			vehicle.speed=100;
			return;
		case'O':
		case'o':
			vehicle.speed=30;
			return;
		case'r':
		case'R':
			vehicle.speed=0;
			return;
		}
	}while(1);
}
/* Room_Temperature Function */
void Room_Temp(void)
{
	float Temp;
	printf("Enter Required Room Temperature:\n");
	fflush(stdout);
	scanf("%f",&Temp);
	if(Temp<10 || Temp>30){
		AC = ON;
		vehicle.room_temp=20;
	}else {
		AC =Off;
		vehicle.room_temp=Temp;
	}
}
/* Engine_Temperature_Controller Function */
void Engine_Controller(void)
{
	float Temp;
	printf("Enter Required Engine Temperature:\n");
	fflush(stdout);
	scanf("%f",&Temp);
	if(Temp<100 || Temp>150){
		Controller = ON;
		vehicle.engine_temp=125;
	}else{
		Controller = Off;
		vehicle.engine_temp=Temp;
	}

}
/*  Function Check Speed */
void Check_Speed(unsigned int speed)
{
	if(speed==30){
		AC =ON;
		vehicle.room_temp=vehicle.room_temp*((float)5/4)+1;
#if(WITH_ENGINE_TEMP_CONTROLLER)
		Controller=ON;
		vehicle.engine_temp=vehicle.engine_temp*((float)5/4)+1;
#endif
	}
}
/* Function Display Characteristics for Vehicle System */
void display (void)
{
	(engine==Off)?printf("\nEngine is OFF\n"):printf("Engine is ON\n"); //Check engine state before displaying
	(AC==Off)?printf("AC is OFF\n"):printf("AC is ON\n"); //Check AC state before displaying
	 printf("Vehicle speed = %u km/hr\n",vehicle.speed);
	 printf("Room Temperature: %.2f C\n",vehicle.room_temp);
#if(WITH_ENGINE_TEMP_CONTROLLER)
	//Check engine Controller state before displaying
	(Controller ==Off)?printf("Engine Temperature Controller is OFF\n"):
			printf("Engine Temperature Controller is ON\n");
	printf("Engine Temperature: %.2f C\n",vehicle.engine_temp);
#endif
}
