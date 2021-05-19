close(p_padre[0]);
close(p_hijo[1]);

p_p = fdopen(p_padre[1],"w");
p_h = fdopen(p_hijo[0],"r");

while(fgets(buf,1024,stdin)!=NULL){
  fputs(buf, p_p);
  fflush(p_p);
  fgets(buf,1024,p_h);
  fputs(buf, stdout);
}
