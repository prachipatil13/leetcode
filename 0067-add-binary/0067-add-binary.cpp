class Solution {
public:
    string addBinary(string a, string b) {
       int as = a.size() - 1;
        int bs = b.size() - 1;

       string str;
        int carry = 0;

        while (as >= 0 || bs >= 0 || carry > 0) {
            int bitA = (as >= 0) ? a[as] - '0' : 0;
            int bitB = (bs >= 0) ? b[bs] - '0' : 0;

            int sum = bitA + bitB + carry;
            carry = sum / 2;
            int currentBit = sum % 2;

            str = to_string(currentBit) + str;

            as--;
            bs--;
        }

        return str;
    }
};