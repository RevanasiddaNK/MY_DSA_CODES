class Solution
{
    public:
    //Heapify function to maintain heap property.
    void heapify(int arr[], int n, int i)  
    {
        int largest = i;
        int left = (2*i)+1;
        int right = (2*i)+2;
        
        if(left < n && arr[left] > arr[largest]) {
            swap(arr[i], arr[largest]);
            heapify(arr,n,largest);
        }
    
            
        if(right < n && arr[right] > arr[largest]) {
            swap(arr[i], arr[largest]);
            heapify(arr,n,largest);
        } 
    }

    public:
    //Function to build a Heap from array.
    void buildHeap(int arr[], int n)  
    { 
        for(int i=n/2-1; i >=0 ; i--) {
            heapify(arr,n,i);
        }
    }

    
    public:
    //Function to sort an array using Heap Sort.
    void heapSort(int arr[], int n)
    {
        buildHeap(arr,n);
        int size = n-1;
        
        while(size > 0) {
            swap(arr[0],arr[size]);
            // now we r sending the pseudo size which is not a actual size it is already size-1;
            // if we do size-- befor the heapify() size becomes size-2; hence it shows error!
            heapify(arr, size, 0);
            size--;
        }
    }
    
};
