// Selection Sorting Algorithms 
// ============================
// How it works 
// ============
// 1 . Start from the first element.

// 2. compare with the rest .

// 3. swap

// 4. Move the boundary 

// 5 . Repeat 

// Example :
//  [64,25,12,22,11]

// step1 : the first element is 64 . we look for the smallest element in the arry .
// - compare 64 with 25 , 12 ,22 and 11 . the smallest is 11 .
//  swap this 64 & 11 . now the array is [11,25,12,22,64].

// step2 : Now we will considet the second element 25 . Again find the smallest in the 
// unsorted part [25,12,22,64].
// - smallest is 12 .
// - swap 25 & 12 . now the array is [11,12,25,22,64] .
 
// step3 : Now consider the third element 25 . Find the smallest in [25,22,64]
// - smallest is 22 .
// - swap 25 & 22 . now the array will be like  [11,12,22,25,64]

// step4 : Now consider the fourth element 25 . Find the smallest in[25,64]
// - smallest is 25 .
// No need to swap . the arary remains [11,12,22,25,64] .

// step5 : the last element 64 is already in place .
//  The sorted array is like [11,12,22,25,64]

// #include<iostream>
// using namespace std ;

// void selectionSort(int arr [] , int n){
//     for(int i=0 ; i<n-1 ; i++){
//         // finding the minimum element in the unsorted part 
//         int minIndex = i ;
//         for(int j= i+1 ; j<n ; j++){
//             if(arr[j]<arr[minIndex]){
//                 minIndex=j;
//             }
//         }
//         // swap the first found element with the first element 
//         swap(arr[minIndex],arr[i]);
//     }
// }

// void printArray(int arr[] , int size){
//     for(int i =0 ; i<size ; i++)
//     cout << arr[i] << " " << endl ;
// }
// int main(){
//     int arr[] ={64,25,12,22,11};
//      int n= sizeof(arr) /sizeof(arr[0]);
//     selectionSort(arr , n) ;
//     cout << "Sorted array: \n" ;
//     printArray(arr ,n);
    
//     return 0 ;
// }

// Time Complexity 
// Best Case : (O(N^2))
// AVERAGE CASE :(O(N^2))
// WORST CASE :(O(N^2))

// SPACE COMPLEXITY : O(1) ;
// Selection sort is an in-place sorting algorithm , meaning it does not require additional 
// storage or space beyond the input array .

// GFG PROBLEM SOLUTION (https://www.geeksforgeeks.org/problems/selection-sort/0)
// ====================
// class Solution
// {
//     public:
//     // int select(int arr[], int i)
//     // {
//     //     // code here such that selectionSort() sorts arr[]
//     //     for(int i=0 ; i<)
//     // }
     
//     void selectionSort(int arr[], int n)
//     {
//        //code here
//        for(int i=0 ; i <n-1 ; i++){
//            int minIndex=i ;
//            for(int j = i+1 ; j<n ; j++){
//                if(arr[j] <arr[minIndex]){
//                    minIndex=j ;
//                }
//            }
//            swap(arr[minIndex] , arr[i]);
//        }
//     }
// };


// Bubble Sort Algorithm
// ======================
// How Bubble sort work 
// ======================
// 1 . start from first element

// 2 . Swap if necessary 

// 3 . Move to the next pair 

// 4 . repeat for all pairs 

// 5 . largest elements bubbles up 

// 6 . repeat the process 

// Example 
// ===========
// [64,34,25,12,22,11, 90] sort it using Bubble Sort 

// step1 : compare 64 & 34 . since 64 >34 swap them . 
// arrays will become [34,64,25,12,22,11,90]

// step2 : compare 64 & 25 . sice 64 >25 , swap them .The array becomes [34,25,64,
// 12,22,11,90].

// step3 : compare 64 & 12 . since 64 >12 , swap them .The array becomes [34,25,12,
// 64,22,11,90].

// step4 : compare 64 & 22 . since 64 >22 , swap them .The array becomes [34,25,12,
//  22,64,11,90].

// step5 : compare 64 & 11 . since 64 >11 , swap them .The array becomes [34,25,12,
//  22,11,64,90]. 

// step 6: compare 64 & 90 . since 64 <90 , swap them .The array becomes  [34,25,12,
//  22,11,64,90]. 

//  [34,25,12,22,11,64,90]. ---> after first pass 

// repeat the above process until the array is fully sorted .

// Code Implementation 

// #include <iostream>
// using namespace std ;
// void bubbleSort(int arr[] , int n){
//     for(int i=0 ; i<n-1 ; i++){
//         for(int j=0 ; j<n-i-1 ; j++){
//             if(arr[j] >arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }
// }
// void printArray(int arr[] , int size){
//     for(int i =0 ; i<size; i++)
//     cout << arr[i] << " " << endl ;
// }
// int main(){
//     int arr[] = {64,34,25,12,22,11,90};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     bubbleSort(arr,n) ;
//     cout <<"Sorted Arrays :\n";
//     printArray(arr,n);
//     return 0 ; 
// }

// TIME COMPLEXITY 
// ===============
// BEST CASE : O(N) ---> WHEN THE ARRAY IS ALREADY SORTED 
// AVERAGE CASE : (O(N^2)) 
// WORST CASE : (0(N^2))

