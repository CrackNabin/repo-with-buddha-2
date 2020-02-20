 #include<iostream>
#include<math.h>

int arr[] = {
    1,2,3,4,5,6,7,8,9
};

//Given a sorted array arr[] of n elements
//write a function to search a given element x in arr[].
bool searchFromArray(int sortedArray[],int num,int start, int end){
    int mid =  std::floor((end+start)/2);
    
    //for debug
    //std::cout<<mid<<" "<<start<<" "<<end<<"\n";

    if(sortedArray[mid] > num){
        //go left
        if(start == end)return false;
        searchFromArray(arr,num,0,mid);

    }else if(sortedArray[mid] < num){
        //go right
        if(start == end)return false;
        searchFromArray(arr,num,mid+1,end);
    }else if(sortedArray[mid] == num){
        //matched
        return true;
    } 

    
}

//main
int main(){
    int num = 1;
    // std::cout << "Search: "; 
    // std::cin >> num;
    // yeah

    int len = sizeof(arr)/sizeof(arr[0]);
    bool found = searchFromArray(arr,num,0,len-1);

    if(found){
        std::cout<<num<<" is present";
    }else{
        std::cout<<num<<" not found";
    }
}






