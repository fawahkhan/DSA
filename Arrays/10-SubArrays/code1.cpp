// Print the Subarray 
#include <iostream>
using namespace std ;
int main(){
    int arr[] = {1,2,3,4,5} ;
    int n = 5 ;

    for(int start = 0 ; start < n ; start++){
        for(int end = start ; end < n ; end++){
            cout << "{" ;
            for(int i = start ; i<=end ; i++ ){
                cout << arr[i] ;
                if(i != end ){
                    cout<< ",";
                }
            }
            cout << "}" << " " ;
        }
        cout << endl ;
    } 
    return 0 ;   
}

/*
Approach - Brute Force 
1. Every subarray can start with any element of an array. So we just have to run a loop over the array to find the first element of a subarray.
2. Every subarray can end with any element FROM THE START INDEX till the end of the array . So we just have to run a loop from the starting element till the end of the array.
3. now we'hv got the START and END of our subarray . 
4. To print all subarrays - we just have to run the loop from START to END of the array.
*/