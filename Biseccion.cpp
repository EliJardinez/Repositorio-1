#include <iostream>
#include <conio.h>
#include <String.h>
#include <windows.h>
#include <math.h>
#include <cctype>

void margen();

using namespace std;

void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }

int main(){
	system("color F5");
	char resp;
	int i,z;
	double a, b, xa, xb, fxa, fxb, xr, fxr, fxu, er;
do{
system("cls");	
gotoxy(40,3);cout<<"TEOREMA DE BISECCION";	
gotoxy(3,5);cout<<"F(x)= Senx+2x-1";
gotoxy(3,9);cout<<"Ingrese el limite [a] -->";
gotoxy(3,10);cout<<"Ingrese el limite [b] -->";
gotoxy(3,11);cout<<"Ingrese el numero de interaciones -->";
gotoxy(45,9);cin>>a;
gotoxy(45,10);cin>>b;
gotoxy(45,11);cin>>i;	
 
 if(a!=b){
   	system("cls");
   	for(z=1;z<=i;z++){
     	xa=a;
   	    xb=b;
   	    fxa=sin(a*3.14159/180)+2*(a)-1;
   	    fxb=sin(b*3.14159/180)+2*(b)-1;
   	    xr=(xa+xb)/2;
   	    fxr=sin(xr*3.14159/180)+2*(xr)-1;
   	    fxu=fxa*fxb;
   	    gotoxy(45,1);cout<<"T E O R E M A   D E   B I S E C C I O N";	
        gotoxy(53,2);cout<<"F(x)= Senx+2x-1";
   	    gotoxy(2,4);cout<<"n";
   	    margen();
   	    gotoxy(2,6+z*2);cout<<z;
   	    gotoxy(8,4);cout<<"Xa";
   	    gotoxy(8,6+z*2);cout<<xa;
		gotoxy(19,4);cout<<"Xb";
   	    gotoxy(19,6+z*2);cout<<xb;
   	    gotoxy(28,4);cout<<"F(xa)";
   	    gotoxy(26,6+z*2);cout<<fxa;
		gotoxy(40,4);cout<<"F(xb)";
   	    gotoxy(39,6+z*2);cout<<fxb;
   	    gotoxy(52,4);cout<<"Xr";
   	    gotoxy(51,6+z*2);cout<<xr;
        gotoxy(66,4);cout<<"F(xr)";
        gotoxy(64,6+z*2);cout<<fxr;
        gotoxy(79,4);cout<<"F(xa) * F(xb)";
        gotoxy(81,6+z*2);cout<<fxu;
        gotoxy(97,4);cout<<"Raiz";
        if(fxu<0){
        	gotoxy(99,6+z*2);cout<<"-";
    	    b=xr;
    	}
    	else{
    		gotoxy(99,6+z*2);cout<<"+";
		    a=xr;
    	}
   }
   gotoxy(3,23);cout<<"Xr=";cout<<xr;
   er=(xb-xa)/pow(2,i);
   gotoxy(3,24);cout<<"Er=";cout<<er;
   
 }
 else{
   gotoxy(3,10);cout<<"No se puede realizar metodo de biseccion";
  	
 }
gotoxy(3,25);cout<<"Desea reiniciar el programa [s/n] ?";cin>>resp;
}while(resp!='n');

}

void margen(){
	int b;
	for (b=0;b<=103;b++){
		gotoxy(2+b,3);
		cout<<"_";
		
	}
	for (b=0;b<=103;b++){
		gotoxy(2+b,5);
		cout<<"_";
		
	}
	for (b=0;b<=16;b++){
		gotoxy(1,4+b);
		cout<<"|";
		
	}
	for (b=0;b<=16;b++){
		gotoxy(105,4+b);
		cout<<"|";
		
	}
}

