#define _CRT_SECURE_NO_WARNINGS 1
//https://www.nowcoder.com/practice/d281619e4b3e4a60a2cc66ea32855bfa?tpId=49&&tqId=29370&rp=1&ru=/activity/oj&qru=/ta/2016test/question-ranking

class PalindromeList {
public:
    struct ListNode* reverseList(struct ListNode* head) {//��������
        struct ListNode* newhead = NULL;
        struct ListNode* next = NULL;
        struct ListNode* cur = head;
        while (cur)
        {
            next = cur->next;
            cur->next = newhead;
            newhead = cur;
            cur = next;
        }
        return newhead;
    }
    struct ListNode* middleNode(struct ListNode* head) {//�ҵ��м���
        struct ListNode* slow, * fast;
        fast = slow = head;
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    bool chkPalindrome(ListNode* A) {
        // write code here
        struct ListNode* mid = middleNode(A);//�ҵ��м�ڵ�
        struct ListNode* r_mid = reverseList(mid);//���������벿��
        while (A && r_mid)
        {
            if (A->val != r_mid->val)
                return false;
            A = A->next;
            r_mid = r_mid->next;
        }
        return true;
    }
};