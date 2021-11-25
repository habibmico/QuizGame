#include<stdio.h>
#include<time.h>

int main()

{




    int input;


    printf("\t\t\t\t\t >>>>> Welcome to Quiz Game <<<<< \n");

    char name[100];
    printf("\n\n\t\t\t\t\t Enter your name : \t\n");
    printf("\n\t\t\t\t\t( Enter Your nick Name )\n\n\t\t\t");
    scanf("%s",name);



    system("cls");
    system("COLOR 0A");
    printf("\n\n\t\t\t\t\t1.New Game\n");
    printf("\t\t\t\t\t2.Your result\n");
    printf("\t\t\t\t\t3.Score\n");
    printf("\t\t\t\t\t4.Help\n");
    printf("\t\t\t\t\t5.Exit\n");

    printf("\t\t\t\t\tEnter your choice:\n\t\t\t\t\t");
    while(scanf("%d",&input)!=EOF)

        if(input==1)
        {
            int n,b,right=0,wrong=0;



            printf("\t\t\t\t\t Start your game now!!!\n\n");



            system("cls");
            printf("\t\t\t\t\t\t\t\t !!! First Question !!!\n\n");



            printf("\t\t\t\t\t How much is the average rainfall in Bangladesh ?\n\n\n\n");



            printf("\t\t\t\t\t 1.183cm \n\n");

            printf("\t\t\t\t\t 2.150cm \n\n");

            printf("\t\t\t\t\t 3.203cm \n\n");

            printf("\t\t\t\t\t 4.303cm \n\n");

            scanf("%d",&n);
            if(n==3)
            {
                printf("\t\t\t\t\t Right Ans!!!\n\n");
                right++ ;
            }
            else
            {
                printf("\t\t\t\t\t Wrong Ans!!!\a\n\n");
                wrong++;
            }



            {

                printf("The correct answer is 3. 203cm \n\n\n\n");

            }





            printf("\t\t\t\t\t\t\t\t !!! Second Question !!!\n\n");


            printf("\t\t\t\t\t How many are the current members of the ' United Nation ' ?\n\n\n\n");



            printf("\t\t\t\t\t 1.180 \n\n");

            printf("\t\t\t\t\t 2.193 \n\n");

            printf("\t\t\t\t\t 3.170 \n\n");

            printf("\t\t\t\t\t 4.192 \n\n");

            scanf("%d",&n);
            if(n==2)
            {
                printf("\t\t\t\t\t Right Ans!!!\n\n");
                right++ ;
            }
            else
            {
                printf("\t\t\t\t\t Wrong Ans!!!\a\n\n");
                wrong++;
            }


            {

                printf("The correct answer is 2.193 \n\n\n\n ");

            }




            printf("\t\t\t\t\t\t\t\t !!! Third Question !!!\n\n");


            printf("\t\t\t\t\t When is the ' Environment Day ' ?\n\n\n\n");



            printf("\t\t\t\t\t 1.5th June \n\n");

            printf("\t\t\t\t\t 2.5th May \n\n");

            printf("\t\t\t\t\t 3.10th July \n\n");

            printf("\t\t\t\t\t 4.14th December \n\n");

            scanf("%d",&n);
            if(n==1)
            {
                printf("\t\t\t\t\t Right Ans!!!\n\n");
                right++ ;
            }
            else
            {
                printf("\t\t\t\t\t Wrong Ans!!!\a\n\n");
                wrong++;
            }



            {

                printf("The correct answer is 1.5th June n\n\n\n\ ");

            }





            printf("\t\t\t\t\t\t\t\t !!! Fourth Question !!!\n\n");


            printf("\t\t\t\t\t The current President of the ' World Bank ' ?\n\n\n\n");



            printf("\t\t\t\t\t 1.Timothy Butter \n\n");

            printf("\t\t\t\t\t 2.Thomas Eisenmann \n\n");

            printf("\t\t\t\t\t 3.Jim Young Kim \n\n");

            printf("\t\t\t\t\t 4.Robert Zoellick \n\n");

            scanf("%d",&n);
            if(n==3)
            {
                printf("\t\t\t\t\t Right Ans!!!\n\n");
                right++ ;
            }
            else
            {
                printf("\t\t\t\t\t Wrong Ans!!!\a\n\n");
                wrong++;
            }



            {

                printf("The correct answer is 3.Jim Young Kim \n\n\n\n ");

            }





            printf("\t\t\t\t\t\t\t\t !!! Fifth Question !!!\n\n");


            printf("\t\t\t\t\t He is Vexed ____ my opposition ?\n\n\n\n");



            printf("\t\t\t\t\t 1.to \n\n");

            printf("\t\t\t\t\t 2.at \n\n");

            printf("\t\t\t\t\t 3.with \n\n");

            printf("\t\t\t\t\t 4.by \n\n");

            scanf("%d",&n);
            if(n==3)
            {
                printf("\t\t\t\t\t Right Ans!!!\n\n");
                right++ ;
            }
            else
            {
                printf("\t\t\t\t\t Wrong Ans!!!\a\n\n");
                wrong++;
            }




            {

                printf("The correct answer is 3.with \n\n\n\n ");

            }



            printf("\t\t\t\t\t\t\t\t !!! Sixth Question !!!\n\n");


            printf("\t\t\t\t\t Number of ' Geothermal Stations ' in Bangladesh ?\n\n\n\n");



            printf("\t\t\t\t\t 1.4 \n\n");

            printf("\t\t\t\t\t 2.3 \n\n");

            printf("\t\t\t\t\t 3.7 \n\n");

            printf("\t\t\t\t\t 4.5 \n\n");

            scanf("%d",&n);
            if(n==1)
            {
                printf("\t\t\t\t\t Right Ans!!!\n\n");
                right++ ;
            }
            else
            {
                printf("\t\t\t\t\t Wrong Ans!!!\a\n\n");
                wrong++;
            }


            {

                printf("The correct answer is 1.4 \n\n\n\n");

            }




            printf("\t\t\t\t\t\t\t\t !!! Seventh Question !!!\n\n");


            printf("\t\t\t\t\t How many are the total number of ' Commonwealth member ' ?\n\n\n\n");



            printf("\t\t\t\t\t 1.45 \n\n");

            printf("\t\t\t\t\t 2.50 \n\n");

            printf("\t\t\t\t\t 3.53 \n\n");

            printf("\t\t\t\t\t 4.52 \n\n");

            scanf("%d",&n);
            if(n==4)
            {
                printf("\t\t\t\t\t Right Ans!!!\n\n");
                right++ ;
            }
            else
            {
                printf("\t\t\t\t\t Wrong Ans!!!\a\n\n");
                wrong++;
            }



            {

                printf("The correct answer is 4.52 \n\n\n\n");

            }





            printf("\t\t\t\t\t\t\t\t !!! Eighth Question !!!\n\n");


            printf("\t\t\t\t\t I struck him on ___ check ?\n\n\n\n");



            printf("\t\t\t\t\t 1.an \n\n");

            printf("\t\t\t\t\t 2.a \n\n");

            printf("\t\t\t\t\t 3.the \n\n");

            printf("\t\t\t\t\t 4.an or a \n\n");

            scanf("%d",&n);
            if(n==3)
            {
                printf("\t\t\t\t\t Right Ans!!!\n\n");
                right++ ;
            }
            else
            {
                printf("\t\t\t\t\t Wrong Ans!!!\a\n\n");
                wrong++;
            }



            {

                printf("The correct answer is 3.the \n\n\n\n");

            }





            printf("\t\t\t\t\t\t\t\t !!! Nine th Question !!!\n\n");


            printf("\t\t\t\t\t The phrase ' Achilles heel ' means ?\n\n\n\n");



            printf("\t\t\t\t\t 1.A strong point \n\n");

            printf("\t\t\t\t\t 2.A serious idea \n\n");

            printf("\t\t\t\t\t 3.None \n\n");

            printf("\t\t\t\t\t 4.A week point \n\n");

            scanf("%d",&n);
            if(n==4)
            {
                printf("\t\t\t\t\t Right Ans!!!\n\n");
                right++ ;
            }
            else
            {
                printf("\t\t\t\t\t Wrong Ans!!!\a\n\n");
                wrong++;
            }



            {

                printf("The correct answer is 4.A week point \n\n\n\n");

            }





            printf("\t\t\t\t\t\t\t\t !!! Tenth Question !!!\n\n");


            printf("\t\t\t\t\t How many districts on the border of Myanmar and Bangladesh ?\n\n\n\n");



            printf("\t\t\t\t\t 1.1 \n\n");

            printf("\t\t\t\t\t 2.4 \n\n");

            printf("\t\t\t\t\t 3.5 \n\n");

            printf("\t\t\t\t\t 4.3 \n\n");

            scanf("%d",&n);
            if(n==4)
            {
                printf("\t\t\t\t\t Right Ans!!!\n\n");
                right++ ;
            }
            else
            {
                printf("\t\t\t\t\t Wrong Ans!!!\a\n\n");
                wrong++;
            }



            {

                printf("The correct answer is 4.3 \n\n\n\n");

            }

            system("cls");
            printf("right ans:%d\n",right);
            printf("Wrong ans:%d\n",wrong);
            FILE*F=fopen("Quiz game Score.txt","a");
            fprintf(F,"Name:%s\n",name);

            fprintf(F,"right ans:%d\n",right);
            fprintf(F,"Wrong ans:%d\n",wrong);
            //fprintf(F,"Ur Score:%d\n",score);
            fclose(F);
            printf("Thanks For Playing  !!!\n");
            //break;




        }
        else if(input==2)
        {
            int right,wrong;
            printf("\t\t\t\t\t Your result.!!!\n\n\n");
            printf("\n\n\n\t1.Total Question =10");
            printf("\n\n\t2.Total Right Answer =  ",right);
            printf("\n\n\t3.Total Wrong Answer =  ",wrong);
            break;

        }
        else if(input==3)
        {
            int score;
            printf("\t\t\t\t\t Score.!!!\n");
            FILE*F=fopen("Quiz game Score.txt","a");
            fscanf(F,"%s",&name);
            //fscanf(F,"%d",&right);
            //fscanf(F"%d",&wrong);
            fprintf(F,"Name:%s\n",name);
//            fprintf(F,"right ans:%d\n",right);
     //       fprintf(F,"Wrong ans:%d\n",wrong);
            fclose(F);
            //freopen("Quiz game Score.txt","r",stdin);
            break;



        }
        else if(input==4)
        {

            printf("\t\t\t\t\t Help...!!!\n");


            printf("\n\n\t 1.You must input your name before the start of the game");
            printf("\n\n\t 2.You will be given four option for each question");
            printf("\n\n\t 3.Get 30 second to answer each question");
            printf("\n\n\t 4.After five wrong mistake ,the game will be stopped .Otherwise ,you have to start playing again");
            printf("\n\n\t 5.You must right answer can lead you to highest score");
            printf("\n\n\t 6.Thanks for reading the help list");

            break;

        }
        else if(input==5)
        {
            printf("\t\t\t\t\t Exit ...!!!\n");
            break;
        }
        else
        {
            printf("\t\t\t\t\t Invalid input.please check\a !!!\n");
        }
    return 0 ;

}




