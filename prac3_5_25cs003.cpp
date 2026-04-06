#include <iostream>
    using namespace std;

    int superdigit(long long n)
    {
        if (n < 10)
        {
            return n;
        }

        long long sum = 0;

        while (n > 0)
        {
            sum += n % 10;
            n = n / 10;
        }

        return superdigit(sum);
    }

    int main()
    {

        string n;
        int k;

        cout << "Enter your n as a string: ";
        cin >> n;

        cout << "enter your k number: ";
        cin >> k;

        long long sum = 0;

        for (int i = 0; i < n.length(); i++)
        {
            sum += n[i] - '0';
        }

        sum = sum * k;

        int result = superdigit(sum);

        cout << "Final answer: " << result << endl;

        return 0;
    }





/* n=9875....k=4

n is 4 times repet

9875    9874   9874   9874
1 by 1 sum(((((((((9 + 8 + 7 + 5 + 9 + 8 + 7 + 5 + 9 + 8 + 7 + 5 + 9 + 8 + 7 + 5 = 116 )))))))))
then 1+1+6=====8{{{FINAL ANSWER}}}

long and string ma answer integer aavse string ascii value store krse


long long sum-0;

for(int i=0;i<n.length();i++){

sum+=n[i]-'0';
for 1 49-48==1

'0 'aam mukiye etle te strinh ganvama aave

//multiple by k

sum=sum*k;

superdigit store kri print

}
*/