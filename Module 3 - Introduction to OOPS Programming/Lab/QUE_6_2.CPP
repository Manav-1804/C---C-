#inlcude<iostream.h>
#inlcude<conio.h>


void counterChars(char str[])
{
	int vowel =0, consonatns = 0, digit = 0, special = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		char ch = str[i];
		if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		{
			if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch== 'U')
			 {
				vowels++;
			 }
			 else
			 {
				consonants++;
			 }
		}
		else if (ch >= '0' && ch <= '9')
		{
			digits++;
		}
		else
		{
			special++;
		}
	}

	cout << "\n Vowels : << vowels