#define _CRT_SECURE_NO_WARNINGS 1

//https://www.nowcoder.com/practice/0e27e0b064de4eacac178676ef9c9d70?tpId=8&&tqId=11004&rp=2&ru=/activity/oj&qru=/ta/cracking-the-coding-interview/question-ranking


class Partition {
public:
    ListNode* partition(ListNode* pHead, int x) {
        // write code here
        struct ListNode* lessGuard, * lessTail, * greaterGuard, * greaterTail;
        lessGuard = lessTail = (struct ListNode*)malloc(sizeof(struct ListNode));
        greaterGuard = greaterTail = (struct ListNode*)malloc(sizeof(struct ListNode));
        lessGuard->next = NULL;
        greaterGuard->next = NULL;
        struct ListNode* cur = pHead;

        while (cur)
        {
            if (cur->val < x)
            {
                lessTail->next = cur;
                lessTail = cur;
            }
            else
            {
                greaterTail->next = cur;
                greaterTail = cur;
            }
            cur = cur->next;
        }
        lessTail->next = greaterGuard->next;
        greaterTail->next = NULL;

        pHead = lessGuard->next;
        free(lessGuard);
        free(greaterGuard);

        return pHead;
    }
};