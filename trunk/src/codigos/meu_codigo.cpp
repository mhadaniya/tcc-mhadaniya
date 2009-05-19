char * Set_info(int s[])
{
  char * aux = new char[255];
  int i=0;
  aux[i]='\0';
  while (i< 8)
  {
     if (s[i] != 0) StrCat(aux,f_Chr(s[i]));
        else {
            StrCat(aux,"\0");
        }
     i++;
  }
 return aux;
} 
