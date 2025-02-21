#include <stdio.h>

int main()
  {
    int i;
    int ans1,ans2,ans3,ans4,ans5,ans6;
    int point1,point2,point3,point4,point5,point6,point7,point8,point9,point10;
    int point01,point02,point03,point04,point05,point06,point07,point08,point09point010;
    int total11,total12,total13;

    printf("   Welcome to the Game\n\n");

    printf("> Press 7 to start the Game\n");

    printf("> Press 0 to quit the game\n");

    scanf("%d",&i); 

    if(i==7)
    {
        printf("The game has started\n\n");

    }
    else if (i==0)
    {
        printf("The game has ended\n\n");

    } else{
        printf("Invalid\n\n");

    }
    if(i==7)
    {
        printf("1) Which one is the first search engine in internet?\n\n");
        printf("1) Google\n");
        printf("2) Archie\n");
        printf("3) Wais\n");
        printf("4) Atavista\n");
       
        printf("Enter your answer : ");
        scanf("%d",&ans1);
    
        
        if(ans1==2)
        {
            printf("Correct Answer\n");
            point1=5;
            
            printf("You have scored %d point\n",point1);
        }
        else
        {
            printf("Wrong Answer\n");
            point01=0;

            printf("You have scored %d point.\n",point01);

        }

        printf("2) Who developed the first program in computer history?\n\n");
        printf("1) Lady Augsta Ada\n ");
        printf("2) Charles Babbage\n ");
        printf("3) Blaise Pascal\n");
        printf("4) Howard Aiken\n");

                printf("Enter your answer : ");
        scanf("%d",&ans2);
        
        if(ans2==1)
        {
            printf("Correct Answer\n");
            point2 = 5;
            printf("You have scored %d point\n",point2 );
        }
        else
        {
            printf("Wrong Answer\n");
            point02=0;
            printf("You have scored %d point.\n",point02);
        }

        printf("3) What is the era of Third Generation of computer\n\n");
        printf("1) 1956-1963\n");
        printf("2) 1955-1966\n");
        printf("3) 1963-1971\n");
        printf("4) 1971-1984\n");

        printf("Enter your answer : ");
        scanf("%d",&ans3);
        
        if(ans3==3)
        {
            printf("Correct Answer\n");
            point3 = 5;
            printf("You have scored %d point\n",point3 );
        }
        else
        {
            printf("Wrong Answer\n");
            point03=0;
            printf("You have scored %d point.\n",point03);
        }

        printf("4) Who is the father of artificial intelligence?\n\n");
        printf("1) Howard Aiken\n");
        printf("2) John Mcarthy\n");
        printf("3) John backus\n");
        printf("4) Nikaulas Wirth\n");

                printf("Enter your answer : ");
        scanf("%d",&ans4);
        
        if(ans4==2)
        {
            printf("Correct Answer\n");
            point4 = 5;
            printf("You have scored %d point\n",point4 );
        }
        else
        {
            printf("Wrong Answer\n");
            point04=0;
            printf("You have scored %d point.\n",point04);
        }

        printf("5) What does MICR stands for?\n\n");
        printf("1) Magnetic Integrated Character Reader\n");
        printf("2) Magnetic Ink Code Reader\n");
        printf("3) Magnetic Ink Character Reader\n");
        printf("4 ) Magnetic Ink character Repeater\n");

                printf("Enter your answer : ");
        scanf("%d",&ans5);
        
        if(ans5==3)
        {
            printf("Correct Answer\n");
            point5 = 5;
            printf("You have scored %d point\n",point5 );
        }
        else
        {
            printf("Wrong Answer\n");
            point05=0;
            printf("You have scored %d point.\n",point05);
  }
  printf("6) What dose RDBMS stands for:\n");
   printf("1) Relation database memory system\n");
    printf("2) Relationl database management system\n");
     printf("3)Relational databyte manage system\n");
      printf("4) Relational datatype manage system\n");
     
     printf("enter the answer:");
     scanf("%d",&ans6);

if(ans6==2){
    printf("Correct answer\n");
    point6=5;
   printf ("You have sored %d points\n\n",point6);
}
else{
    printf("Wrong answer\n");
    point06=0;
     ("You have sored %d points\n\n",point06);
}

        }

       
return 0;

}