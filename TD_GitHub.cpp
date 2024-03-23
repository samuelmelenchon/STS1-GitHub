#include "TD_GitHub.h"

//Fonctions réalisées par l'étudiant 1 :

bool estMajeur(int age){

	bool result;
	if (age>=18){
		result=true;
	}
	else if (0<age<18){
		result=false;
	}
	else {
		result=true;
	}
	return result;
}

int exposant(int nbre, int exp){
	
	int res=0;
	int i;
	if(exp==0){
		res=1;
	}
	else{
		for(i=0;i<exp-1;i++){
			res=res*nbre;

			}
		}
	return res;
}


float TVA(int prix){
	float res=0;
	if(prix>=1000){
		res=prix*1,196;
	}
	else{
		res=prix*1,055;
	}
	return res;
}

int plusGrand(int a, int b, int c){
	int res=0;
	if(a>b){
		if(a>c){
			res=a;
		}
		else{
			res=c;
		}
	}
	else if (a<b){
		if(b>c){
			res=b;
		}
		else{
			res=c;
		}
	}
	return res;
}



//Fonctions réalisées par l'étudiant 2 :

bool estPair(int nb)
{
	bool res;
	if(nb%2==0)
	{
		res=true;
	}
	else 
	{
		res=false;
	}
	return res;
}



int sommeNombre(int nb)
{
	int res=0;

	while(nb!=0)
	{
		res=nb+res;
		nb--;
	}
	return res;
}


float salaireNet(int salaire)
{
	float salairenet=0;
	float prime=0;
	salairenet=salaire *0.77;
	prime=salairenet*1.12;
	
	return prime;
}

int plusPetit(int a, int b, int c)
{
	int res=0;
	if(a<b){
		if(a<c){
			res=a;
		}
		else{
			res=c;
		}
	}
	else if (b<a){
		if(b<c){
			res=b;
		}
		else{
			res=c;
		}
	}
	return res;
}




//Fonctions réalisées par l'étudiant 3 :
