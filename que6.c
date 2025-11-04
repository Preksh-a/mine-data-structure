#include <stdio.h>
#include <stdlib.h>

struct Node { int data; struct Node *next; };

struct Node* insert(struct Node* h, int x) {
    struct Node *n = malloc(sizeof(struct Node));
    n->data = x; n->next = h; return n;
}

struct Node* delK(struct Node* head, int k) {
    struct Node *f = head, *s = head;
    for(int i=0;i<k;i++) f = f->next;
    if(!f) return head->next;
    while(f->next) { f=f->next; s=s->next; }
    struct Node *t = s->next; s->next = t->next; free(t);
    return head;
}

int main() {
    struct Node *h=NULL; int n,x,k;
    printf("Enter n: "); scanf("%d",&n);
    for(int i=0;i<n;i++){ scanf("%d",&x); h=insert(h,x); }
    scanf("%d",&k);
    h = delK(h,k);
    for(struct Node*p=h;p;p=p->next) printf("%d ",p->data);
}
