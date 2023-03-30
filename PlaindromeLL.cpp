//Approach 1: Create an array, push elements of LL in the array and check if array is palindrome or not

#include<vector>
class Solution{
  public:
  
    bool checkPalindrome(vector<int>arr){
        int n=arr.size();
        int s=0;
        int e=n-1;
        while(s<=e){
            if(arr[s]!=arr[e]){
                return 0;
            }
            s++;
            e--;
        }
        return 1;
    }
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        vector<int>arr;
        Node* temp=head;
        while(temp!=NULL){
            arr.push_back(temp->data);
            temp=temp->next;
        }
        return checkPalindrome(arr);
    }
};
