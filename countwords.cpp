#include <stdio.h>  
#include <stdlib.h>  

int countWord(){
	
  char ch;  
    FILE *file; 
	int flag; 
    int wcount = 0; 
	int dcount= 0;
	int capcount =0;

      
   
    file = fopen("data.txt","r");  
      
    
    while((ch = fgetc(file)) != EOF){  
    
//to count the numbers of words
      
        if(ch ==' ' || ch == '\n')  
            wcount++;
			
		
// to find word starting with capital letter		
		if ( flag == 1 && ch >=65 &&ch <=90 ){
			capcount ++; 
			flag ==0;
			
		}else{
			
			if (ch == ' '){
				
				flag = 1;
			}else 
			
				flag = 0;
		}
 // to find numbers of two dot
        if(ch == '.'&& fgetc(file) == '.')
	        dcount++;
	}
	
	
	printf("Number of words present in given file are : %d \n", wcount); 
	printf("Number of two dots present in the given file are : %d \n ", dcount);
	printf("Number of words with capital letters present in the given file are : %d", capcount);
    fclose(file);  
      
    return 0;  
} 


int main()  {
	
		countWord(); 
		
	return 0;
}


