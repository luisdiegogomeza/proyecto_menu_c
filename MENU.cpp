#include <iostream>
#include <cstdlib>
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include <iomanip>
#include <cmath>
#include <conio.h>
#include <ctime>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <windows.h>
#include <time.h>

using namespace std;


//Cabe
void getSuma();
void getPar();
int getConvertidor();
int getPalindromo();
int getRomano();
int getNumero();
int getDecimall();
int gettabla();
int getMulti();
int getCompi(int x, int y);
int getBinario();
int getNelta();
int getGoogl();
void getfaceb();
void getCajero ();
void getHipotenusa ();
void getKat();
void getSafar();
void getTrabajo();
int getPitagoras();



main(){
	int op;
	
	do{
		system("cls");
		cout<<"(1) Suma, Resta, Multiplicación y División "<<endl;
		cout<<"(2) Par o impar "<<endl;
		cout<<"(3) Convertir de kilómetros a millas, metros a pulgadas, de libras a kilos y viceversa "<<endl;
		cout<<"(4) Determinar si una palabra o un número es palíndromo "<<endl;
		cout<<"(5)Conversion de numeros arabigos a romanos"<<endl;
		cout<<"(6)Conversión de números enteros a letras"<<endl;
		cout<<"(7) Conversión de números enteros con decimal a letras"<<endl;
		cout<<"(8) Una tabla de multiplicar "<<endl;
		cout<<"(9) Todas las tablas de multiplicar del 1 al 10 "<<endl;
		cout<<"(10) ) Crear de forma gráfica la multiplicación manual "<<endl;
		cout<<"(11) Conversión de números decimales a binario"<<endl;
		cout<<"(12) Conversión de números decimales a hexadecimales "<<endl;
		cout<<"(13) Crear Figuras Geométricas Básicas "<<endl;	
	    cout<<"(14) Mover un punto en toda la pantalla"<<endl;
		cout<<"(15) Simulación de un Cajero (Autómata) "<<endl;	
		cout<<"(16) Calcular la hipotenusa "<<endl;
		cout<<"(17) Base de datos con grafica "<<endl;
		cout<<"(18) Signo Zodiacal "<<endl;
		cout<<"(19) Calculo de Salario por horas trabajadas"<<endl;
	    cout<<"(20) salir "<<endl;
	    
		cout<<"Digite una opcion: ";
		cin>>op;
		switch(op){
			case 1:
				system("cls");
				//cout<<"opcion 1"<<endl;
				getSuma();
				system("pause");
			break;
			case 2:
				system("cls");
				//cout<<"opcion 2"<<endl;
				getPar();
				system("pause");
			break;
			case 3:
				system("cls");
				//cout<<"opcion 3"<<endl;
				cout<<"Su conversion es: "<<getConvertidor()<<endl;
				system("pause");
			break;
			case 4:
				system("cls");
				//cout<<"opcion 4"<<endl;
				getPalindromo();
				system("pause");
			break;
			case 5:
				system("cls");
				//cout<<"opcion 5"<<endl;
				getRomano();
				system("pause");
			break;
			case 6:
				system("cls");
				//cout<<"opcion 6"<<endl;
				getNumero();
				system("pause");
			break;
			case 7:
				system("cls");
				//cout<<"opcion 7"<<endl;
				getDecimall();
				system("pause");
			break;
			case 8:
				system("cls");
				//cout<<"opcion 8"<<endl;
				gettabla();
				system("pause");
			break;
			case 9:
				system("cls");
				//cout<<"opcion 9"<<endl;
			     getMulti();
				system("pause");
			break;
			case 10:
				system("cls");
				//cout<<"opcion 10"<<endl;
			    getCompi(int x, int y);
				system("pause");
			break;
			case 11:
				system("cls");
				//cout<<"opcion 11"<<endl;
			    getBinario();
				system("pause");
			break;
				case 12:
				system("cls");
				//cout<<"opcion 12"<<endl;
			    getNelta();
				system("pause");
			break;
			case 13:
				system("cls");
				//cout<<"opcion 13"<<endl;
			    getGoogl();
				system("pause");
			break;
			case 14:
				system("cls");
				//cout<<"opcion 14"<<endl;
			    getfaceb();
				system("pause");
			break;
			case 15:
				system("cls");
				//cout<<"opcion 15"<<endl;
			    getCajero ();
				system("pause");
			break;
			case 16:
				system("cls");
				//cout<<"opcion 16"<<endl;
			    getHipotenusa();
				system("pause");
			break;
			case 17:
				system("cls");
				//cout<<"opcion 17"<<endl;
			    getKat();
				system("pause");
			break;
			case 18:
				system("cls");
				//cout<<"opcion 18"<<endl;
			    getSafart();
				system("pause");
			break;
			case 19:
				system("cls");
				//cout<<"opcion 19"<<endl;
			    getTrabajo();
				system("pause");
			break;
			case 20:
				system("cls");
				//cout<<"opcion 20"<<endl;
			    getPitagoras();
				system("pause");
			break;
			case 21:
				system("cls");
				cout<<"\n\n\tsaliendo :)";
				system("pause");
			break;
			default:
				if(op<1 && op>21){
					cout<<"\n\terror algo malo sucedio :( "<<endl;
					system("pause");
				}
			break;
		}
		
	}while(op != 21);
	
	
}

