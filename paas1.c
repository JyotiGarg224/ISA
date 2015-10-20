#include<stdio.h>
#include<string.h>

main()
{
	FILE *f1, *f2;
	char two[8][6]={"mem","get","disp","jmp","jc","jnc","jz","stop;"};
	char one[11][7] = {"sub","mul","add","div","cmp","mov","getm","plus","plusx","minus","minusx"};
	f1 = fopen("code.txt","r");
	f2 = fopen("source.txt","w");
	char s[10];
	int i,j,k,ilc=0, flag =0, flag1 =0;
	char c , sh;
	
		while((c = fgetc(f1)) != EOF)
		{
		
		if(c == '\n')
		{
			fscanf(f1,"%s",s);//printf("%s\n",s);
	 
			for(i=0;i<8;i++)
			{
				flag =0;
				if((strcmp( s,two[i])) == 0)
				{
					ilc+=2; flag = 1;
					break;
				}
			}
			
			
			if(flag == 0)
			{
				
	
				for(j=0;j<11;j++)
				{flag1=0;
					if((strcmp( s,one[j])) == 0)
					{
						ilc++; flag1 =1;break;
					}
				}
				if(flag1 != 1)
				{
					fprintf(f2,"%s\t",s);
					fprintf(f2,"%d\n",++ilc);}
				}
			}
				
		}
		fclose(f1);
		fclose(f2);
}
	
	
	
