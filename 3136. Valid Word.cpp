class Solution {
public:
    bool isValid(string word) {
        int n=word.size(),number=0,vowel=0,cons=0,upp=0,down=0;
        if (word.length() < 3) {
        return false;
    }
    int cnt=0,extra=0;
    bool hasVowel = false;
    bool hasConsonant = false;
    
    for (char ch : word) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            hasVowel = true;
            vowel++;
        }
        if (isalpha(ch)) {
            if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                  ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
                hasConsonant = true;
                cons++;
            }
        }
        else if (isdigit(ch)) {
            cnt++;
        }
        else extra++;
    }
    if(hasVowel && hasConsonant){
        if(cnt==0 && extra)return false;
        if(cnt && extra )return false;
        return true;
    }
    return false;
    }
};