void getSuma(){
	int n1,n2, suma = 0, resta =0, multiplicacion = 0 , division =0;
	cout<<"digite un numero: "; cin>>n1;
	cout<<"digite otro numero: "; cin>>n2;
	
	suma = n1 + n2;
	resta = n1 - n2;
	multiplicacion = n1 * n2;
	division = n1 / n2;
	
	cout<<"\nLa suma es: " <<suma<<endl;
	cout<<"\nLa resta es: "<<resta<<endl;
	cout<<"\nLa multiplicacion es : "<< multiplicacion<<endl;
	cout<<"\nLa division es: "<<division<<endl;

}

void getPar(){
	int numero;
	
	cout<<"digite un numero: ";
	cin>>numero;
	
	if(numero%2==0){
		cout<<"el numero es par "<<endl;
	}
	else{
		cout<<"el numero es impar "<<endl;
	}
	
	
}

int getConvertidor(){


	
	float num,res;
	int op;
	 cout<<"CONVERSIONES"<<endl;
	 cout<<"1. KILOMETROS A MILLAS"<<endl;
	 cout<<"2. MILLAS A KILOMETROS"<<endl;
	 cout<<"3. METROS A PULGADAS"<<endl;
	 cout<<"4. PULGADAS A METROS"<<endl;
	 cout<<"5. LIBRAS A KILOS"<<endl;
	 cout<<"6. KILOS A LIBRAS"<<endl<<endl;
	 cout<<"INGRESE EL NUMERO DE LA OPERACION QUE DESEA REALIZAR: ";
	 cin>>op;
	 system("cls");
	 
	 switch (op){
	 	case 1:
	 	cout<<"INGRESE LOS KILOMETROS: "<<endl;
	 	cin>>num;
	 	res=(num*1)/1.60934;
	 	cout<<endl<< num<< " Kilometros son "<<res<<" Millas"<<endl;
	 	break;
	 	
	 	case 2:
	 	cout<<"INGRESE LAS MILLAS: "<<endl;
	 	cin>>num;
	 	res=(num*1.60934)/1;
	 	cout<<endl<< num<< " Millas son "<<res<<" Kilometros"<<endl;
	 	break;
	 	
	 	case 3:
	 	cout<<"INGRESE LOS METROS: "<<endl;
	 	cin>>num;
	 	res=(num*39.37)/1;
	 	cout<<endl<< num<< " Metros son "<<res<<" Pulgadas"<<endl;
	 	break;
	 	
	 	case 4:
	 	cout<<"INGRESE LAS PULGADAS: "<<endl;
	 	cin>>num;
	 	res=(num*1)/39.37;
	 	cout<<endl<< num<< " Pulgadas son "<<res<<" Metros"<<endl;
	 	break;
	 	
	 	case 5:
	 	cout<<"INGRESE LAS LIBRAS: "<<endl;
	 	cin>>num;
	 	res=(num*1)/2.2046;
	 	cout<<endl<< num<< " Libras son "<<res<<" Kilos"<<endl;
	 	break;
	 	
	 	case 6:
	 	cout<<"INGRESE LOS KILOS: "<<endl;
	 	cin>>num;
	 	res=(num*2.2046)/1;
	 	cout<<endl<< num<< " Kilos son "<<res<<" Libras"<<endl;
	 	break;
	 	
	 	default: 
	 	cout<<"NO EXISTE ESA OPERACION" ;
	 	break;
	 }
	 
	 return 0;
}



int getPalindromo(){

 
	string palabra;
	int numero;
 
	cout<<"Ingrese palabra o numero:"<<endl;
	cin >> palabra,numero;
 
	size_t longitud = palabra.length()-1;
	size_t i=0;
	bool esPalindromo = true;
 
	for(i=0 ; i<palabra.length()/2 && esPalindromo ;i++) {
 
		if(palabra[i]!=palabra[longitud-i]){
			esPalindromo = false;
		}
 
	}
 
    cout<<((true == esPalindromo) ? "es palindromo" : "no es palindromo")<<endl;
 
	return EXIT_SUCCESS;
 
}

int getRomano(){

 int numero, unidades, decenas, centenas, millares;
 
 cout<< "Ingrese un numero"<<endl;
 cin>> numero;

 /*Esto se hace para separar el numero,
 tomen como ejemplo el numero 2103, a ese numero
 lo debemos transformar de la manera siguiente: 
 2 - 1 - 0 - 3 donde 3 va a ocupar la unidades, 
 0 las decenas, 1 las centenas y 2 los millares*/

 unidades = numero % 10; numero /= 10;
 decenas = numero % 10; numero /= 10;
 centenas = numero % 10; numero /= 10;
 millares = numero % 10; numero /= 10;

 switch (millares)
 {
  case 1: cout<<"M"; break;
  case 2: cout<<"MM"; break;
  case 3: cout<<"MMM"; break;
 }
 
 switch (centenas)
 {
  case 1: cout<<"C"; break;
  case 2: cout<<"CC"; break;
  case 3: cout<<"CCC"; break;
  case 4: cout<<"CD"; break;
  case 5: cout<<"D"; break;
  case 6: cout<<"DC"; break;
  case 7: cout<<"DCC"; break;
  case 8: cout<<"DCCC"; break;
  case 9: cout<<"CM"; break; 
 }
 
 switch (decenas)
 {
  case 1: cout<<"X"; break;
  case 2: cout<<"XX"; break;
  case 3: cout<<"XXX"; break;
  case 4: cout<<"XL"; break;
  case 5: cout<<"L"; break;
  case 6: cout<<"LX"; break;
  case 7: cout<<"LXX"; break;
  case 8: cout<<"LXXX"; break;
  case 9: cout<<"XC"; break; 
 }
 
 switch (unidades)
 {
  case 1: cout<<"I"; break;
  case 2: cout<<"II"; break;
  case 3: cout<<"III"; break;
  case 4: cout<<"IV"; break;
  case 5: cout<<"V"; break;
  case 6: cout<<"VI"; break;
  case 7: cout<<"VII"; break;
  case 8: cout<<"VIII"; break;
  case 9: cout<<"IX"; break;
 }

 return 0;
}

