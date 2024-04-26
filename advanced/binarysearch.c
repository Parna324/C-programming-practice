#include<stdio.h>
int binarysearch(int arr[], int n ,int x){
    int low = 0, high = n - 1;
    while(low<=high){
        int mid =low + (high - low)/2;
        if(arr[mid] == x){
            return mid;
        }
        else if(arr[mid] > x){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;

    
}
int main(){
    int n , x;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements of array \n: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    printf("Enter the elements to search: ");
        scanf("%d",&x);
    int result= binarysearch(arr,n,x);
    if(result==-1){
        printf("Elements not found\n");
        }
    else{
        printf("Element found at index %d\n",result);
    }

}