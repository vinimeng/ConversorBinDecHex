#include <stdio.h>
#include <stdlib.h>

int lerdec(int numdec, int aux6){
	aux6=0;
	while(aux6==0){
	printf("\nEscreva o numero decimal(0-4095): ");
	scanf("%d", &numdec);
	if(numdec>=0 && numdec<4096) aux6=1;
	else;
	}
	return numdec;
}

void lerbin(char numbin2[12], int contador, int numbin[11], int help, char basenova, char igual, int numdec, int numhex[2], int aux6, int aux, int aux4){
	for(contador=0; contador<=11; contador++){
    	numbin2[contador]='0';
    }
    aux6=0;
    aux=0;
    while(aux6==0){
    aux4=0;
	printf("\nEscreva o numero binario com os zeros a esquerda (12bits): ");
	scanf("%s", numbin2);
	for(contador=0; contador<=11; contador++){
		switch(numbin2[contador]){
			case '0':
				numbin[contador]=0;
				aux4=aux4+1;
				break;
			case '1':
				numbin[contador]=1;
				aux4=aux4+1;
				break;
			default:
				printf("\nNumero binario so eh formado por 0s e 1s. E nao esqueca dos zeros a esquerda!\n\n");
				aux4=aux4+22;
				break;
		}
    }
    if(aux4<15) aux6=1;
    else if(aux4>15) aux6=0;
	}
	while(aux==0){
	printf("\nConversao: ");
	scanf(" %c", &basenova);
	igual='p';
	while(igual != '='){
		printf("\nIgual: ");
		scanf(" %c", &igual);
		if(igual=='='){
			switch(basenova){
				case 'd': 
					numdec=bindec(numdec, numbin); 
					printf("\n\nNumero Decimal: %d\n\n", numdec);
					aux=1;
					break;
				case 'b': 
					help=0;
					printf("\nNumero Binario: ");
    				for(contador=0; contador<=11; contador++){
    					if(numbin[contador] != 0){
        				help=1;
        				}
        				if(help != 0){                                 
    					printf("%d", numbin[contador]);
    					}
					}
    				printf("\n\n");
    				aux=1;
    				break;
				case 'h':
					numdec=bindec(numdec, numbin);
					dechex(numdec, contador, numhex, help);
					aux=1;
					break;
				case 'D':
					numdec=bindec(numdec, numbin); 
					printf("\n\nNumero Decimal: %d", numdec);
					aux=1;
					break;
				case 'B':
					help=0;
					printf("\nNumero Binario: ");
    				for(contador=0; contador<=11; contador++){
    					if(numbin[contador] != 0){
        				help=1;
        				}
        				if(help != 0){                                 
    					printf("%d", numbin[contador]);
    					}
					}
    				printf("\n\n");
    				aux=1;
    				break;
				case 'H':
					numdec=bindec(numdec, numbin);
					dechex(numdec, contador, numhex, help);
					aux=1;
					break;
				default: printf("\n\nConversao invalida!\n\n"); break;
			}
			igual='=';	
		}
		else igual='p';
	}
	}
}

int bindec(int numdec, int numbin[11])
{
    numdec=(numbin[0]*(2048))+(numbin[1]*(1024))+(numbin[2]*(512))+(numbin[3]*(256))+(numbin[4]*(128))+(numbin[5]*(64))+(numbin[6]*(32))+(numbin[7]*(16))+(numbin[8]*(8))+(numbin[9]*(4))+(numbin[10]*2)+(numbin[11]*1);
    return numdec;
}

