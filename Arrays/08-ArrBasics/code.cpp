// find the smallest and largest number in an array

#include <iostream>
#include <climits>  //int_max is included in this.
using namespace std;

int main(){

    int arr[] = {23,1,5,34,-2,4} ; 
    int size = 6 ;
    int smallest = INT_MAX;
    int largest = INT_MIN ;
    for(int i = 0 ; i<size ; i++){
        if(arr[i] < smallest){
            smallest = arr[i] ;
        }
    }
    for(int i = 0 ; i<size ; i++){
        if(arr[i] > largest){
            largest = arr[i] ;
        }
    }

    cout <<"The smallest number in the given array is : "<< smallest << endl ;
    cout <<"The largest number in the given array is : "<< largest;

    return 0;
}