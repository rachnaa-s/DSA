class Solution {
public:
    string intToRoman(int num) {
        int n[] = {1000, 900, 500, 400, 100,90, 50, 40, 10, 9, 5, 4, 1};
        string si[] ={"M","CM" ,"D", "CD","C","XC","L","XL","X","IX","V","IV","I"};
        int i=0;
        string s;
        
        while (num>0){
            if (num>=n[i]){
                s=s+si[i];
                num=num-n[i];
            }
            else{
                i++;
            }

        }
        return s;

        }        
};
