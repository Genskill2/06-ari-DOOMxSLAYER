#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>


string ari (string s)
{
  int ch=0;
  int w=0;
  int sen=0;
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
      return "Kindergarten\n";
      break;
    case 2:
      return "First/Second Grade\n";
      break;
    case 3:
      return "Third Grade\n";
      break;
    case 4:
      return "Fourth Grade\n";
      break;
    case 5:
      return "Fifth Grade\n";
      break;
    case 6:
      return "Sixth Grade\n";
      break;
    case 7:
      return "Seventh Grade\n";
      break;
    case 8:
      return "Eighth Grade\n";
      break;
    case 9:
      return "Ninth Grade\n";
      break;
    case 10:
      return "Tenth Grade\n";
      break;
    case 11:
      return "Eleventh Grade\n";
      break;
    case 12:
      return "Twelfth Grade\n";
      break;
    case 13:
      return "College Student\n";
      break;
    case 14:
      return "Professor\n";
      break;
  }
}
