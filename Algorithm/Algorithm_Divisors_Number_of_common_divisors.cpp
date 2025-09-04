/*
ধরা যাক,A = 12 and B = 24,এদের divisor গুলো হবে,
12 = 1, 2, 3, 4, 6, 12 
24 = 1, 2, 3, 4, 6, 8, 12, 24

দেখা যাচ্ছে , 12 and 24 দুইটারই সবথেকে বড় common divisor(GCD) হচ্ছে 12. তাহলে 12 আর 24 এর মধ্যে যত common 
divisor থাকবে তা সবথেকে বড় common divisor = 12 এর মধ্যেই থাকবে। কারণ এর পরে আর কোনো common divisor 
ই থাকবে না।আর সবথেকে বড় common divisor হচ্ছে gcd(12,24). তাহলে আমাদের A আর B এর gcd = 12 এর divisor
কতগুলো তা বের করলেই হচ্ছে। আর 12 এর divisor আছে 6 টা।

আর আমরা জানি, কোনো সংখ্যার square root পর্যন্ত check করলেই সেই number এর total divisor count বের করা 
যায়।
*/



#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int Gcd = __gcd(a, b);
    int cnt = 0;
    for (int i = 1; i * i <= Gcd; ++i)
    {
        if (Gcd % i == 0)
        {
            cnt++;
            if (i != Gcd / i)
                cnt++;
        }
    }
    cout << cnt << '\n';

    return 0;
}