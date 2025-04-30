#include<stdio.h>
/* cheack wether a character is a vowel or contnent.*/
main(){
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	// check if the char is a vowel
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'||
	   ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'||){
	   	printf("%c is a vowel.",ch);
	   }else{
	   	printf("%c is a consonant.",ch);
	   }
}