int getNumero(){

    int x;
    cout<<"ingrese un numero"<<endl;
    cin>>x;
if((x<1)||(x>999)) cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
else
 
    {
        if(x>=900)   {cout<<"NOVECIENTOS " ;x=x-900;}
       else if(x>=800)   {cout<<"OCHOCIENTOS " ;x=x-800;}
       else if(x>=700)   {cout<<"SETECIENTOS " ;x=x-700;}
       else if(x>=600)   {cout<<"SEISCIENTOS " ;x=x-600;}
       else if(x>=500)   {cout<<"QUINIENTOS "  ;x=x-500;}
       else if(x>=400)   {cout<<"CUATROCIENTOS "   ;x=x-400;}
       else if(x>=300)   {cout<<"TRESCIENTOS " ;x=x-300;}
       else if(x>=200)   {cout<<"DOSCIENTOS "  ;x=x-200;}
       else if(x>100)    {cout<<"CIENTO "  ;x=x-100;}
       else if(x==100)  {cout<<"CIEN"     ;x=x-100;}
        if(x>90) {cout<<"NOVENTA Y "   ;x=x-90; }
            if(x==90)   {cout<<"NOVENTA"  ;x=x-90; }  
            if(x>80) {cout<<"OCHENTA Y "   ;x=x-80; }
            if(x==80)   {cout<<"OCHENTA"  ;x=x-80; }
            if(x>70) {cout<<"SETENTA Y "   ;x=x-70; }
            if(x==70)   {cout<<"SETENTA"  ;x=x-70; }
            if(x>60) {cout<<"SESENTA Y "   ;x=x-60; }
            if(x==60)   {cout<<"SESENTA"  ;x=x-60; }
            if(x>50) {cout<<"CINCUENTA Y " ;x=x-50; }
            if(x==50)   {cout<<"CINCUENTA"    ;x=x-50; }
            if(x>40) {cout<<"CUARENTA Y "  ;x=x-40; }
            if(x==40)   {cout<<"CUARENTA" ;x=x-40; }
            if(x>30) {cout<<"TREINTA Y "   ;x=x-30; }
            if(x==30)   {cout<<"TREINTA"  ;x=x-30; }
            if(x>20) {cout<<"VEINTI"       ;x=x-20; }
            if(x==20)   {cout<<"VEINTE"       ;x=x-20; }
        if(x>=16)    {cout<<"DIECI"        ;x=x-10; }
       else if(x==15)   {cout<<"QUINCE"       ;x=x-15; }
       else if(x==14)   {cout<<"CATORCE"  ;x=x-14; }
       else if(x==13)   {cout<<"TRECE"        ;x=x-13; } 
       else if(x==12)   {cout<<"DOCE"     ;x=x-12; }
       else if(x==11)   {cout<<"ONCE"     ;x=x-11; }
       else if(x==10)   {cout<<"DIEZ"     ;x=x-10; }      
        if(x==9)    {cout<<"NUEVE"        ;x=x-9;  }
        if(x==8)    {cout<<"OCHO"     ;x=x-8;  }
        if(x==7)    {cout<<"SIETE"        ;x=x-7;  }
            if(x==6)    {cout<<"SEIS"     ;x=x-6;  }
       else if(x==5)    {cout<<"CINCO"        ;x=x-5;  }
       else if(x==4)    {cout<<"CUATRO"       ;x=x-4;  }
       else if(x==3)    {cout<<"TRES"     ;x=x-3;  }
       else if(x==2)    {cout<<"DOS"      ;x=x-2;  }
       else if(x==1)    {cout<<"UNO"      ;x=x-1;  }
       }
    cout<<endl;
cin.ignore();return 0;
}

