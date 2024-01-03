
void toLowerCase(string &s)
{	
    // Traverse through the string s
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        
        // Check if ch is a uppercase letter
        if (ch <= 'Z' && ch >= 'A')
        {
            ch = ch - ('A' - 'a');
            s[i] = ch;
        }
    }
}

bool checkPalindrome(string s)
{	
    // Convert uppercase letter into lowercase letter
    toLowerCase(s);

    int i = 0;
    int j = s.length() - 1;

    while (i < j)
    {
        if (isalnum(s[i]) == 0)
        {
            // ith pointer points to invalid character.
            ++i;
        }
        else if (isalnum(s[j]) == 0)
        {
            // jth pointer points to invalid character.
            --j;
        }
        else if (s[i] == s[j])
        {
            ++i, --j;
        }
        else
        {
            return false;
        }
    }
    
    return true;
}
