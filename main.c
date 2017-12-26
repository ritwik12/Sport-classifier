#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SPACE ' '

int main () 
{

  
  char str[1000];
  do
  {

    printf("-------------------------------------------------------------- \n        Hey,\n             Just give me some hint about sports like \n             Basketball, Football, Cricket, Hockey and \n             I will try to guess the sport about which you are talking \n --------------------------------------------------------------------\n\n\n");
    fgets(str, 1000, stdin);
     if ((strlen(str)>0) && (str[strlen (str) - 1] == '\n'))
        str[strlen (str) - 1] = '\0';

    //change uppercase letters in str to lowercase for convenience
    int i, s = strlen(str);
    for (i = 0; i < s; i++)
        str[i] = tolower(str[i]);  

    char split[10][10]={0};
    int k=0,j=0,basket=0,crick=0,foot=0,hock=0;
    char result[20];
    int basketball_score,cricket_score,football_score,hockey_score;

    //for basketball-------------

    char *basketball[10][10]={{"basketball","basket","court","lakers"},
          {"dribble","dribbling","three","nba"},
          {"bulls","jordan","five","pointer"}};

    //for cricket----------------

    char *cricket[10][10]={{"eleven","pitch","bat","ball"},
          {"cricket","dhoni","umpire","odi"},
          {"wicket","governing","icc","england"}};

    //for football---------------

    char *football[10][10]={{"soccer","fifa","ronaldo","foot"},
          {"messi","barcelona","goal","kick"},
          {"keeper","football","penalty","ball"}};


    //for hockey-----------------

    char *hockey[10][10]={{"hockey","india","ice","fih"},
          {"barn","nhl","stick","skates"},
          {"governing","puck","goal","olympic"}};
    

    for(int i=0;i<strlen(str);i++)
    {
      if(str[i]==' ')
      { 
        if(str[i+1]!=' ')
        {
           split[k][j]='\0';
           j=0;
           k++;
        }
        continue;
      }
      else
      {
        split[k][j++]=str[i];       
      }       
    }

    split[k][j]='\0';
      
    
    //For basketball---------------------------------------

    for(int v=0;v<=k;v++)
       for(int b=0;b< 3 ;b++)
       { 
      
          for(int c=0;c< 4 ;c++)
          {
              if(strcmp(basketball[b][c],split[v])== 0)
              {
                 basket++;
          
              }   
          }
        }
        basketball_score=basket;

    //For cricket-----------------------------------

    for(int v=0;v<=k;v++)
        for(int b=0;b< 3 ;b++)
        { 
            for(int c=0;c< 4 ;c++)
            {
                if(strcmp(cricket[b][c],split[v])== 0)
                {
                   crick++;  
                }    
            }
        }
        cricket_score=crick;

    //For football-------------------------------------

    for(int v=0;v<=k;v++)
        for(int b=0;b< 3 ;b++)
    {
      for(int c=0;c< 4 ;c++)
      {
          if(strcmp(football[b][c],split[v])== 0)
          {
             foot++; 
          }   
      }
    }
    football_score=foot;

    //For hockey-----------------------------------
    for(int v=0;v<=k;v++)
        for(int b=0;b< 3 ;b++)
        {
            for(int c=0;c< 4 ;c++)
            {
                if(strcmp(hockey[b][c],split[v])== 0)
                {
                   hock++; 
                }   
            }
        }
        hockey_score=hock;
  

    if(basketball_score>cricket_score)
    {
       if(basketball_score>football_score)
       {
          if(basketball_score>hockey_score)
          {
              if(basketball_score>football_score)
                 strcpy(result,"Basketball");
              else
                 strcpy(result,"which I don't have any idea right now");
          }
          else
          {
              if(hockey_score>football_score)
                 strcpy(result,"Hockey");
              else
                 strcpy(result,"which I don't have any idea right now");
          }
        }
        else
        {
          if(football_score>hockey_score)
          {
              if(football_score>football_score)
                 strcpy(result,"Football");
              else
                 strcpy(result,"which I don't have any idea right now");
          }
          else
          {
             if(hockey_score>football_score)
                 strcpy(result,"Hockey");
             else
                 strcpy(result,"which I don't have any idea right now"); 
          }
        }
    }
        else
        {
          if(cricket_score>football_score)
          {
             if(cricket_score>hockey_score)
             {
                 if(cricket_score>football_score)
                    strcpy(result,"Cricket");
                 else
                    strcpy(result,"which I don't have any idea right now");
             }
             else
             {
                 if(hockey_score>football_score)
                     strcpy(result,"Hockey");
                 else
                     strcpy(result,"which I don't have any idea right now");
             }
          }
        else
        {
          if(football_score>hockey_score)
          {

              if(football_score>basketball_score)
                 strcpy(result,"Football");
              else            
                 strcpy(result,"which I don't have any idea right now");
          }
          else
          {
              if(hockey_score>football_score)
                 strcpy(result,"Hockey");
              else
                 strcpy(result,"which I don't have any idea right now");
          }
        }
        }
  
        printf("\n \n     !!!!!!I guess you are talking about %s!!!!!!! \n\n\n\n",result);



      
} 
    while((strcmp(str,"stop")!=0));

    return 0;

}
