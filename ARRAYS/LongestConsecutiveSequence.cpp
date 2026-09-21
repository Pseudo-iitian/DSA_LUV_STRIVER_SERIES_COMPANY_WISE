// largest conecutive sequence in an unsorted array of integers. The algorithm uses a hash set to store the unique elements of the array, and then iterates through each element to find the length of the longest consecutive sequence. The time complexity is O(n) and the space complexity is O(n) due to the use of the hash set.
#include<bits/stdc++.h>
using namespace std;

bool ls(vector<int> &arr, int k){
    int n = arr.size();
    for(int i=0;i<n;++i){
        if(arr[i]==k) return true;
    }
    return false;
}

int LongestConsecutiveSequence(vector<int> &nums){

    int longest = 1;
    int n = nums.size();

    for(int i=0;i<n;++i){
        int count = 1;
        int x = nums[i];
        while(ls(nums,x+1)){
            x = x + 1;
            count = count + 1;
        }
        longest = max(longest,count);
    }
    return longest;

    // brute force approach with time complexity O(n^2) and space complexity O(1)
}


int LongestConsecutiveSequenceBetter(vector<int> &nums){
    // better approach
    int longest = 1;
    int n = nums.size();
    int lastSmaller = INT_MIN;
    int count = 0;
    for(int i=0;i<n;++i){
        if(nums[i]-1==lastSmaller){
            count++;
            lastSmaller= nums[i];
        }
        else if(lastSmaller==nums[i]){
            continue;
        }
        else if(lastSmaller!=nums[i]){
            lastSmaller= nums[i];
            count = 1;
        }
        longest= max(longest,count);
    }
    return longest;
    // tc - O(nlogn + n) due to sorting and sc - O(1)
}

int LongestConsecutiveSequenceOtimal(vector<int> &nums){
    // optimal approach
    // assuming unordered set for finding is takin O(1)
    int longest = 1;
    unordered_set<int> st;
    int n = nums.size();
    for(int i=0;i<n;++i){
        st.insert(nums[i]);
    }
    for(auto val: st){
        if(st.find(val-1)==st.end()){
            int count = 1;
            int x = val;
            while(st.find(x+1)!=st.end()){
                count++;
                x = x + 1;
            }
            longest = max(longest,count);
        }
    }
    return longest;
    // tc - O(3N) and sc - O(N)
}


int main() {

    vector<int> arr = {102,4,100,1,3,2,5};
    cout<<LongestConsecutiveSequence(arr);
    return 0;
}

int main() {

    vector<int> arr = {102,4,100,1,3,2,5};
    cout<<LongestConsecutiveSequence(arr);
    return 0;
}

