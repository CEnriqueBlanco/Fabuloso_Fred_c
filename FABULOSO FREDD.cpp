/*Luis ernesto Lopez Cardenas		Javier Sinued Trejo Tapia		
  Alan Gael Gallardo Jimenez		Carlos Enrique Blanco Ortiz*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<windows.h>

void menu();//Esta funcion se basa en el menu, donde se encuentran las opciones que se encuentran, ademas de que es la que muestra los niveles.
void cuadros(); //Esta funcion, tiene el cuadro con todos los colores y se utilizara para hacer una simulacion de parpadear. 
void comoJugar();//En esta funcion solamente se explicara de que trata el juego y se daran algunas instrucciones.
int numeroRandom();//Aqui se generara un numero entre el 1 y el 4 para que dentro de el cuadro parpadee, segun color.
void parpadear(int numeros);//Esta funcion es la main, es la mas importante, ya que es la que recibe que color va a parpadear
void colorRojo();//En esta funcion solamente se reemplaza el  color rojo por nada para hacer simulacion de parpadeo dentro del juego
void colorVerde();//En esta funcion solamente se reemplaza el  color verde por nada para hacer simulacion de parpadeo dentro del juego
void colorMorado();//En esta funcion solamente se reemplaza el  color morado por nada para hacer simulacion de parpadeo dentro del juego
void colorAzul();//En esta funcion solamente se reemplaza el  color azul por nada para hacer simulacion de parpadeo dentro del juego

int main(){
	srand(time(NULL));
	menu();	
	return 0;
}

void menu(){
	int opc=0, numeros[20], cont=0 , valor, score=0, i=0;
	char tecla;
	do{
		system("cls");
		system("COLOR F5");
		printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t  F A B U L O S O  F R E D D ");
		printf("\n\n\t\t\t\t\t\tPulsa [c] para Comenzar niveles ");
		printf("\n\n\t\t\t\t\t\t Pulsa [q] para juego infinito ");
		printf("\n\n\t\t\t\t\t\t  Pulsa [i] para Como jugar ");
		printf("\n\n\t\t\t\t\t\t    Pulsa [s] para Salir ");
		printf("\n\n\t\t\t\t\t\t           Opcion: ");
		scanf("%c",&tecla);
		switch(tecla){
			case 'i':
				comoJugar();
				menu();
				break;
			case 's':
				exit(0);
				break;
			case 'c':
				system("cls");
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t  I N I C I A R  N I V E L  \n\t\t\t\t\t\t\t     1 ");
				//getch();
				fflush(stdin);
				system("cls");
				do{//Aqui se encuentra el nivel 1
					numeros [cont] = numeroRandom();//Aqui se reciben los numeros generados de forma aleatoria, y donde se decide que color parpadeara
					for (int i = 0 ; i <= cont ; i++){
						parpadear(numeros[i]);	
					}
					for (int i = 0 ; i <= cont; i++){
						printf("\n\t\t\t\t    La secuencia %d que ha parpadeado fue: ",i+1);
						scanf("%d", &valor);	
						if(valor != numeros[i]){
							system("cls");
							Beep(500,800);
							printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t  P E R D I S T E\n");
							printf("\t\t\t\t\t Esta ha sido tu puntuacion: %d puntos",score);
							exit(0);			
						}	
					}
					cont++;
					if(valor == numeros[i]){
						score = score + 10;
						if(score == 20){
							system("cls");
							printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t T E R M I N A S T E  E L  N I V E L\n\t\t\t\t\t\t\t\t     1\n ");
							printf("\t\t\t\t\t\tEsta ha sido tu puntuacion: %d puntos",score);
							getch();
							fflush(stdin);
							system("cls");
							Sleep(1000);
						}
						i++;
					}
				}while(score != 20);
				
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t  I N I C I A R  N I V E L  \n\t\t\t\t\t\t\t     2 ");
				getch();
				fflush(stdin);
				system("cls");
				do{//Aqui se encuentra el nivel 2
					numeros [cont] = numeroRandom();
					for (int i = 0 ; i <= cont ; i++){
						parpadear(numeros[i]);	
					}
					for (int i = 0 ; i <= cont; i++){
						printf("\n\t\t\t\t    La secuencia %d que ha parpadeado fue: ",i+1);
						scanf("%d", &valor);	
						if(valor != numeros[i]){
							system("cls");
							Beep(500,800);
							printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t  P E R D I S T E\n");
							printf("\t\t\t\t\t Esta ha sido tu puntuacion: %d puntos",score);
							exit(0);			
						}	
					}
					cont++;
					if(valor == numeros[i]){
						score = score + 10;
						if(score == 40){
							system("cls");
							printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t T E R M I N A S T E  E L  N I V E L\n\t\t\t\t\t\t\t\t     2\n ");
							printf("\t\t\t\t\t\tEsta ha sido tu puntuacion: %d puntos",score);
							getch();
							fflush(stdin);
							system("cls");
							Sleep(1000);
						}
						i++;
					}
				}while(score != 40);
				
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t  I N I C I A R  N I V E L  \n\t\t\t\t\t\t\t     3 ");
				getch();
				fflush(stdin);
				system("cls");
				do{//Aqui se encuentra el nivel 3
					numeros [cont] = numeroRandom();
					for (int i = 0 ; i <= cont ; i++){
						parpadear(numeros[i]);	
					}
					for (int i = 0 ; i <= cont; i++){
						printf("\n\t\t\t\t    La secuencia %d que ha parpadeado fue: ",i+1);
						scanf("%d", &valor);	
						if(valor != numeros[i]){
							system("cls");
							Beep(500,800);
							printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t  P E R D I S T E\n");
							printf("\t\t\t\t\t Esta ha sido tu puntuacion: %d puntos",score);
							exit(0);			
						}	
					}
					cont++;
					if(valor == numeros[i]){
						score = score + 10;
						if(score == 60){
							system("cls");
							printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t G A N A S T E  E L  J U E G O ! ! !\n\t\t\t\t\t\t\t\t     \n ");
							printf("\t\t\t\t\t\tEsta ha sido tu puntuacion: %d puntos",score);
							getch();
							fflush(stdin);
							system("cls");
							Sleep(1000);
							exit(0);
						}
						i++;
					}
				}while(score != 60);
				break;
				case 'q':
				system("cls");
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t    I N I C I A R");
				getch();
				fflush(stdin);
				system("cls");
				do{
					numeros [cont] = numeroRandom();
					for (int i = 0 ; i <= cont ; i++){
						parpadear(numeros[i]);	
					}
					for (int i = 0 ; i <= cont; i++){
						printf("\n\t\t\t\t    La secuencia %d que ha parpadeado fue: ",i+1);
						scanf("%d", &valor);	
						if(valor != numeros[i]){
							system("cls");
							Beep(500,800);
							printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t  P E R D I S T E\n");
							printf("\t\t\t\t\t Esta ha sido tu puntuacion: %d puntos",score);
							exit(0);			
						}	
					}
					cont++;
					if(valor == numeros[i]){
						score = score + 10;
						if(score == 100000){
							system("cls");
							printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t T E R M I N A S T E");
							printf("\t\t\t\t\t\tEsta ha sido tu puntuacion: %d puntos",score);
							getch();
							fflush(stdin);
							system("cls");
							Sleep(1000);
						}
						i++;
					}
				}while(score != 100000);
				break;
			default:
				menu();
				break;
		}
	}while(opc =!9);
		
}
void parpadear(int numeros){//En esta funcion se reciben los cuadros y se regresan para hacer una simulacion de parpadeo.
	HANDLE hConsole= GetStdHandle(STD_OUTPUT_HANDLE);
	switch(numeros){
		case 1:
			system("cls");
			cuadros();
			Sleep(250);
			system("cls");
			colorRojo();
			Sleep(1000);
			system("cls");
			break;
		case 2:
			system("cls");
			cuadros();
			Sleep(250);
			system("cls");
			colorVerde();
			Sleep(1000);
			system("cls");
			break;
		case 3:
			system("cls");
			cuadros();
			Sleep(250);
			system("cls");
			colorMorado();
			Sleep(1000);
			system("cls");

			break;
		case 4:
			system("cls");
			cuadros();
			Sleep(250);
			system("cls");
			colorAzul();
			Sleep(1000);
			system("cls");

			break;
		default:
			break;
	}
	
}
void comoJugar(){//Aqui se encuentran las instrucciones.
	system("cls");
	printf("\t\t\t\t\tF A B U L O S O  F R E E D D\n");
	printf("\t\tEste juego esta basado en una secuencia de colores que se deben de seguir\n");
	printf("\t\ttiene un total de 4 colores, a continuacion se mostrara un ejemplo\n");
	HANDLE hConsole= GetStdHandle(STD_OUTPUT_HANDLE);
for(int i=0; i<21; i++){
	printf("\n\t\t\t\t");
	for(int j=0; j<21; j++){
		if(i==0 ||j==0 ||i==10 || j==10 || i==20 || j==20){
		SetConsoleTextAttribute(hConsole, 240);
		printf("* ");	
		}
		else{
			if(i<1 || i<10 && j<10){
			SetConsoleTextAttribute(hConsole, 244);
			printf("# ");	
			}
		else{
			if(i<10 && i<21 && j>10 && j<21){
			SetConsoleTextAttribute(hConsole, 250);
			printf("# ");	
			}
			if(i>10 && i<21 && j>10 && j<21){
			SetConsoleTextAttribute(hConsole, 249);
			printf("# ");	
			}
			if(i>10 && i<21 && j>0 && j<10){
			SetConsoleTextAttribute(hConsole, 253);
			printf("# ");	
			}
		}
		
			}

		}

	}
	printf("\n");
	SetConsoleTextAttribute(hConsole, 245);
	printf("\t\tSe correra una secuencia de numeros donde cada color se representa con un numero\n");
	printf("\t\tEl color rojo se representa con el numero 1\n");
	printf("\t\tEl color verde se representa con el numero 2\n");
	printf("\t\tEl color morado se representa con el numero 3\n");
	printf("\t\tEl color azul se representa con el numero 4\n");
	getch();
}

void cuadros(){//Aqui se encuentra el cuadro completo, donde en cada ocasiòn que parpadee un color este aparezca y simule que se volvio a activar
		HANDLE hConsole= GetStdHandle(STD_OUTPUT_HANDLE);
for(int i=0; i<21; i++){
	printf("\n\t\t\t\t");
	for(int j=0; j<21; j++){
		if(i==0 ||j==0 ||i==10 || j==10 || i==20 || j==20){
		SetConsoleTextAttribute(hConsole, 240);
		printf("* ");	
		}
		else{
			if(i<1 || i<10 && j<10){
			SetConsoleTextAttribute(hConsole, 244);
			printf("# ");	
			}
		else{
			if(i<10 && i<21 && j>10 && j<21){
			SetConsoleTextAttribute(hConsole, 250);
			printf("# ");	
			}
			if(i>10 && i<21 && j>10 && j<21){
			SetConsoleTextAttribute(hConsole, 249);
			printf("# ");	
			}
			if(i>10 && i<21 && j>0 && j<10){
			SetConsoleTextAttribute(hConsole, 253);
			printf("# ");	
			}
		}
			}
		}
	}
}

int numeroRandom(){//Esta funcion tiene un numero aleatorio del 1 al 4 para enviarlo, para parpadear dependiendo el numero.
	int random;
	random = rand() % 4+1;
	return random;
}

void colorRojo(){//Aqui se encuentra el cuadro sin el color rojo para la simulacion de parpadeo
	HANDLE hConsole= GetStdHandle(STD_OUTPUT_HANDLE);
for(int i=0; i<21; i++){
	printf("\n\t\t\t\t");
	for(int j=0; j<21; j++){
		if(i==0 ||j==0 ||i==10 || j==10 || i==20 || j==20){
		SetConsoleTextAttribute(hConsole, 240);
		printf("* ");	
		}
		else{
			if(i<1 || i<10 && j<10){
			SetConsoleTextAttribute(hConsole, 244);
			printf("  ");	
			}
		else{
			if(i<10 && i<21 && j>10 && j<21){
			SetConsoleTextAttribute(hConsole, 250);
			printf("# ");	
			}
			if(i>10 && i<21 && j>10 && j<21){
			SetConsoleTextAttribute(hConsole, 249);
			printf("# ");	
			}
			if(i>10 && i<21 && j>0 && j<10){
			SetConsoleTextAttribute(hConsole, 253);
			printf("# ");	
			}
		}
			}
		}
	}
}

void colorVerde(){//Aqui se encuentra el cuadro sin el color verde para la simulacion de parpadeo
	HANDLE hConsole= GetStdHandle(STD_OUTPUT_HANDLE);
	for(int i=0; i<21; i++){
	printf("\n\t\t\t\t");
		for(int j=0; j<21; j++){
			if(i==0 ||j==0 ||i==10 || j==10 || i==20 || j==20){
			SetConsoleTextAttribute(hConsole, 240);
			printf("* ");	
			}
			else{
			if(i<1 || i<10 && j<10){
			SetConsoleTextAttribute(hConsole, 244);
			printf("# ");	
			}
			else{
			if(i<10 && i<21 && j>10 && j<21){
			SetConsoleTextAttribute(hConsole, 250);
			printf("  ");	
			}
			if(i>10 && i<21 && j>10 && j<21){
			SetConsoleTextAttribute(hConsole, 249);
			printf("# ");	
			}
			if(i>10 && i<21 && j>0 && j<10){
			SetConsoleTextAttribute(hConsole, 253);
			printf("# ");	
			}
			}
			}
		}
	}
}

void colorMorado(){//Aqui se encuentra el cuadro sin el color morado para la simulacion de parpadeo
	HANDLE hConsole= GetStdHandle(STD_OUTPUT_HANDLE);
	for(int i=0; i<21; i++){
	printf("\n\t\t\t\t");
		for(int j=0; j<21; j++){
			if(i==0 ||j==0 ||i==10 || j==10 || i==20 || j==20){
			SetConsoleTextAttribute(hConsole, 240);
			printf("* ");	
			}
			else{
			if(i<1 || i<10 && j<10){
			SetConsoleTextAttribute(hConsole, 244);
			printf("# ");	
			}
			else{
			if(i<10 && i<21 && j>10 && j<21){
			SetConsoleTextAttribute(hConsole, 250);
			printf("# ");	
			}
			if(i>10 && i<21 && j>10 && j<21){
			SetConsoleTextAttribute(hConsole, 249);
			printf("# ");	
			}
			if(i>10 && i<21 && j>0 && j<10){
			SetConsoleTextAttribute(hConsole, 253);
			printf("  ");	
			}
		}
			}
		}
	}
}

void colorAzul(){//Aqui se encuentra el cuadro sin el color azul para la simulacion de parpadeo
	HANDLE hConsole= GetStdHandle(STD_OUTPUT_HANDLE);
	for(int i=0; i<21; i++){
	printf("\n\t\t\t\t");
		for(int j=0; j<21; j++){
			if(i==0 ||j==0 ||i==10 || j==10 || i==20 || j==20){
			SetConsoleTextAttribute(hConsole, 240);
			printf("* ");	
			}
			else{
			if(i<1 || i<10 && j<10){
			SetConsoleTextAttribute(hConsole, 244);
			printf("# ");	
			}
			else{
			if(i<10 && i<21 && j>10 && j<21){
			SetConsoleTextAttribute(hConsole, 250);
			printf("# ");	
			}
			if(i>10 && i<21 && j>10 && j<21){
			SetConsoleTextAttribute(hConsole, 249);
			printf("  ");	
			}
			if(i>10 && i<21 && j>0 && j<10){
			SetConsoleTextAttribute(hConsole, 253);
			printf("# ");	
			}
			}
			}
		}
	}
}
