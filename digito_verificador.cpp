#include <stdio.h>

int main(){
	
	int verificador, somatorio, div, n, cm, dm, mult, conta_corrente, d, u;
	
	scanf("%i", &n);
	
	cm = n/100000;
	dm = (n - (cm * 100000)) / 10000;
	mult = (n - (cm * 100000) - (dm * 10000)) / 1000;
	conta_corrente = (n - (cm * 100000) - (dm * 100000) - (mult * 1000)) / 100;	
	d = (n - (cm * 100000) - (dm * 10000) - (mult * 1000) - (conta_corrente * 100)) /10 ;
	u = (n - (cm * 100000) - (dm * 10000) - (mult * 1000) - (conta_corrente * 100) - (d*10));
	
	somatorio = ((u*2) + (d * 3 ) + (conta_corrente * 4) + (mult * 5 ) + (dm * 6 ) + (cm * 7));
	div = (somatorio % 11);
	verificador = (11 - div);
	printf ("%i\n", verificador);

return 0;
}








