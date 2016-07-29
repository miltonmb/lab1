#include <iostream>

#include <stdio.h>

long factorial(long);
long metodo(long);

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
				
			}

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
