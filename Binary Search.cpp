                           //BINARY SEARCH
/* Binary Search Algorith is used to search elemnt or index in an sorted array. It reduces 
the time complexity of elemnt search in an array from O(N) to O(log(N)) where N is
the size of the array. The Array should be sorted.
Binary Search can be used to find or search where there is uniform monotonicity

It conists of two pointers and finding mid value and comparing it with targer, and 
change the location of the pointer

*/

// Implementation

#include<iostream>
using namespace std;
// Given pointer of the array.
// Means- We are given the address of the first
// Use pointers concepts 
// Array is sorted 
int BinarySearch(int * a ,int target,int n){
     int low=0;
     int high=n-1;
     int a;
     while(low<=high){
        int mid=low+(high-low)/2;

        if(*(a+mid)==target){
            return mid;
        }
        else if(*(a+mid)>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
        
     }
     return -1; // Element Not Found
}
// First Bad Version

/*Given a N versions in incresing order of N, Also given an Api that tells whether elemnt 
is bad, then remaining elemnts after that are bad, Find the first Bad Version.
Use minimum calls to Api.
*/
// Use binary Search , If the middle elemnt is bad, if the mid -1 elemnt is not bad, Return this 
// mid elemnt, Else we have to search on the right side for bad element.
// If the mid-1 elemnt is bad then we have to search on the left side for first bad version.
//

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
       long long  int s=1;
        long long int e=n;
        while(s<=e){
            long long int mid=(s+e)/2;
            if(isBadVersion(mid)){
                if(isBadVersion(mid-1)==false){
                    return mid;
                }
                else{
                    e=mid-1;
                }
            }
            else{
                s=mid+1;
            }
            
        }
        return 0;
    }
};// The API isBadVersion is defined for you.
 bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
       long long  int s=1;
        long long int e=n;
        while(s<=e){
            long long int mid=(s+e)/2;
            if(isBadVersion(mid)){
                if(isBadVersion(mid-1)==false){
                    return mid;
                }
                else{
                    e=mid-1;
                }
            }
            else{
                s=mid+1;
            }
            
        }
        return 0;
    }
};
