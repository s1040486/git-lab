#include <stdio.h>
#include <string.h>

#define LEN 7

extern char *getStudentID(char *id);

int check1(char m)
{
  	if (m >= '0' && m <= '9')
  		return 0;
 -//
 -	return 1;
 +
 +	return 1;//
  }
  
  int check2(char *output)
 @@ -23,7 +23,7 @@ int check2(char *output)
  		return 0;
  	else
  		printf("Check 2 is fail! Student id length is incorrect!\n");
 -
 +//
  	return 1;
  }
  
 @@ -35,7 +35,7 @@ int check3(char *str1, char *str2)
  
  	if (ret)
  		printf("Check 3 is fail! Do not modify the return statement of getStudentID function!\n");
 -
 +//
  	return ret;
  }
  
 @@ -48,7 +48,7 @@ int main()
  	output = getStudentID(id);
  
  	/* check */
 -
 +//
  	for (int i = 0; i < LEN; i++) {
  		ret |= check1(output[i]);
  	}
