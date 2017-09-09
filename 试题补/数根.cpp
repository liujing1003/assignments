#include <iostream>
using namespace std;

int main()
{
    string str;
    int sum=0;
    cin>>str;
    while (true) {
        if (str.size() == 1) {
            break;
        } else {
            sum = 0;
            for(int i=0;i<str.size();i++) {
                sum=sum+str[i]-'0';
            }
            str = to_string(sum);
        }

    }
    cout << sum << endl;
    return 0;
}
