#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>


string ari (string s)
{
  float ch, w, sen;
  int len;
  len=strlen(s);
  for(int i=0;i<=len;i++)
  {
    if(s[i]==' ')
      w++;
    if(s[i]=='.'||s[i]=='?'||s[i]=='!')
      sen++;
    if(isalnum(s[i]))
    {
      ch++;
    }
  }
  
  int ari;
  float frac1;
  float frac2;
  
  frac1=(float)ch/w;
  frac2=(float)w/sen;
  ari=(4.71*frac1)+(0.5*frac2)-21.43;
  ari++;
  switch(ari)
  {
    case 1:
      printf("Kindergarten\n");
      break;
    case 2:
      printf("First/Second Grade\n");
      break;
    case 3:
      printf("Third Grade\n");
      break;
    case 4:
      printf("Fourth Grade\n");
      break;
    case 5:
      printf("Fifth Grade\n");
      break;
    case 6:
      printf("Sixth Grade\n");
      break;
    case 7:
      printf("Seventh Grade\n");
      break;
    case 8:
      printf("Eighth Grade\n");
      break;
    case 9:
      printf("Ninth Grade\n");
      break;
    case 10:
      printf("Tenth Grade\n");
      break;
    case 11:
      printf("Eleventh Grade\n");
      break;
    case 12:
      printf("Twelfth Grade\n");
      break;
    case 13:
      printf("College Student\n");
      break;
    case 14:
      printf("Professor\n");
      break;
  }
}
