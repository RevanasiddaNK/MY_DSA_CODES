#include<iostream>
#include<vector>
using namespace std;

int countnumberofsubsequeces(int arr[], int index, int n, int &sum, int k){

    if(index >= n){
        if(sum == k){
           return 1;
        }
        return 0;
    }

    // pick 
    sum += arr[index];
    int pick = countnumberofsubsequeces(arr,index+1,n,sum,k);

    //not pick
    sum -= arr[index];
    int unpick = countnumberofsubsequeces(arr,index+1,n,sum,k);
    
    return unpick+pick;

}

int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int k = 6;
    vector<int>temp;
    int index = 0;
    int sum = 0;
    int n = 10;
   
    cout<<"number of subsequeces with sum = "<<k<<" is "<<countnumberofsubsequeces(arr,index,n,sum,k)<<endl;

    return 0;
}
