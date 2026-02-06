class Solution {
public:
    int sumSquare(int n)
    {
        int sum = 0;
        while (n != 0)
        {
            int digit = n % 10;
            sum += digit * digit;
            n = n / 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        int temp = n;

        while (temp != 1 && temp != 4)
        {
            temp = sumSquare(temp);
        }

        return temp == 1;
    }
};
