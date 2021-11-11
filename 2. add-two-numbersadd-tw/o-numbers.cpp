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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);//더미 리스트 노드 생성
        ListNode* tmp = &dummy; //tmp는 dummy의 주솟값을 가진다.
        
        int extra=0;//리스틔의 합이 10이 넘어갈 것을 대비해서 extra추가 
        while(l1||l2||extra){
            //배열 l1이랑 배열 l2이랑 carry 안에 값이 모두 사라질 때까지 반복
            int sum = (l1 ? l1->val : 0)+(l2?l2->val : 0) + extra;
            //합은 l1 l2 각각에 값이 있을 때 만 더해준다. 
            //해당자리에 값이 없으면 0을 더해줌
            extra = sum/10;//carry의값은 10의 1부분이므로 10을 나눠줌
            tmp->next = new ListNode(sum % 10);
            //new ListNode를 생성하고 합읜 나머지 부분으로 value를 추가한다.
            tmp = tmp->next;//tmp리스트를 다음 리스트로 이동한다.
            l1 = l1?l1->next:l1;
            l2 = l2?l2->next:l2;
            //l1 l2가 next노드가 있으면 이동하고 아니면 현재 주소를 리턴한다.
        }
        
        return dummy.next;
        
    }
};
