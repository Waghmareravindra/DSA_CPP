int getlength(char name[]){
  int length =0;
  int i=0;

  while(name[i] != '\0'){
    length++;
    i++;
  }
  return length;
}