void lerhex(int numdec, char numhex2[3], int numhex[2], int contador, int help, char basenova, char igual, int numbin[11], int aux6, int aux, int aux4){
	aux6=0;
    aux=0;
    while(aux6==0){
    aux4=0;
	printf("\nEscreva o numero hexadecimal com os zeros a esquerda (3 digitos): ");
	scanf("%s", numhex2);
	for(contador=0; contador<=2; contador++){
		switch(numhex2[contador]){
			case '0':
    			numhex[contador]=0;
    			aux4=aux4+1;
    			break;
    		case '1':
    			numhex[contador]=1;
    			aux4=aux4+1;
   				break;
    		case '2':
    			numhex[contador]=2;
    			aux4=aux4+1;
				break;
   			case '3':
    			numhex[contador]=3;
    			aux4=aux4+1;
    			break;
   			case '4':
    			numhex[contador]=4;
    			aux4=aux4+1;
   				break;
    		case '5':
    			numhex[contador]=5;
    			aux4=aux4+1;
   				break;
			case '6':
    			numhex[contador]=6;
    			aux4=aux4+1;
    			break;
 			case '7':
    			numhex[contador]=7;
    			aux4=aux4+1;
    			break;
    		case '8':
    			numhex[contador]=8;
    			aux4=aux4+1;
    			break;
    		case '9':
    			numhex[contador]=9;
    			aux4=aux4+1;
    			break;
    		case 'A':
    			numhex[contador]=10;
    			aux4=aux4+1;
    			break;
    		case 'a':
    			numhex[contador]=10;
    			aux4=aux4+1;
    			break;
    		case 'B':
    			numhex[contador]=11;
    			aux4=aux4+1;
    			break;
    		case 'b':
    			numhex[contador]=11;
    			aux4=aux4+1;
    			break;
    		case 'C':
    			numhex[contador]=12;
    			aux4=aux4+1;
    			break;
    		case 'c':
    			numhex[contador]=12;
    			aux4=aux4+1;
    			break;
    		case 'D':
    			numhex[contador]=13;
    			aux4=aux4+1;
    			break;
    		case 'd':
    			numhex[contador]=13;
    			aux4=aux4+1;
    			break;
    		case 'E':
    			numhex[contador]=14;
    			aux4=aux4+1;
    			break;
    		case 'e':
    			numhex[contador]=14;
    			aux4=aux4+1;
    			break;
    		case 'F':
    			numhex[contador]=15;
    			aux4=aux4+1;
    			break;
    		case 'f':
    			numhex[contador]=15;
    			aux4=aux4+1;
    			break;
    		default:
    			printf("\n\nEsse numero nao eh hexadecimal! E nao esqueca dos zeros a esquerda!\n\n");
    			aux4=aux4+22;
    			break;
		}
	}
	if(aux4<15) aux6=1;
    else if(aux4>15) aux6=0;
	}
	while(aux==0){
	printf("\nConversao: ");
	scanf(" %c", &basenova);
	igual='p';
	while(igual != '='){
		printf("\nIgual: ");
		scanf(" %c", &igual);
		if(igual=='='){
			switch(basenova){
				case 'd': 
					numdec=hexdec(numdec, numhex); 
					printf("\n\nNumero Decimal: %d\n\n", numdec);
					aux=1;
					break;
				case 'b': 
					numdec=hexdec(numdec, numhex); 
					decbin(numdec, contador, numbin, help);
					aux=1;
					break;
    				break;
				case 'h':
					help=0;
					printf("\nNumero Hexadecimal: ");
    				for(contador=0; contador<=2; contador++){
    					if(numhex[contador] != 0){
        				help=1;
        				}
        				if(help != 0){                                 
    					printf("%d", numhex[contador]);
    					}
					}
    				printf("\n\n");
    				aux=1;
					break;
				case 'D':
					numdec=hexdec(numdec, numhex); 
					printf("\n\nNumero Decimal: %d", numdec);
					aux=1;
					break;
				case 'B':
					numdec=hexdec(numdec, numhex); 
					decbin(numdec, contador, numbin, help);
					aux=1;
    				break;
				case 'H':
					help=0;
					printf("\nNumero Hexadecimal: ");
    				for(contador=0; contador<=2; contador++){
    					if(numhex[contador] != 0){
        				help=1;
        				}
        				if(help != 0){                                 
    					printf("%d", numhex[contador]);
    					}
					}
    				printf("\n\n");
    				aux=1;
					break;
				default: printf("\n\nConversao invalida!\n\n"); break;
			}
			igual='=';	
		}
		else igual='p';
	}
	}
}

int hexdec(int numdec, int numhex[2]){
	numdec=(numhex[0]*(16*16))+(numhex[1]*(16))+(numhex[2]*(1));
	return numdec;
}

void decbin(int numdec, int contador, int numbin[11], int help){
	help=0;
    for(contador=0; contador<=11; contador++){
    	numbin[contador]=0;
    }
	for (contador=11; contador>=0; contador--){
        numbin[contador]=numdec%2;
        numdec=numdec/2;
    }
    printf("\nNumero Binario: ");
    for(contador=0; contador<=11; contador++){
    	if(numbin[contador] != 0){
        	help=1;
        }
        if(help != 0){                                 
    		printf("%d", numbin[contador]);
    	}
	}
    printf("\n\n");
}

