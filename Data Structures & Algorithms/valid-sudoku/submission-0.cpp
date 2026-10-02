class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0;i<9;i+=3){
            for(int j = 0;j<9;j+=3){
                vector<int> freq(10,0);
                for(int d1 = i; d1<i+3;++d1){
                    for(int d2 = j; d2<j+3;++d2){
                        int num = board[d1][d2]-'0';
                        if(num>=1 && num<=9){
                            freq[num]++;
                            if(freq[num]>1)return false;
                        }
                    }
                }
            }
        }
        for(int i = 0;i<9;++i){
            vector<int> freq(10,0);
            for(int j = 0;j<9;++j){
                int num = board[i][j]-'0';
                if(num>=1 && num<=9){
                    freq[num]++;
                    if(freq[num]>1)return false;
                }
            }
        }
        for(int i = 0;i<9;++i){
            vector<int> freq(10,0);
            for(int j = 0;j<9;++j){
                int num = board[j][i]-'0';
                if(num>=1 && num<=9){
                    freq[num]++;
                    if(freq[num]>1)return false;
                }
            }
        }
        return true;
    }
};
