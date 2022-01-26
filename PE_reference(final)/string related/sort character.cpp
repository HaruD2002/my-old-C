 /*Write a program that takes 10 strings input into an array and outputs them in alphabetical order*/

    #include<stdio.h>
    #include<string.h>

    char strings[10][150];
    char ordered[10][150];
    int i,j,k;
    int ind;

    main()
    {
        printf("INPUT 10 STRINGS\n");
        for(i=0;i<2;i++)
        {
            gets(strings[i]);
        }

        for(i=0;i<10;i++)
        {
            ind=0;
            for(j=0;j<10;j++)
            {
                if(strings[i][0]<strings[j][0])
                {
                    ind++;
                }
                else if(strings[i][0]==strings[j][0])
                {
                    k=0;
                    while((strings[i][k]==strings[j][k])&&strings[j][k+1]!='\0')
                    {
                        if(strlen(strings[i])<strlen(strings[j]))
                        {
                            if(strings[i][k+1]=='\0')
                            {
                                ind++;
                            }
                            else if(strings[i][k+1]<strings[j][k+1])
                            {
                                ind++;
                            }
                        }
                        else if(strlen(strings[i])>strlen(strings[j]))
                        {
                            if(strings[i][k+1]<strings[j][k+1])
                            {
                                ind++;
                            }
                        }
                        k++;
                    }
                }
            }
            strcpy(ordered[ind],strings[i]);
        }


        printf("STRINGS: \n");
        for(i=9;i>-1;i--)
        {
        puts(ordered[i]);
        }
    }
