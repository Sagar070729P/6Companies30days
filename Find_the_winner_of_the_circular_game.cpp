
class Solution {
public:
    int findTheWinner(int n, int k) {
        int arr[n];
        for (int i=0;i<n;i++) arr[i]=i+1;
        int i=1,c=n,ptr=0;
        while(c!=1){
            if (arr[ptr]==0) ptr = (ptr+1)%n;
            else{
                if (i%k==0){
                    arr[ptr]=0;
                    ptr = (ptr+1)%n;
                    i++;
                    c--;
                }
                else{
                    ptr = (ptr+1)%n;
                    i++;
                }
            }
        }
        ptr=0;
        for(ptr;ptr<n;ptr++) if (arr[ptr]!=0) break;
        return arr[ptr];
    }
};