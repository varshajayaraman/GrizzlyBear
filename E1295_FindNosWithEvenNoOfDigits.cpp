class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        
        for(int num:nums){
            if(isEven(num) == true){
                count +=1;
            }
        }
        return count;
    }
    
    bool isEven(int num){
        int digitCount = 0;
        if(num==0){
            return false;
        }
        
        while(num>0){
            digitCount +=1;
            num = int(num/10);
        }
        
        if(digitCount%2==0){
            return true;
        }
        return false;
    }
};