#include <stdio.h>
#include <stdlib.h>

node* addNode(node* head)
{
    int stdNo;
    node *p *q;
    node *newNode= (node*) malloc (sizeof(node));
    printf("Yeni o�rencinin numarasini giriniz: ", scanf("%d", &newNode->no));
    printf("Yeni o�rencinin ismini giriniz: ", scanf("%d", newNode->isim));
    printf("Yeni o�rencinin yasini giriniz: ", scanf("%d", &newNode->yas));

    printf("Yeni kayd�n std numarasini giriniz.\n");
    printf("listenin sonuna eklemek icin 0'a basiniz.");
    scanf("%d", &stdNo);

    p = head;
    if(p->no == stdNo)
    {
        newNode->next = p;
        head= newNode;
    }
    else
    {
        while(p->next != NULL && p->no != stdNo)
        {
            q=p;
            p=  p->next;
        }
        if(p->no == stdNo)
        {
            q->next = newNode;
            newNode -> next = p;
        }
        else if(p->next == NULL)
        {
            p->next = newNode;
            newNode -> next = NULL;
        }
    }

    return head;

}
