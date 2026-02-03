// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
// // // Method 1 : Using Map....
// //         map<ListNode* , bool>table;
// //         ListNode* temp = head;
// //         while(temp!=NULL){
// //             if(table[temp] == false){
// //                 table[temp] = true;
// //             }else{
// //                 return temp;
// //             }
// //             temp = temp->next;
// //         }
// //         return NULL;     

// // Method 2 : Using Floyd detection Method : two pointer approach

//         ListNode* slow = head;
//         ListNode* fast = head;

//         while(fast != NULL){
//             fast = fast->next;
//             if(fast!=NULL){
//                 fast = fast->next;
//                 slow = slow->next;
//             }

//             if(fast == slow){
//                 // it means cycle detected and now set slow at head 
//                 slow = head;
//                 break;
//             }
//         }
        
//         if(fast==NULL){
//             //it means no cycle detected
//             return NULL;
//         }

//         // move slow and fast one - one step each untill both would rach to starting point of cycle (it will happen when slow == fast)
//         // proof of this algo is important....

//         while(fast!=slow){
//             fast = fast->next;
//             slow = slow->next;
//         }

//         return slow;
//     }
// };