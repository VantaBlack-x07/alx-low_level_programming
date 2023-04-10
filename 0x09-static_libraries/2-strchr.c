







char *_strchr(char *s, char c)
{
	int x = 0;

        for (x = 0; x < s; x++)
                if (s[x] == c)
                        return (s);
                if (s[x] != c)
                        return (null);
}
