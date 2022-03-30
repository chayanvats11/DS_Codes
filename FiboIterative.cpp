    void main() 
    { 
    int a[10][10],i,j; 
    for(i=0;i<10;++i) 
      { 
     
       printf("\n"); 
     
       for(j=0;j<=i;++j) 
     
       { 
         if(j==0 || i==j) 
     
          a[i][j]=1; 
     
          else 
     
           a[i][j]=a[i-1][j-1]+a[i-1][j]; 
     
           printf("%4d",a[i][j]); 
       } 
      } 
    } 
    String s = ""; 
    int spc = 0; 
    for (int i = 4; i >= 0; i++) { 
        String line = ""; 
        for (int sp = 0; sp < spc; sp++) {  
           line += " ";    
    }  
       line += Math.pow(11, i) + "\n"; 
        s = line + s; 
        spc++;}print(s); 