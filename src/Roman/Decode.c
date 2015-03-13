#include "Decode.h"

int roman_decode(char* in) {
	int res = 0;
	int resprec = 0;
	int i =0;
	while((unsigned) *in != 0)
	{
		int val = letter_decode(*in);	
		if(val > resprec){
			res += val;
			res -= (resprec *2);
		}
		else
			res += val;
		resprec = val;
		++in;
	}
	return res;
}

int letter_decode(char in){
	char letters[7] = {'I', 'V', 'X', 'L', 'C' ,'D' ,'M'};
	int values[7] =  {1, 5, 10, 50, 100, 500, 1000};
	unsigned i =0;
	while(i<7){
		if(in == letters[i])
			return values[i];
		++i;
	}
	return 0;
}
