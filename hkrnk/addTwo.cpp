class ListNode{
    public:
    int val;
    ListNode* next;

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ans = new ListNode();
        int carry = 0;
        while(l1 != nullptr || l2 != nullptr)
        {
            int sum = carry + l1->val + l2 -> val;
            carry = sum / 10;
            ans->val = sum % 10;
            ans = ans->next;
            l1 = l1-> next;
            l2 = l2 -> next;
        }
        
    return ans;
        
    }
};

int main(){
ListNode *l1, *l2;
l1->val = 23;

    return 0;
}

