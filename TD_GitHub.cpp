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
}

int exposant(int nbre, int exp){
	
	int res,i;
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
	float res;
	if(prix>=1000){
		res=prix*1,196;
	}
	else{
		res=prix*1,055;
	}
	return res;
}



//Fonctions réalisées par l'étudiant 2 :










//Fonctions réalisées par l'étudiant 3 :