int getDecimall(){

    int x;
    cout<<"ingrese un numero"<<endl;
    cin>>x;
if((x<1)||(x>999)) cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
else
 
    {
        if(x>=900)   {cout<<"NOVECIENTOS. " ;x=x-900;}
       else if(x>=800)   {cout<<"OCHOCIENTOS " ;x=x-800;}
       else if(x>=700)   {cout<<"SETECIENTOS " ;x=x-700;}
       else if(x>=600)   {cout<<"SEISCIENTOS " ;x=x-600;}
       else if(x>=500)   {cout<<"QUINIENTOS "  ;x=x-500;}
       else if(x>=400)   {cout<<"CUATROCIENTOS "   ;x=x-400;}
       else if(x>=300)   {cout<<"TRESCIENTOS " ;x=x-300;}
       else if(x>=200)   {cout<<"DOSCIENTOS "  ;x=x-200;}
       else if(x>100)    {cout<<"CIENTO "  ;x=x-100;}
       else if(x==100)  {cout<<"CIEN"     ;x=x-100;}
        if(x>90) {cout<<"NOVENTA Y "   ;x=x-90; }
            if(x==90)   {cout<<"NOVENTA"  ;x=x-90; }  
            if(x>80) {cout<<"OCHENTA Y "   ;x=x-80; }
            if(x==80)   {cout<<"OCHENTA"  ;x=x-80; }
            if(x>70) {cout<<"SETENTA Y "   ;x=x-70; }
            if(x==70)   {cout<<"SETENTA"  ;x=x-70; }
            if(x>60) {cout<<"SESENTA Y "   ;x=x-60; }
            if(x==60)   {cout<<"SESENTA"  ;x=x-60; }
            if(x>50) {cout<<"CINCUENTA Y " ;x=x-50; }
            if(x==50)   {cout<<"CINCUENTA"    ;x=x-50; }
            if(x>40) {cout<<"CUARENTA Y "  ;x=x-40; }
            if(x==40)   {cout<<"CUARENTA" ;x=x-40; }
            if(x>30) {cout<<"TREINTA Y "   ;x=x-30; }
            if(x==30)   {cout<<"TREINTA"  ;x=x-30; }
            if(x>20) {cout<<"VEINTI"       ;x=x-20; }
            if(x==20)   {cout<<"VEINTE"       ;x=x-20; }
        if(x>=16)    {cout<<"DIECI"        ;x=x-10; }
       else if(x==15)   {cout<<"QUINCE"       ;x=x-15; }
       else if(x==14)   {cout<<"CATORCE"  ;x=x-14; }
       else if(x==13)   {cout<<"TRECE"        ;x=x-13; } 
       else if(x==12)   {cout<<"DOCE"     ;x=x-12; }
       else if(x==11)   {cout<<"ONCE"     ;x=x-11; }
       else if(x==10)   {cout<<"DIEZ"     ;x=x-10; }      
        if(x==9)    {cout<<"NUEVE"        ;x=x-9;  }
        if(x==8)    {cout<<"OCHO"     ;x=x-8;  }
        if(x==7)    {cout<<"SIETE"        ;x=x-7;  }
            if(x==6)    {cout<<"SEIS"     ;x=x-6;  }
       else if(x==5)    {cout<<"CINCO"        ;x=x-5;  }
       else if(x==4)    {cout<<"CUATRO"       ;x=x-4;  }
       else if(x==3)    {cout<<"TRES"     ;x=x-3;  }
       else if(x==2)    {cout<<"DOS"      ;x=x-2;  }
       else if(x==1)    {cout<<"UNO"      ;x=x-1;  }
       }
    cout<<endl;
cin.ignore();return 0;
}

int gettabla(){
	
    char seguir;
    int i, numero;

    do
    {
        printf( "\n   Introduzca un n%cmero entero: ", 163 );
        scanf( "%d", &numero );

        printf( "\n   La tabla de multiplicar del %d es:\n", numero );

        /* Inicio del anidamiento */

        for ( i = 1 ; i <= 10 ; i++ )
            printf( "\n   %d * %d = %d", i, numero, i * numero );

        /* Fin del anidamiento */

        printf( "\n\n   %cDesea ver otra tabla (s/n)?: ", 168 );
        fflush( stdin );
        scanf( "%c", &seguir );

    } while ( seguir != 'n' );

    return 0;
}


int getMulti(){
	
int izquierda=1;
int derecha=1;


while (izquierda <= 10){



cout << izquierda << "x" << derecha << "=" << izquierda*derecha << endl;



/* Con la linea anterior sacamos el resultado y le damos

el formato tipico de las tablas de multiplicar */



if (derecha == 10){

izquierda++; 

derecha=0; 
}

derecha++; 

}

cin.get();

return 0;

}

int getCompi(int x, int y){

	control();
}

