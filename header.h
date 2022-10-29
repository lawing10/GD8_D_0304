#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <windows.h>
#include <string.h>

typedef char string[100];
typedef struct tChild* adrChild;
typedef struct tParent* adrParent;

typedef struct {
	string name;
	int age;
}person;

typedef struct tChild{
	int id;
	adrChild nextChild;
}child;

typedef struct tParent{
	person person;
	adrParent nextParent;
	adrChild firstChild;
}parent;

typedef struct{
	adrParent first;
}ListParent;

void createEmpty(ListParent *L);
int isEmpty(ListParent L);
person makePerson(string name, int age);
int HaveChild(adrParent P);
adrParent AlokasiiP(person person);
adrParent FindParent(ListParent L,string name);
void insertFirstParent(ListParent *L,person databaru);
void insertLastParent(ListParent *L,person databaru);
void insertAfterParent(ListParent *L,string datasebelum,person databaru);

void deleteFirstParent(ListParent *L);
void deleteLastParent(ListParent *L);
void deleteAfterParent(ListParent *L, string datasebelum);
void printAll(ListParent L);

adrChild AlokasiC(char id);
void printChild(adrChild C);
void insertFirstChild(ListParent *L,string name, char idC);
void insertLastChild(ListParent *L,string name, char idC);
void deleteFirstChild(ListParent *L,string name);
void deleteLastChild(ListParent *L,string name);
void printChildByParent(ListParent L,string name);

