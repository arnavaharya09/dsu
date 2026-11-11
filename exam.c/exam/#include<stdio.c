#include<stdio.h>
int main()
{
    int arr[]={2,4,6,8,10};
    int n = 5;
    int target = 8;
    int low = 0;
    int high = n-1;
    int found = -1;

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==target){
            found=mid;
            break;
        }
        else if(arr[mid]<target){
            low=mid + 1;
        }
        else {
            high= mid-1;
        }

    }
    if(found=-1)
    { 
        printf("Element found %d",found);
    }
    else{
        printf("Element NOT Found %d",found);
    }
    return 0;

}