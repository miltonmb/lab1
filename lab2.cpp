#include <iostream>

#include <stdio.h>

long factorial(long);

long metodo(long);

int metodo2(int);

int main (){
	int op = 0;
	char r = 'S';
	while(r == 's'|| r == 'S'){
		std::cout <<"Que ejercicio desea hacer: "<< "\n1.Ejercicio 1\n" << "2.Ejercicio 2\n";
		std::cin >> op;
			if(op == 1){
			long x = 1;
			while(x <= 100000){
				if(x == metodo(x)){
					std::cout<<"El numero: "<<x<<" es correcto!\n";
					++x;
				}else{
					++x;
				}
			}
		}

			if(op == 2){
				std::cout<<"Bienvenido\n";
				int n1 = 0;
				int n2 = 0;
				int n3 = 0;
				int n4 = 0;
				std::cout<<"Ingrese un numero: \n";
				std::cin>>n1;
				std::cout<<"Ingrese un numero: \n";
				std::cin>>n2;
				std::cout<<"Hola!\n";
				n3 = metodo2(n1);
				n4 = metodo2(n2);
				if(n3 == n2 && n4 == n1){
					std::cout<<"los numeros son amigos!\n";
				}else{
					std::cout<<"Ellos nos son amigos, son enemigos a MUERTE!!!";
				}

			}
				std::cout<<"DESEA CONTINUAR[s/n]: ";
				std::cin>>r;

		}
	}
	long metodo(long x){
		long res = 0;
		long suma = 0;
		while(x>0){
			res = x%10;
			x = x/10;
			suma += factorial(res);
		}
		return suma;
	}

	long factorial(long s){
		if(s==1 || s == 0){
			return 1;
		}else{
			return s * factorial(s-1);
		}
	}

	int metodo2(int x){
		long suma = 0;
		for (int i = 1; i < x; i++){
			if(x%i == 0){
				suma+= i;
			}
		}
		return suma;
	}
