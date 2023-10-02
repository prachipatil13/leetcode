class Solution {
public:
    bool winnerOfGame(string colors) {
        int countOfA=0;
        int countOfB=0;
        for(int i=1;i<colors.size()-1;i++){
            if(colors[i]=='A' && colors[i-1]=='A'&& colors[i+1]=='A'){
                countOfA++;
            }
            
             if(colors[i]=='B' && colors[i-1]=='B'&& colors[i+1]=='B'){
                countOfB++;
            }
        }
        
        if(countOfA>countOfB){
            return true;
        }else{
            return false;
        }
    }
};