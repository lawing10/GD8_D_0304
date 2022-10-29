#include "header.h""



int main(int argc, char *argv[]) {
	ListParent L;
	adrParent P;
	adrChild C;
	int menu,idmidP,age;
	string name, targetName;
	person person;
	char idC;
	createEmpty(&L);
	
	do{
		system("cls");
		printf("Multilist");
		printf("\n1. Menu Parent");
		printf("\n2. Menu Child");
		printf("\n3. Print All");
		switch(menu)
		{
			case 1 :
			printf("\n1.Menu Parent");
			printf("\n\t1 Insert First");
			printf("\n\t2. Insert Last");
			printf("\n\t3. Insert After");
			printf("\n\t4. Delete First");
			printf("\n\t5. Delete Last ");
			printf("\n\t6. Delete After");
			printf(">> : ");scanf("%d",&menu);
			switch(menu)
			{
				case 1 :
					printf("\tMasukan nama: ") fflush(stdin); gets(name);
					printf("\tMasukan umur: ") scanf("%d", &age);
					person = makePerson(name, age);
					insertFirstParent(&L, person);
					break;
				case 2 : 
					printf("\tMasukan nama: "); fflush(stdin); gets(name);
					printf("\tMasukan umur: "); scanf("%d", &age);
					person = makePerson(name, age);
					break;
				case 3 :
					printf("\tMasukan nama: "); fflush(stdin); gets(name);
					printf("\tMasukan umur "); scanf("d", &age);
					person = makePerson(name, age);
					printf("\tMasukan nama Parent yg akan disisipkan data setelahnya : "); fflush(stdin); gets(targetName);
					insertAfterParent(&L, targetName,person);
					break;
				case 4 : deleteFirstParent(&L);
					break;
				case 5 : deleteLastParent(&L);
					break;
				case 6 : 
					printf("\tMasukan nama parent yg akan dihapus data setelahnya : : ");fflush(stdin); gets(targetName);
					deleteAfterParent(&L,targetName);
					break;
			}
			break;
			case 2 :
			printf("\n2.Menu Child");
			printf("\n\t1. Insert First");
			printf("\n\t2. Insert Last");
			printf("\n\t3. Delete First");
			printf("\n\t4. Delete Last");
			printf("\n\t5. Printf Child By Parent");
			printf(">> : ");scanf("%d",&menu);
			switch(menu)
			{
				case 1 :
					printf("\tMasukkan nama parent: "); fflush(stdin); gets(targetName);
					printf("\nMasukkan IDChild : ");scanf(" %c",&idC);
					insertFirstChild(&L,targetName,idC);
					break;
				case 2 : 
					printf("\tMasukkan nama parent : "); fflush(stdin); gets(tergetName);
					printf("\nMasukkan IDChild : ");scanf(" %c",&idC);
					insertLastChild(&L,targetName);
					break;
				case 3 : 
					printf("\tMasukkan nama parent: "); fflush(stdin); gets(targetName);
					deleteFirstChild(&L,targetName);
					break;
				case 4 :
					printf("\tMasukan nama parent: "); fflush (stdin); gets(tergetName);
					deleteLastChild(&L,targetName);
					break;
				case 5 :
					printf("\tMasukkan nama parent: "); fflush(stdin); gets(targetName);
					printChildByParent(L,targetName);
					break;
			}
			break;
			case 3 :
				printAll(L);
				break;
		}getch();
	}while(menu!=0);
	return 0;
}
