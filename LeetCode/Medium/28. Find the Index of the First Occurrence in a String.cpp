class Solution {
public:
    int strStr(string haystack, string needle) {
        int i, j;
        i = 0;
        while (haystack[i])
        {
            j = 0;
            if (haystack[i] == needle[j])
            {
                while (needle[j] && haystack[i + j] && (needle[j] == haystack[i + j]))
                {
                    j++;
                }
                if (j == needle.size())
                    return (i);
            }
            i++;
        }

        return (-1);
    }
};
