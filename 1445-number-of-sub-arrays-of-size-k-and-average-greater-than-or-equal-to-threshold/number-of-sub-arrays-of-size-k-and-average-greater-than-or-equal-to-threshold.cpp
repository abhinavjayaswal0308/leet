class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int avg=0;
        int count=0;
    
        int sum=0;
    
        for(int i=0;i<k;i++){

            sum+=arr[i];
            
        }
       
        if(sum>=threshold*k) count++;

        int i=0;
        int j=k-1;

        while(j+1<arr.size()){
            j++;
           
            sum+=arr[j];
            sum-=arr[i];
            

            if(sum>=threshold*k) count++;
            i++;
            


        }

    return count;



        
    }
};