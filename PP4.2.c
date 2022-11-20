#include<stdio.h>
#include<stdlib.h>

struct element {
    int value;
    struct element *leftelement;
    struct element *rightelement;
    
}*root;

void search(int value){
    
struct element *currPos=root;
printf("start..");
while (currPos->value!=value) {
    if (currPos!=NULL) {
        printf("%d", currPos->value);
    if (value>currPos->value)currPos=currPos->rightelement;
    else currPos=currPos->leftelement;
    if (currPos==NULL)printf("notfound");
    }
}
}

    void insert(int value) {
struct element *tempelement = (struct element*) malloc(sizeof(struct element));
struct element *currPos;
struct element *parent;
tempelement->value=value;
tempelement->rightelement=NULL;
tempelement->leftelement=NULL;
        }
        
int main() {
    insert(50);
    insert(30);
    insert(20);
    insert(40);
    insert(70);
    insert(60);
    insert(80);
    search(30);
    return 0;
}