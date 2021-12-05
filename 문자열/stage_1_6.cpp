    #include <iostream>
    #include <string>
    using namespace std;

    int main()
    {
        string text;
        getline(cin, text, '\n');

        int count = 0;
        bool check = false;
        for (int i = 0; i < text.length(); i++)
        {   
            if(text[i] != ' '){
                if(text[i+1] == ' '){
                    count += 1;
                }else if(text[i+1] == '\0'){
                    count += 1;
                }
            }
        }

        cout << count;
    }