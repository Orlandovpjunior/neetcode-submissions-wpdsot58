class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (!head) return nullptr;
        std::vector<int> arr;

        ListNode* curr = head;
        while (curr != nullptr) {
            arr.push_back(curr->val);
            curr = curr->next;
        }

        std::reverse(arr.begin(), arr.end());
        ListNode* dummy = new ListNode(arr[0]);
        ListNode* node = dummy;
        for(int i = 1; i < arr.size(); i++){
            node->next = new ListNode(arr[i]);
            node = node->next;
        }

        return dummy;
    }
};