// SPACE COMPLEXITY
// ================
// O(1)
// BUBBLE SORT IS AN INPLACE SORTING ALGO. , SO IT DOESN'T REQUIRE ANY EXTRA SPACE BEYOND THE 
// INPUT ARRAY .

// GFG PROBLEM LINK & SOLUTION (https://www.geeksforgeeks.org/problems/bubble-sort/0)

// // User function Template for C++

// class Solution {
//   public:
//     // Function to sort the array using bubble sort algorithm.
//     void bubbleSort(int arr[], int n) {
//         // Your code here
//         for(int i=0 ; i<n-1 ; i++){
//             for(int j=0 ; j<n-i-1 ; j++){
//                 if(arr[j] > arr[j+1]){
//                     swap(arr[j] , arr[j+1]);
//                 }
//             }
//         }
//     }
// };

// ========================================

//       Insertion Sort Algoritm 

// ========================================

// How insertion sort works :

// 1. Start with the first element : Assume the first element is already sorted .

// 2. pick the next element : This element is called the "key." compare it with the elements 
// in the sorted portion.

// 3. Shift Elements: if the key is smaller than the element in the sorted portion , 
// shift that element one position to the right .

// 4. Insert the key : place the key in its correct position.

// 5. Repeat 

// Example :
// [5,2,9,1,5,6]

// Itreation1 : 
// k=2 , compare with 5
// 2<5 so shift 5 to the right , making the array [5,5,9,1,5,6]
// - insert 2 at the first position , resulting in [2,5,9,1,5,6]

// Iteration2 : 
// k = 9 ,
// 9>5 ,no shifting needed  
// Arrays remains [2,5,9,1,5,6]

// Iteration3 :
// k=1 , compare it with 9,5,2 
//  [2,5,9,9,5,6] ---> [2,5,5,9,5,6] --->[2,2,5,9,5,6]
//  insert 1 at the first position , resulting in [1,2,5,9,5,6]
 
// Iteration4 : k=5 compare with 9,5 
// [1,2,5,5,9,6]

// Iteration5: k=6 
// [1,2,5,5,6,9]

// code 
// #include<iostream>
// using namespace std ;
// void insertionSort(int arr[] , int n){
//     for(int i =1 ; i<n ; i++){
//         int key = arr[i] ; 
//         int j= i-1;
//         while(j>=0 && arr[j] > key ){
//             arr[j+1] = arr[j];
//             j--;
//         }
//         arr[j+1] = key ;
//     }
// }
// int main(){
//     int arr[] ={5,2,9,1,5,6};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     insertionSort(arr,n);
//     cout << "Sorted array:";
//     for(int i = 0 ; i<n ; i++){
//         cout <<arr[i] << " " ;
//     }
//     return 0 ;
// }

// Best case : when the array is already sorted 
// O(n)
// for average and worst case : O(n^2)

// Space Complexity : O(1)

// GFG PROBLEM LINK : [https://www.geeksforgeeks.org/problems/insertion-sort/0]

// SOLUTION      

// class Solution
// {
//     // public:
//     // void insert(int arr[], int i)
//     // {
//     //     //code here
//     // }
//      public:
//     //Function to sort the array using insertion sort algorithm.
//     void insertionSort(int arr[], int n)
//     {
//         //code here
//         for(int i=0 ; i<n ; i++){
//             int key = arr[i];
//             int j= i-1 ;
//             while (j>=0  && arr[j] > key){
//                 arr[j+1] = arr[j];
//                 j-- ;
//             }
//             arr[j+1] = key ; 
//         }
//     }
// };

// Merge Sort Algorithm 
// ====================
// Merge sort is a classic Divide and Conquer algorithm . 
// Step:
// 1. Divide 
// 2. Conquer 
// 3. Combine 

// How it works 
// ============
// consider an array :[38,27,43,3,9,82,10]

// step 1: Divide 
// Original array : [38,27,43,3,9,82,10]

// divide : [38,27,43]       [3,9,82,10]

// divide further : [38] [27,43]    [3,9]  [82,10]

// divide again : [38] [27] [43] [3] [9] [82] [10]

// Step 2 conquer / combine
// Merge [27] and [43]
// [27,43]
// Merge [38] and [27,43]
// [27,38,43]

// Merge [3] and [9]:
// [3,9]

// Merge : [82] and [10]:
// [10,82]
// Merge [3,9] and [10,82]
// [3,9,10,82]

// Final merge :
// [3,9,10,27,38,43,82]

// Merge sort code :
#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int left, int mid, int right) {
    vector<int> temp(right - left + 1);
    int i = left, j = mid + 1, k = 0;

    while (i <= mid && j <= right) 
        temp[k++] = (arr[i] <= arr[j]) ? arr[i++] : arr[j++];

    while (i <= mid) temp[k++] = arr[i++];
    while (j <= right) temp[k++] = arr[j++];

    for (i = left, k = 0; i <= right; i++, k++) 
        arr[i] = temp[k];
}

void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};

    mergeSort(arr, 0, arr.size() - 1);

    for (int num : arr)
        cout << num << " ";
    cout << endl;

    return 0;
}
