#include<iostream> 
#include<vector> 
#include<unordered_map> 

using namespace std; 

class Solution{
public: 
     int maxFrequency(vector<int>& nums, int k){
       unordered_map<int ,int> count; 
       int maxK =0; 
       int baseCount =0;
       
       for(int n:nums){
         if(n==k) baseCount++; 
         else {
           count[n] = max(count[n], baseCount) +1; 
           maxK = max(maxK, count[n]-baseCount); 
         }
       }
       return baseCount+maxK; 
     }
};
int main(){
  vector<int> nums ={10,2,3,4,5,5,4,3,2,2}; 
  int  k=10 ; 
  Solution sol; 
  cout << sol.maxFrequency(nums, k) << endl ;
  return 0; 
}