void dechex(int numdec, int contador, int numhex[2], int help){
	help=0;
   	for(contador=0; contador<=2; contador++){
    	numhex[contador]=0;
    }
	for (contador=2; contador>=0; contador--){
        numhex[contador]=numdec%16;
        numdec=numdec/16;
    }
    printf("\nNumero Hexadecimal: ");
    for(contador=0; contador<=2; contador++){
    	if(numhex[contador] != 0){
        	help=1;
        }
        if(help != 0){
			if(numhex[contador]>9){
			if(numhex[contador] == 10) printf("A"); 
			if(numhex[contador] == 11) printf("B");
			if(numhex[contador] == 12) printf("C");
			if(numhex[contador] == 13) printf("D");
			if(numhex[contador] == 14) printf("E");
			if(numhex[contador] == 15) printf("F");
     	} 
		else if(numhex[contador]<10){
			printf("%d", numhex[contador]);
		}
    	}    
	}
    printf("\n\n");
}

int main(int argc, char *argv[]) {
	char base, numbin2[12], numhex2[3], basenova, igual, key;
	int numdec, contador, help, numbin[11], numhex[2], aux, aux1, aux5, aux4, aux6;
	printf("Bem-vindo ao conversor!\n\n1. Escolha uma base: d, b ou h. (Decimal, Binario e Hexadecimal)\n\n2. Escreva o numero.\n\n3. Escolha para qual base quer converter: d, b ou h.\n\n4. Digite = (igual).");
	aux5=0;
	while(aux5==0){
	key='+';
	aux=0;
	aux1=0;
	aux4=0;
	while(aux1==0){
	printf("\n\nBase: ");
	scanf(" %c", &base);
	switch(base){
		case 'd':
			numdec=lerdec(numdec, aux6);
			while(aux==0){
			printf("\nConversao: ");
			scanf(" %c", &basenova);
			igual='p';
			while(igual != '='){
				printf("\nIgual: ");
				scanf(" %c", &igual);
				if(igual=='='){
					switch(basenova){
						case 'd': printf("\nNumero decimal: %d\n\n", numdec); aux=1; break;
						case 'b': decbin(numdec, contador, numbin, help); aux=1; break;
						case 'h': dechex(numdec, contador, numhex, help); aux=1; break;
						case 'D': printf("\nNumero decimal: %d\n\n", numdec); aux=1; break;
						case 'B': decbin(numdec, contador, numbin, help); aux=1; break;
						case 'H': dechex(numdec, contador, numhex, help); aux=1; break;
						default: printf("\n\nConversao invalida!\n\n"); break;
					}
					igual='=';	
				}
				else igual='p';
			}
			}
			aux1=1;
			break;
		case 'D': 
			numdec=lerdec(numdec, aux6);
			while(aux==0){
			printf("\nConversao: ");
			scanf(" %c", &basenova);
			while(igual != '='){
				printf("\nIgual: ");
				scanf(" %c", &igual);
				igual='p';
				if(igual=='='){
					switch(basenova){
						case 'd': printf("\nNumero decimal: %d\n\n", numdec); aux=1; break;
						case 'b': decbin(numdec, contador, numbin, help); aux=1; break;
						case 'h': dechex(numdec, contador, numhex, help); aux=1; break;
						case 'D': printf("\nNumero decimal: %d\n\n", numdec); aux=1; break;
						case 'B': decbin(numdec, contador, numbin, help); aux=1; break;
						case 'H': dechex(numdec, contador, numhex, help); aux=1; break;
						default: printf("\n\nConversao invalida!\n\n"); break;
					}
					igual='=';	
				}
				else igual='p';
			}
			}
			aux1=1;	
			break;
		case 'b':
			lerbin(numbin2, contador, numbin, help, basenova, igual, numdec, numhex, aux6, aux, aux4);
			aux1=1;
			break;
		case 'B':
			lerbin(numbin2, contador, numbin, help, basenova, igual, numdec, numhex, aux6, aux, aux4);
			aux1=1;
			break;
		case 'h':
			lerhex(numdec, numhex2, numhex, contador, help, basenova, igual, numbin, aux6, aux, aux4);
			aux1=1;
			break;
		case 'H':
			lerhex(numdec, numhex2, numhex, contador, help, basenova, igual, numbin, aux6, aux, aux4);
			aux1=1;
			break;
		default:
			printf("\n\nEsta base eh invalida!\n\n");
	}	
	}
	while(aux4==0)
    	{
    		printf("Quer fazer outra conversao?(y/n): ");
    		scanf(" %c", &key);
    		switch(key)
    		{
    			case 'y':
    				aux5=0;
    				aux4=1;
    				break;
    			case 'Y':
    				aux5=0;
    				aux4=1;
    				break;
    			case 'n':
    				aux5=1;
    				aux4=1;
    				break;
    			case 'N':
    				aux5=1;
    				aux4=1;
    				break;
    			default:
    				aux5=0;
    				break;
    		}
    	}
    	printf("\n");
    }
	system("PAUSE");
	return 0;
}
