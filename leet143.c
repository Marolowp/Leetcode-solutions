#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;     
    struct ListNode *next;
};

struct ListNode* reverseList (struct ListNode* head){
    struct ListNode* prev = NULL;
    struct ListNode* curr = head;
    while (curr)
    {
        struct ListNode* nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    return prev;

}

void reorderList(struct ListNode* head);
 
int main(){
    
    struct ListNode *head = malloc(sizeof(struct ListNode));
    head->val = 1;
    head->next = malloc(sizeof(struct ListNode));
    head->next->val = 2;
    head->next->next = malloc(sizeof(struct ListNode));
    head->next->next->val = 3;
    head->next->next->next = malloc(sizeof(struct ListNode));
    head->next->next->next->val = 4;
    head->next->next->next->next = NULL;

    reorderList(head);

    struct ListNode *curr = head;
    while (curr) {
        printf("%d ", curr->val);
        curr = curr->next;
    }
    printf("\n");

    return 0;
}
void reorderList(struct ListNode* head) {
    if (!head || !head->next){
        return;
    }

    struct ListNode* advance1 = head, *advance2 = head;
    while (advance2->next && advance2->next->next){
        advance1 = advance1->next;
        advance2 = advance2->next->next;
    }

    struct ListNode* secondHalf = advance1->next;
    advance1->next = NULL;
    secondHalf = reverseList (secondHalf);

    struct ListNode* firstHalf = head;
    while(secondHalf){
        struct ListNode* k1 = firstHalf->next;
        struct ListNode* k2 = secondHalf->next;

        firstHalf->next = secondHalf;
        secondHalf->next = k1;

        firstHalf = k1;
        secondHalf = k2;
    }
}