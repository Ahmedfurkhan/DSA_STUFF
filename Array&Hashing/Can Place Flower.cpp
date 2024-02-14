class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int i,c=0;
        if(flowerbed.size()==1){
            if(flowerbed[0]==0) return true;
        }
        if(flowerbed[0]==0&&flowerbed[1]==0){
            flowerbed[0]=1;
            n=n-1;
        }
        for(i=1;i<flowerbed.size();i++){
            if(flowerbed[i]==0&& flowerbed[i-1]==0){
                flowerbed[i]=1;
                c=1;
                n=n-1;
            }
            else if(flowerbed[i]==1&&flowerbed[i-1]==1&&c==1){
                    flowerbed[i-1]=0;
                    n=n+1;
            }
            else c=0;
        }
        if(n>0) return false;
        else return true;
    }
};
