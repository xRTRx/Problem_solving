#include <iostream>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
 public:
  static ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    int sum = 0;
    ListNode *r1;
    ListNode **r2 = &r1;
	while (l1 != nullptr || l2 != nullptr || sum > 0){
	  if (l1 != nullptr){
	    sum += l1->val;
	    l1 = l1->next;
	  }
	  if (l2 != nullptr){
	    sum += l2->val;
	    l2 = l2->next;
	  }
	  *r2 = new ListNode(sum%10);
	  sum /= 10;
	  r2 = &((*r2)->next);
	}
	return r1;
  }
};

int main() {
  ListNode l1(2), l2(4, &l1), l3(3, &l2); // l3->l2->l1
  ListNode n1(5), n2(6, &n1), n3(4, &n2); // n3->n2->n1
//  ListNode l1(2), l2(4, &l1), l3(3, &l2), l4(1, &l3);
//  ListNode n1(5), n2(6, &n1), n3(4, &n2);
  ListNode *t = Solution::addTwoNumbers(&l3, &n3);
  while (t != nullptr){
    cout << t->val << " ";
    t = t->next;
  }
  return 0;
}