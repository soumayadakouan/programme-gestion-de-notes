programme de gestion des notes en langage c
#include <stdio.h>



int main()
{
    //write C code here
    int dimensionClasse1=13;
    int dimensionClasse2=15;
    //float
    classe1 [dimensionClasse1]={17,2,3,4,5,6,7,8,9,10,12,13};
    //float
    classe2[dimensionclasse2]={10,2,3,4,5,6,7,8,9,1,11,12,13,14,15};
    float classe1[dimensionClasse1];
    float classe2[dimensionClasse2];
    printf("veuillez entrer les moy notes de la classe1:\n");
    for (int i=0;i<dimensionClasse1;i++){
            printf("entrer la moy detudiant num%d:"i+1);
    scanf("%f",&classe1[i]);
    printf("la moy detudiant num %d est%f\n",i+1,classe1[i])
    }
    printf(veillez entrer les moy notes de la classe2:\n");
    for (int i=0;i<dimensionClasse2;i++){
        printf("entrer la moy detudiant num %d:",i+1);
        scanf("%f",&classe1[i]);
        printf("la moy detudiant num %d est %f\n";i+1,classe1[i]);
    }
      //tri des moyenne de la classe1
      for(int i=0;i<dimensionClasse1;i++){
            for(int j=0;j<dimensionClasse1-1;j++){
            if(classe1[j]>classe1[j+1]){
                    float temp=classe1[j];
                    classe1[j]=classe1[j+1];
                    classe1[j+1]=temp;
            }
            }
            }
            //tri des moyenne de la classe2
            for(int i=0 ;i<dimensionClasse2;i++){
               for (int j=0;j<dimensionClasse2;i++){
                if(classe2[j]>classe2[j+1]){
                    float temp=classe2[j];
                    classe2[j]=classe2[j+1];
                    classe2[j+1]=temp;
                }
               }

            }

printf("la grande moyenne de la classe 1 est %f\n",classe1[dimensionClasse1-1]);
    printf("la grande moyenne de la classe 2 est %f\n",classe1[dimensionClasse2-1]);
    printf("la petite moyenne de la classe 1 est %f\n",classe1[0]);
    printf("la petite moyenne de la classe 2 est %f\n",classe2[0]);

    // affichage des moyennes de la classe 1 sup ou egale a 10
    printf("les moyennes de la classe 1 sup ou egale a 10 sont :\n");
    for(int i=0;i<dimensionClasse1;i++){
        if(classe1[i]>=10){
            printf("eleve num %d a une moyenne de %f\n",i,classe1[i]);
        }
    }

    printf("les moyennes de la classe 2 sup ou egale a 10 sont :\n");
    for(int i=0;i<dimensionClasse2;i++){
        if(classe1[i]>=10){
            printf("eleve num %d a une moyenne de %f\n",i,classe1[i]);
        }
    }

    // fusion des deux tableaux class1 et class2
    int dimensionClasse3=dimensionClasse1+dimensionClasse2;
    int classes[dimensionClasse3];
    for(int i=0;i<dimensionClasse1;i++){
        classes[i]=classe1[i];
    }
    for(int i=0;i<dimensionClasse2;i++){
        classes[i+dimensionClasse1]=classe2[i];
    }
    // afficher les moyennes de tous les classes
    printf("les moyennes de la tous les classes sont :\n");
    for(int i=0;i<dimensionClasse3;i++){
        printf("eleve num %d a une moyenne de %f\n",i,classes[i]);
    }


    // tri des moyennes de la classes
    for(int i=0;i<dimensionClasse1+dimensionClasse2;i++){
        for(int j=0;j<dimensionClasse1+dimensionClasse2-1;j++){
            if(classes[j]>classes[j+1]){
                float temp=classes[j];
                classes[j]=classes[j+1];
                classes[j+1]=temp;
            }
        }
    }

    printf("la grande moyenne de tous les classes est %f\n",classes[dimensionClasse1+dimensionClasse2-1]);
    printf("la petite moyenne de tous les classes est %f\n",classes[0]);


    return 0;
}




