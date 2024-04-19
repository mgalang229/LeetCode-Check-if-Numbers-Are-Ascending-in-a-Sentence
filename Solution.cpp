class Solution {
    bool is_number(string temp) {
        for (char& c : temp) {
            if (!isdigit(c)) {
                return false;
            }
        }
        return true;
    }
    
public:
    bool areNumbersAscending(string s) {
        string temp = "";
        int prev = 0;
        for (char& c : s) {
            if (c != ' ') {
                temp += c;
            } else {
                if (is_number(temp)) {
                    if (stoi(temp) <= prev) {
                        return false;
                    }
                    prev = stoi(temp);
                }
                temp = "";
            }
        }
        if (is_number(temp)) {
            if (stoi(temp) <= prev) {
                return false;
            }
        }
        return true;
    }
};
