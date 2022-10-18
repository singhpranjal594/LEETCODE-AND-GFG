class Solution {
public:
    string countAndSay(int n) {
        string s[31];
        s[1] = "1";
        s[2] = "11";
        for (int i = 3; i <= 30;i++) {
            string temp = s[i - 1];
            string x = "";
            int count = 1;
            char last;
            for (int j = 1; j < temp.length();j++) {
                if (temp[j] == temp[j - 1]) {
                    last = temp[j];
                    count++;
                } else {
                    x += to_string(count) + temp[j - 1];
                    count = 1;
                    last = temp[j];
                }
            }
            if (count != 0) {
                x += to_string(count);
                x.append(1, last);
            }
            s[i] = x;
        }
        return s[n];
    }
};