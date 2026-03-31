/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* node = list1;
        std::vector<int> arr;

        if(list1 == nullptr and list2 == nullptr) return nullptr;

        while(node != nullptr){
            arr.push_back(node->val);
            node = node->next;
        }

        ListNode* node2 = list2;

        while(node2 != nullptr){
            arr.push_back(node2->val);
            node2 = node2->next;
        }

        std::sort(arr.begin(), arr.end());


        ListNode* result = new ListNode(arr[0]);
        ListNode* aux = result;

        for(int i = 1; i < arr.size(); i++){
            aux->next = new ListNode(arr[i]);
            aux = aux->next;
        }

        return result;

    }
};
