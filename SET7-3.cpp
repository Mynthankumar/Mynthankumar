
int main()
{
	char a[100];
	int len,i,word=1;
	printf("\nENTER A STRING: ");
	gets(a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]!=' ' && a[i+1]==' ')
			word=word+1;
	}
	printf("\n %d words",word);
	return 0;
}
