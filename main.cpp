struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(nullptr) {}
};
class Solution {
public:
  ListNode *removeElements(ListNode *head, int val) {
    ListNode *virtualHead = new ListNode(0);
    virtualHead->next = head;
    ListNode * index = virtualHead;
    while (index != nullptr &&index->next!=nullptr) {
      if(index->next->val == val){
        ListNode * temp = index-> next;
        index->next = index->next->next;
        delete(temp);
      }else{
        index = index->next;
      }
    }
    ListNode * temp = virtualHead;
    virtualHead = temp->next;
    delete(temp);
    return virtualHead;
  }
};

