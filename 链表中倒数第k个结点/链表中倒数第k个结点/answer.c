#define _CRT_SECURE_NO_WARNINGS 1

//https://www.nowcoder.com/practice/529d3ae5a407492994ad2a246518148a
struct ListNode* FindKthToTail(struct ListNode* pListHead, int k) {
    // write code here
    struct ListNode* slow, * fast;
    slow = fast = pListHead;
    int i = 0;
    for (i = 0; i < k && fast != NULL; i++)
    {
        fast = fast->next;
    }
    if (i < k)
    {
        return NULL;
    }
    while (fast != NULL)
    {
        slow = slow->next;
        fast = fast->next;
    }

    return slow;
}