void control(){
	system("cls");
int z,x,a,b,c,d,e,f,p,g,cent1,cent2;
int uni,dec,uni1,dec1,uni2,dec2,uni3,dec3;
gotoxy(20,1);cout<<("________________________________________");
gotoxy(20,2);cout<<("Multilicacion de Dos Digitos (Grafica)  ");
gotoxy(20,3);cout<<("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");

gotoxy(20,6);cout<<("Ingrese Cantidad: ");
cin>>a;
gotoxy(20,7);cout<<("Ingrese Cantidad: ");
cin>>b;
int r=a*b;
gotoxy(20,10);cout<<a;
gotoxy(18,12);cout<<("X");gotoxy(20,12);cout<<b;
gotoxy(15,13);cout<<("___________");

	uni = a%10; a /= 10;
	dec = a%10; a /= 10;
    uni1 = b%10; b /= 10;
	dec1 = b%10; b /= 10;

c=uni1*uni;
	uni2 = c%10; c /= 10;
	dec2 = c%10; c /= 10;
	cent1= c%10; c /= 10;
	
d=uni1*dec+dec2;
gotoxy(20,15);cout<<d<<uni2;

e=dec1*uni;
	uni3 = e%10; e /= 10;
	dec3 = e%10; e /= 10;
	
	cent2 = e%10; e /= 10;
	
f=dec1*dec+dec3;
gotoxy(19,16);cout<<f<<uni3;
gotoxy(15,17);cout<<("____________");
/*x=dec2+dec3;
p=dec2+dec+uni3;*/
gotoxy(19,18);cout<<r;

gotoxy(20,22);cout<<(" Desea Volver a repetir: ");
cin>>z;
if (z==1){
 control();

}else{
	exit (0);
}	
	
		
	

int getBinario (){
   int numero, exp, digito;
    double binario;
   cout << "Introduce numero: ";
   cin >> numero;
   exp=0;
   binario=0;
   while(numero/2!=0)
   {
           digito = numero % 2;
           binario = binario + digito * pow(10.0,exp);
           exp++;
           numero=numero/2;
   }
   binario = binario + numero * pow(10.0,exp);
   cout << fixed << setprecision(0);
   cout << "binario: " << binario << endl;
    system("pause");
}

int getNelta(){

	int mynum;
	
	cout << "\n    Entra un numero: ";
	cin >> mynum;
	cout.unsetf(ios::dec);
	cout.setf(ios::hex | ios::showbase);
	cout << "\n    En hexadecimal: " << mynum;
	cout.unsetf(ios::hex);
	cout.setf(ios::oct);
	cout << "\n    En Octal: " << mynum;
	cout.unsetf(ios::oct | ios::showbase);
	cout.setf(ios::dec);
	cout << "\n\n";
	system("pause");
	return 0;
}

int getGoogl(){


 int l1,l2,op,s=0;
 float re;
 printf("Areas de las figuras\n");
 printf("1.Triangulo\n");
 printf("2.Cuadrado\n");
 printf("3.Rectangulo\n");
 printf("4.Circulo\n");
 printf("5.Salir\n");
 printf("escoja una opcion:");
 scanf("%d",&op);
 switch(op)
 {
 case 1:
  {
   printf("triangulo\n");
   printf("ingrese la medida de la base");
   scanf("%d",&l1);
   printf("ingrse la medida de la altura");
   scanf("%d",&l2);
   re=(l1*l2)/2;
   printf("el resultado es:%d\n",re);
   break;
  }
 case 2:
  {
   printf("cuadrado\n");
   printf("ingrese la medida de un lado:");
   scanf("%d",&l1);
   re=l1*l1;
   printf("el resultado es: %d\n",re);
   break;
  }
 case 3:
  {
   printf("rectangulo\n");
   printf("ingresa la medida de la base");
   scanf("%d",&l1);
   printf("ingrese la medida de la altura");
   scanf("%d",&l2);
   re=l1*l2;
   printf("el resultado es: %d\n",re);
   break;
  }
 case 4:
  {
   printf("Circulo\n");
   printf("ingrese la medida del radio:");
   scanf("%d",&l1);
   re=3.1416*l1;
   printf("elresultado es:%f\n",re);
   break;
  }
  case 5:
   s=1;
   
 }
}

void getfaceb(int x, int y){
	
HANDLE hcon=GetStdHandle(STD_OUTPUT_HANDLE);
COORD dwPos;
dwPos.X=x;
dwPos.Y=y; 
SetConsoleCursorPosition(hcon,dwPos); 
}

void OcultarCursor(){
	HANDLE hCon;
	hCon = GetStdHandle (STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = 2;
	cci.bVisible = FALSE;
	SetConsoleCursorInfo(hCon,&cci );
	
}

class Punto{
	int x,y;
	public:
		Punto(int _x, int _y):x(_x),y(_y){}//constructor
		void pintar ();
		void borrar ();
		void mover ();
};



void Punto::pintar(){
	cout<< "."<<endl;
}

void Punto::borrar(){
	gotoxy(x,y);
	cout<< " "<<endl;
}

void Punto::mover(){
char opcion;

while(opcion!='z'){
 system("cls");//si le quitamos esto el caracter dejara rastro desde el punto que sea movido 
 gotoxy(x,y);
pintar();
 opcion=getch();
 switch(opcion){
  
 case ARRIBA: y--; 
 y > 4;
 break;
 
 case ABAJO: y++;
 y+3 < 33;
 break;
 
 case IZQUIERDA: x--;
 x > 3;
 break;
 
 case DERECHA: x++;
 x+6 < 77;
 break;
 
  
 }
}
			
}

int main(){


OcultarCursor();

	Punto P(7,7);
	P.pintar();
		
		
		P.mover();
		Sleep(30);
		
	return 0;
	

}

void getCajero(){


double saldo(double retiro,double deposito,double saldot)
{
 
    system("clear");
    saldot=saldot+deposito-retiro;
    return saldot;
     
     
}
 
double deposit(double saldot)
{
     
    double dep=0;
    char sn;
    do
    {
LDeposito:
    system("clear");
    cout<<"Ingrese cantidad a Depositar: ";
    cin>>dep;
     
    while(dep<=0)
    {
        cout<<"Desea ingresar un valor valido s/S n/N: ";
        cin>>sn;
        if(sn=='S'||sn=='s')
            goto LDeposito;
        else
            exit(0);
    }
    saldot=saldo(0,dep,saldot);
    cout<<"Desea realizar otro deposito s/S n/N: ";cin>>sn;
    }while(sn=='s'||sn=='S');
     
return saldot;
}
 
double retiro(double saldot)
{
    double retir=0;
        char sn;
        system("clear");
        if (saldot==0)
        {cout<<"Ud. no cuenta con saldo \n";
            cout<<"Desea realizar otra operacion s/S n/N: ";cin>>sn;
            if(sn=='S'||sn=='s')
            {
            system("clear");
            main();
            }
            else
            exit(0);
         
        }
        do
        {
            LRetir:
            system("clear");
            cout<<"Ingrese cantidad a Retirar: ";
            cin>>retir;
 
            while(saldot<retir)
            {   
                cout<<"Ud. no cuenta con saldo suficiente para hacer ese retiro\n";
                goto reintentar;
            }
             
            while(retir<=0)
            {
            reintentar:
                cout<<"Desea ingresar un valor valido s/S n/N: ";
                cin>>sn;
                if(sn=='S'||sn=='s')
                    goto LRetir;
                else
                    exit(0);    
            }
            saldot=saldo(retir,0,saldot);
            cout<<"Desea realizar otro retiro s/S n/N: ";cin>>sn;
        }while(sn=='s'||sn=='S');
     
return saldot;
}
 
 
 
double Option(int option1,double saldot)
{
    switch(option1)
    {
    case 1:saldot=deposit(saldot);break;
    case 2:saldot=retiro(saldot);break;
    case 3: {
            saldot=saldo(0,0,saldot);
            cout<<"Usted cuenta con :"<<saldot<<" dolares\n";
            }break;
    case 4:{system("clear");cout<<"Cerrando Sistema...";exit(0);}break;
     
    }
 
         
return saldot;
}
 
 
int main()
{
    int opt;
    char sn;
    double saldot=0;
     
    do
    {
    system("clear");
    cout<<"\t\t\tOperaciones Bancarias\n";
    cout<<"1. Deposito\n";
    cout<<"2. Retiro\n";
    cout<<"3. Saldo\n";
    cout<<"4. Salir\n\n";
    cout<<"Elija el numero de la opcion: ";cin>>opt;
    saldot=Option(opt,saldot);
    cout<<"Desea continuar con otra operacion s/S n/N: ";cin>>sn;
    }while(sn=='s'||sn=='S');
    system("clear");
    cout<<"Cerrando Sistema...\n";exit(0);
    return 0;
}

void getHipotenusa (){
	  float c1,c2,hipo=0;
 
  cout << "Digite cateto 1: ";
  cin >> c1;
  cout << "Digite cateto 2: ";
  cin >> c2;
 
  hipo = sqrt(pow(c1,2)+pow(c2,2));
 
  cout << "La hipotenusa es " << hipo << endl;
 
  return 0;
}

void getKat(){
	
	int cedula;
   struct nodo*siguiente;
}tiponodo;

typedef tiponodo *pnodo;
typedef tiponodo *cola;

cola cola_n=NULL;
cola cola_vip=NULL;
int solic;

void insertar (cola *cola_n)
{
   cola aux, creado;

   creado=(pnodo)malloc(sizeof(tiponodo));

   cout<<"   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
   cout<<"   ||||||||||||||||||||METROPOLI banco universal||||||||||||||||||||"<<endl;
   cout<<"   |||||||||||||||||||||||Le da la bienvenida|||||||||||||||||||||||"<<endl;
   cout<<"   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
   cout<<"   Estimado cliente: Introduzca su numero de cedula"<<endl;
   cin>>     creado->cedula;
   cout<<"   Pronto sera atendido"<<endl;


   if ((*cola_n)==NULL)
   {
      creado->siguiente=*cola_n;
      *cola_n=creado;
   }
   else
   {
      aux=*cola_n;

      while(aux!=NULL)
      {
         if(aux->siguiente==NULL)
         {
            creado->siguiente=aux->siguiente;
            aux->siguiente=creado;
            aux=aux->siguiente;
         }
         aux=aux->siguiente;
      }
   }
}

void mostrar_cola (cola cola_n)
{
   cola aux;
   aux=cola_n;
   if(aux==NULL)
   {
      cout<<"No hay clientes en cola"<<endl;
   }
   else
   {
      while(aux!=NULL)
      {
         cout<<"Cedula: "<<aux->cedula<<endl;
         cout<<""<<endl;
         aux=aux->siguiente;
         cout<<"* Clientes ordenados por orden de llegada((((((SIMCOLAS))))))"<<endl;
      }
   }
}
//modificado hasta acá... falta de orden por parte del creador
void insertar_vip (cola *cola_vip){
     cola aux_2, creado_vip;
     creado_vip=(pnodo)malloc(sizeof(tiponodo));
     cout<<"   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;//62
     cout<<"   ||||||||||||||||||||METROPOLI banco universal||||||||||||||||||||"<<endl;
     cout<<"   |||||||||||||||||||||||Le da la bienvenida|||||||||||||||||||||||"<<endl;
     cout<<"   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
     cout<<"   Estimado cliente: Introduzca su numero de cedula"<<endl;
     cin>>     creado_vip->cedula;
     cout<<"   Pronto sera atendido"<<endl;
     if ((*cola_vip)==NULL){
         creado_vip->siguiente=*cola_vip;
         *cola_vip=creado_vip;
     }else{
         aux_2=*cola_vip;
         while(aux_2!=NULL){
             if(aux_2->siguiente==NULL){
                creado_vip->siguiente=aux_2->siguiente;
                aux_2->siguiente=creado_vip;
                aux_2=aux_2->siguiente;
             }                                                  
             aux_2=aux_2->siguiente;
         }
     }                                                                                           
}

void mostrar_cola_vip (cola cola_vip){
    cola aux_2;
    aux_2=cola_vip;
    if(aux_2==NULL){
       cout<<"No hay clientes V.I.P en cola"<<endl;
    }else{
       while(aux_2!=NULL){
           cout<<"Cedula: "<<aux_2->cedula<<endl;
           cout<<""<<endl;
           cout<<"* Clientes ordenados por orden de llegada((((((SIMCOLAS))))))"<<endl;
           aux_2=aux_2->siguiente;
       }
    }
}
                                                                                                                        
void pop (cola *cola_n){
     
     if((*cola_n)==NULL){
         cout<<"No hay clientes en cola ((((((SIMCOLAS))))))"<<endl;
         cout<<""<<endl;
     }
                     
     if((*cola_n)!=NULL){
         cout<<"Cliente: "<<(*cola_n)->cedula;
         cout<<" es su turno"<<endl;
         *cola_n=(*cola_n)->siguiente;
         free(cola_n);
         system("PAUSE");
         cout<<""<<endl;
      }
                          
      if((*cola_n)==NULL){
          cout<<"No hay clientes en cola ((((((SIMCOLAS))))))"<<endl;
          cout<<""<<endl;
      }else{
                                 
          cout<<"Cliente: "<<(*cola_n)->cedula;
          cout<<" es su turno"<<endl;
          *cola_n=(*cola_n)->siguiente;
          free(cola_n);
          system("PAUSE");
          cout<<""<<endl;
       }
}
                                
void pop_vip(cola *cola_vip){
                                     
     if(cola_vip!=NULL){
         cout<<"Cliente: "<<(*cola_vip)->cedula;
         cout<<" es su turno"<<endl;                          
         *cola_vip=(*cola_vip)->siguiente;
         free(cola_vip);
      }else{
          cout<<"No hay usuarios V.I.P en cola ((((((SIMCOLAS))))))"<<endl;
      }
}
                                                         
                                                         
                          
void menu(); 
void Insertar();
void insertar_vip();
void mostrar_cola();
void mostrar_colavip();
void solicitar_numero();
void salir();

 
struct perly{
char uxer[];
}data;

struct perly *p = &data;


int main(int argc, char *argv[])
{
    
    system("color 0a");
    
    cout<<"                         *                *                   *     "<<endl;
    cout<<"             *                                     *                "<<endl;
    cout<<"     *              |           *             *        *         *  "<<endl;
    cout<<"          *        -+-                 *                            "<<endl;
    cout<<"       __           |      *             *          *        *      "<<endl;
    cout<<"   ___|  |   *     _|_              *    ____    ____               "<<endl;
    cout<<"   [_]|°°|__      _| |_        *    |   |....|  |....|    *     *   "<<endl;     
    cout<<"      |     |   _|[] []|_    ___    |   |....|  | ___|__            "<<endl;
    cout<<"   [_]|  °° |__|_  ______|  |   |  |_|  |....|  || -- - |   *     * "<<endl;
    cout<<"      |________  |__     |  |# #|  |_|  |....|  || - -- |  _____    "<<endl;
    cout<<"   [_]| _____ |     |__[]|  |   |  |_|  |....|__|| -- - | |* * *|   "<<endl;
    cout<<"      | [___] |        |__  |# #|  |_|  |....|__|| -- -_|_|* * *|   "<<endl;
    cout<<"   [_]|       | °°        | |   |__| |__|....|  || ___|* *|* * *|   "<<endl;
    cout<<"      | _____ |           |__  #|_______|....|  | |* *|* *|* * *|   "<<endl;    
    cout<<"   [_]| [___] |       °°     |__|_______|__  |  | |* *|* *|* * *|   "<<endl;
    cout<<"      |       |            __|_____________|__    |* *|* *|* * *|   "<<endl;
    cout<<"   [_]| _____ |  °°      _|___________________|_  |* *|* *|* * *|   "<<endl;
    cout<<"      | [___] |         |_______________________|  ______________   "<<endl;
    cout<<"    __|_______|_________|_______________________| _________________ "<<endl;
    cout<<"   |_______________________________________________________________|"<<endl;
    cout<<"   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;//62
    cout<<"   ||||||||||||||||||||METROPOLI banco universal||||||||||||||||||||"<<endl;
    cout<<"   ||||||||||||Sistema Integral para el Manejo de COLAS|||||||||||||"<<endl;
    cout<<"   |||||||||||||||||||||||||||||SIMCOLAS||||||||||||||||||||||||||||"<<endl;
    cout<<"   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
    cout<<"   |||||||||Creado por:  Luis DIego Gomez Arredondo       ||||||||||"<<endl;
    cout<<"   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
    cout<<"   Login: ";
    char usuario[6] = "luis";
    cin.getline(p->uxer,6);
    
    if (strcmp(p->uxer,usuario) == 0) {
                                cout<<"Bienvenid@ al sistema "<<endl; menu();
                                cout<<""<<endl;
                                }else{
                                      cout<<"Acceso Denegado. Consulte al Admisnistrador "<<endl;
                                      }                                                                         

    system("PAUSE");
    return EXIT_SUCCESS;
}
void menu() {
     short a;
     do { 

         cout<<""<<endl;
         cout<< "0 - Agregar Cliente"<<endl;
         cout<< "1 - Agregar Cliente V.I.P"<<endl;
         cout<< "2 - Solicitar Numero"<<endl;
         cout<< "3 - Mostrar Cola"<<endl;
         cout<< "4 - Mostrar Cola V.I.P"<<endl;
         cout<< "5 - Salir del Sistema"<<endl;
         cout<<""<<endl;      

         fflush(stdout);

         cout<<"Opcion #:";
         cin>>a;
         cout<<""<<endl;
         
         if (a == 5)
             exit(1);
         
         switch(a){
         case 0 :
             Insertar();
             break;
                              
         case 1 :
             insertar_vip();
             break;

         case 2 :
             solicitar_numero(); 
             break;
                                  
         case 3 :
             mostrar_cola();
             break;

         case 4 :
             mostrar_colavip();                    
             break;

         case 5 :
             salir();
             break;
                                                 
         default :
             puts("Usted no ha seleccionado nada, porfavor seleccione algo\n");
             break;
         };
     } while (1);
}                                                         

void Insertar(){
     insertar(&cola_n);
     }
void insertar_vip(){
     insertar(&cola_vip);
}
          
void mostrar_cola(){
      mostrar_cola(cola_n);            
}
               
void mostrar_colavip(){
      mostrar_cola_vip(cola_vip);
}
                    
void solicitar_numero(){
      pop(&cola_n);
                         
      if(cola_vip!=NULL){
           pop_vip(&cola_vip);
      }else{
           cout<<"No hay cliente V.I.P en cola ((((((SIMCOLAS))))))"<<endl;
      }
                         
}
                         
void salir(){
}


void getSafar(){


      int mes, dia;
      cout<<"\t\t\tSIGNO ZODIACAL"<<endl;
      cout<<"(1)Enero  \t(2)Febrero  \t(3)Marzo  \t(4)Abril"<<endl;
      cout<<"(5)Mayo  \t(6)Junio     \t(7)Julio  \t(8)Agosto"<<endl;
      cout<<"(9)Septiembre  \t(10)Octubre  \t(11)Noviembre  \t(12)Diciembre"<<endl<<endl;
      cout<<"Ingrese la fecha de su cumplea"<<char(164)<<"o (dia y mes)"<<endl;
      cin>>dia>>mes;
      switch(mes)
      {
/*enero*/       case 1:if(dia<21) cout<<"Capricornio"<<endl;
                        else      cout<<"Acuario"<<endl;break;
 
/*febrero*/     case 2:if(dia<21) cout<<"Acuario"<<endl;
                        else      cout<<"Piscis"<<endl;break;
 
/*marzo*/       case 3:if(dia<21) cout<<"Piscis"<<endl;
                        else      cout<<"Aries"<<endl;break;
 
/*abril*/       case 4:if(dia<21) cout<<"Aries"<<endl;
                        else      cout<<"Tauro"<<endl;break;
 
/*mayo*/        case 5:if(dia<22) cout<<"Tauro"<<endl;
                        else      cout<<"Geminis"<<endl;break;
 
/*junio*/       case 6:if(dia<22) cout<<"Geminis"<<endl;
                        else      cout<<"Cancer"<<endl;break;
 
/*julio*/       case 7:if(dia<23) cout<<"Cancer"<<endl;
                        else      cout<<"Leo"<<endl;break;
 
/*agosto*/      case 8:if(dia<23) cout<<"Leo"<<endl;
                        else      cout<<"Virgo"<<endl;break;
 
/*septiembre*/  case 9:if(dia<24) cout<<"Virgo"<<endl;
                        else      cout<<"Libra"<<endl;break;
 
/*octubre*/     case 10:if(dia<25)cout<<"Libra"<<endl;
                        else      cout<<"Escorpio"<<endl;break;
 
/*noviembre*/   case 11:if(dia<23)cout<<"Escorpio"<<endl;
                        else      cout<<"Sagitario"<<endl;break;
 
/*diciembre*/   case 12:if(dia<22)cout<<"Sagitario"<<endl;
                        else      cout<<"Capricornio"<<endl;break;
 
                default:cout<<"INGRESE UNA FECHA VALIDA"<<endl;
      }
cin.ignore();return 0;
}

void getTrabajo(){
	    string apno;
    float hrtr,tahr,subt,boni,tota;
    cout<<"Calculos de pagos\n\n";
    cout<<"Nombres:\t";cin>>apno;
    cout<<endl<<endl<<"Horas Trabajadas:\t";cin>>hrtr;
    if (hrtr<=0)
        cout<<"No trabajo nada"<<endl;else
    {cout<<"Tarifa por hora:\t";cin>>tahr;
    subt=hrtr*tahr;
    if(hrtr>192)
        boni=subt*0.05;
    else
        boni=subt*0.03;
    tota=subt+boni;
    cout<<"El sub total es:\t"<<subt<<endl;
    cout<<"La bonifiacion es:\t"<<boni<<endl;
    cout<<"El total a pagar es:\t"<<tota<<endl<<endl;
    }cin.ignore(); return 0;

}

int getPitagoras(){
	    cout<<"TRIANGULO DE PITAGORAS"<<endl<<endl;
    float a,b,c;
    cout<<"Ingrese el Primer cateto"<<endl;
    cin>>a;
    cout<<"Ingrese el Segundo cateto"<<endl;
    cin>>b;
    c=sqrt(pow(a,2)+pow(b,2));
 
    cout<<"La Hipotenusa es:"<<"\n"<<c<<endl<<endl;
     
    cout<<"\t"<<"_\\"<<endl;
    cout<<"\t"<<"___\\"<<endl;
    cout<<"\t"<<"_____\\"<<endl;
    cout<<"\t"<<"_______\\"<<endl;
    cout<<"\t"<<"_________\\"<<endl;
    cout<<"\t"<<a<<"__________"<<c<<endl;
    cout<<"\t"<<"_____________\\"<<endl;
    cout<<"\t"<<"_______________\\"<<endl;
    cout<<"\t"<<"_________________\\"<<endl;
    cout<<"\t"<<"_________"<<b<<"__________\\"<<endl<<endl;
     
 
    cin.ignore();
    return 0;
 
}


