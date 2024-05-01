class Solution {
public:
    string intToRoman(int num) {
        string ones[]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string tens[]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string hndrs[]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string thnds[]={"","M","MM","MMM"};
        return thnds[num/1000]+hndrs[(num%1000)/100]+tens[(num%100)/10]+ones[(num%10)];
    }
};
