ListNode* oddEvenList(ListNode* head) {
        if (head == NULL) return NULL;
        ListNode *odd = head,*even = head->next,*evenHead = even;
        while (even != NULL && even->next != NULL) {
            odd->next = even->next;
            odd = odd->next;
            even->next = odd->next;
            even = even->next;
        }
        odd->next = evenHead;
        return head;
    }
    

Input: head = [1,2,3,4,5]
Output: [1,3,5,2,4]
