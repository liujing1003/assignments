#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    char sentence[500] = {0}, word[50] = {0};
    cin.getline(sentence, 500);
    int j = 0, sizeWord = 0;
    while (i < 500 && sentence[i] != '.')
    {
        if (sentence[i] == ' ')
        {
            if (j > sizeWord)
            {
                sizeWord = j;
                for (int k = 0; k < j; k++)
                {
                    word[k] = sentence[i-j+k];
                }
            }           
            j = 0;
        } 
        else
        {
            j++;
        }
        i++;
    }
    if (sentence[i] == '.')
    {
        if (j > sizeWord)
        {
            for (int k = 0; k < j; k++)
            {
                word[k] = sentence[i-j+k];
            }
        }       
    }
    cout << word << endl;
    return 0;
}
