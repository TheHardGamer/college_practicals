int c=0;
char p[20];

static inline int l();
static inline int s();
static inline void lprime();

static inline int l()
{
s();
lprime();
}

static inline int s()
{
	if(p[c]=='a')
		c++;
	else if(p[c]=='(')
		{
			c++;
			l();
			if(p[c]==')')
				c++;
			else
				c--;
		}
	else
		printf("\nInvalid Expression");
}

static inline void lprime()
{
	if(p[c]==',')
		{
			c++;
			s();
			lprime();
		}
}