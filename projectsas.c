#include<stdio.h>
#include<time.h>
#include <string.h>




//global count
int counter = 0;
 

//starts of my code



	
  	//struct
struct Task {
    int id;
    char title[30]; // to add a title to your task 
    char description[320]; // to write a description to your todo task   
    char status[20];   // "to be completed", "in progress", "finalized"
    //struct of deadlines
//for calling struct of deadline
struct deadline{
    int day;
	int month;
	int year;
	}deadline;

}; 

//for calling a strucs.
struct Task task[1000];


//functions :
//function 1.
void Add(){
	

	//output and input
	   printf("Add a task : \n");
	   //add id 
	   task[counter].id = counter + 1;
	   //add title 
	   getchar();
	   printf("your title  : ");
	   gets(task[counter].title);
	   //add description
	   printf("your description : ");
	   gets(task[counter].description);
	   // status
	     // edit status
	                int stschoice;
	                printf("\ndo you want to edit your task to [1]DOING\t[2]DONE\t[3]TO DO  : ");
                 	scanf("%d",&stschoice);
                 	switch(stschoice){
                 	case 1 :  strcpy(task[counter].status,"DOING\n");
                 	break;
                 	 	    
                 	case 2 :  strcpy(task[counter].status,"DONE\n");
                 	break;
                 	
                 	case 3 : strcpy(task[counter].status,"TO DO\n");
                 	break;
					  }
	   	//add deadline 
       printf("type your deadline : \n");
       printf("day : ");
       scanf("%d",&task[counter].deadline.day);
       printf("month : ");
       scanf("%d",&task[counter].deadline.month);
       printf("year : ");
       scanf("%d",&task[counter].deadline.year);
       
       
	  
	   counter++;

	   	
	   }
	    
	   
	   
	   
	   
	  	   

//function 2.
void addnewtasks(){
int num=0;
int i;
	printf("Add several new tasks : \n");
	printf("\nhow many tasks do you want ? : ");
	scanf("	%d",&num);
	for(i=0; i<num ; i++){
		 Add();
		
	}
	
}
//function 3.
void showlist(){  // i <  counter

int i;

		 for(i=0 ; i<counter; i++){
	 printf("_______________Show list of all tasks_______________ \n");
	 printf("this is your id : %d\n",task[i].id);
	 printf("this is your title : %s \n",task[i].title);
	 printf("this is your description : %s\n ",task[i].description);
	 printf("status: %s ",task[i].status);
	 printf("deadline : %d / %d / %d\n",task[i].deadline.day , task[i].deadline.month , task[i].deadline.year);
	 printf("the numbers of remined days is : %d \n",task[i].deadline.day);
	 } 


	 
	
     
 }
//tries alphabitique
void alpha(){
	
	int i;
    int j;
       
		for(i=0; i <counter; i++){
		
	    for(j=i+1; j<counter ; j++){
	    	
	      if(task[i].title[0] > task[j].title[0])	{
	      	
	      	 task[999]=task[i];
	      	 task[i]=task[j];
	      	 task[j]=task[999];
	 
	      	 
		  }
	    	
		}
		}	
		int u;
		for(u=0 ; u<counter ; u++){
	 printf("_______________Show list of all tasks_______________ \n");
	 printf("this is your id : %d\n",task[u].id);
	 printf("this is your title : %s \n",task[u].title);
	 printf("this is your description : %s\n ",task[u].description);
	 printf("status: %s ",task[u].status);
	 printf("deadline : %d / %d / %d\n",task[u].deadline.day , task[u].deadline.month , task[u].deadline.year);
	 } 
}
// tries deadline
void deadlines(){
		int i;
        int j;
        //compare between days to give the closest one.
		for(i=0; i <counter; i++){
		
	    for(j=i+1; j<counter ; j++){
	    	
	      if(task[i].deadline.day > task[j].deadline.day){
	      	
	      	 task[999]=task[i];
	      	 task[i]=task[j];
	      	 task[j]=task[999];
            }
                        
        }
    }       
                	int u;
		for(u=0 ; u<counter ; u++){
	 printf("_______________Show list of all tasks_______________ \n");
	 printf("this is your id : %d\n",task[u].id);
	 printf("this is your title : %s \n",task[u].title);
	 printf("this is your description : %s\n ",task[u].description);
	 printf("status: %s ",task[u].status);
	 printf("deadline : %d / %d / %d\n",task[u].deadline.day , task[u].deadline.month , task[u].deadline.year);
	 } 
}
// deadline 3 jour at lest
void dead(){
	int i;
	for(i=0; i<counter; i++){
		if(task[i].deadline.day <=3){
			
			printf("_______________Show list of all tasks_______________ \n");
	 printf("this is your id : %d\n",task[i].id);
	 printf("this is your title : %s \n",task[i].title);
	 printf("this is your description : %s\n ",task[i].description);
	 printf("status: %s ",task[i].status);
	 printf("deadline : %d / %d / %d\n",task[i].deadline.day , task[i].deadline.month , task[i].deadline.year);
			
		}
		
	}
	
}
//function 4.
void edit(){
	
	 int i;
	 int uid;
	 char titlename[30];
	 int searchchoice;
	 
	            //start code of edit
	            printf("Edit a task : \n");
	            //here we search for task so we can edited
	            printf("\nwich task do you want to edit  ? \n");
	            
	           printf("type your search uid :  ");
     		         scanf("%d",&uid);
     		    
     		         for(i=0 ; i<counter; i++){
	 	             if(task[i].id==uid){
	 	             
	 	        	 printf("************your task***********");
                	 printf("\nthis is your id : %d\n",task[i].id);
                	 printf("\nthis is your title : %s \n",task[i].title);
	            	 }else{
	           	        	printf("\nthis is not found!!");
	             	 }		   
		                      
	    			   }
	    			//edit title 
	                getchar();
	                printf("\nedit  your title  : ");
	                gets(task[uid-1].title);
	                //edit description
	                
	                printf("\nedit your description : ");
	                gets(task[uid-1].description);
	                
	                
	            
	             	//edit  deadline 
                    printf("\nedit your deadline : \n");
                    printf("\nday : ");
                    scanf("%d",&task[uid-1].deadline.day);
                    printf("\nmonth : ");
                    scanf("%d",&task[uid-1].deadline.month);
                    printf("\nyear : ");
                    scanf("%d",&task[uid-1].deadline.year);
                   
                      // edit status
	                int stschoice;
	                printf("\ndo you want to edit your task to [1]DOING\t[2]DONE\t[3]TO DO: ");
                 	scanf("%d",&stschoice);
                 	switch(stschoice){
                 	case 1 :  strcpy(task[uid-1].status,"DOING\n");
                 	break;
                 	 	    
                 	case 2 :  strcpy(task[uid-1].status,"DONE\n");
                 	break;
                 	
                 	case 3 : strcpy(task[uid-1].status,"TO DO\n");
                 	break;
					  }
       	          	
    	
	}



// function 5.
void remov(){
	
	
	int numsup;
	int indec;
	int i;
	int j;
	    printf("Remove a task :  \n");
	    printf("wich task do you want to delete? : ");
	    scanf("%d",&numsup);
        for( i=0 ; i<counter ; i++){
        	if(numsup==task[i].id){
        	   indec=i;	
			}  	
		}
			for (j=indec; j<counter ; j++){
				task[j] =task[j+1];
				
			}
			counter--;
	    
}
//function 6.
void Search(){
   	// search by id and by title
	 int i;
	 int uid;
	 char titlename[30];
	 int searchchoice;
	 // here we put the output of search and we input the search choice
   	printf("Search for task : \n");
	printf("do you want to search with [1]id or [2]title ?");
	scanf("%d",&searchchoice);
	//this is the switch case in case he want to choose between two choices
    switch (searchchoice){
    //case one for search by id 
             case 1 : printf("type your search uid :");
     		          scanf("%d",&uid);
     		         for(i=0 ; i<counter; i++){
	 	            if(task[i].id==uid){
	 	        	 printf("your task :\n");
                	 printf("this is your id : %d\n",task[i].id);
                	 printf("this is your title : %s \n",task[i].title);
                	 printf("this is your description : %s\n ",task[i].description);
                 	 printf("status: %s ",task[i].status);
                	 printf("deadline : %d / %d / %d",task[i].deadline.day , task[i].deadline.month , task[i].deadline.year);	
	            	 }else{
	           	 	printf("this is not found!!");
	             	 }		   
		                   return;    
	    			   }		 
   //cas two for search by title 
            	case 2 : printf("type your search title : ");
     		            scanf("%s",&titlename);
     		            for(i=0 ; i<counter; i++){
		            	if(strcmp(task[i].title,titlename) == 0){
		                printf("your task :\n");
    	                printf("this is your id : %d\n",task[i].id);
    	                printf("this is your title : %s \n",task[i].title);
    	                printf("this is your description : %s\n ",task[i].description);
    	                printf("status: %s ",task[i].status);
    	                printf("deadline : %d / %d / %d",task[i].deadline.day , task[i].deadline.month , task[i].deadline.year);	
    	    
		                } else{
		        	      printf("this is not found!!");
		    		
		            		}
		           		return;
                   		 }	    	
		            	}
		   
		   
	               	 }

//function 7.
void Statistical(){

	 printf("Statistical : \n");
	 printf("\nthe number of all tasks is : %d\n",counter);
	
}
//done and doing
void bysts(){
		int i;
	 int done=0;
     for(i=0 ; i<counter; i++){
     	if(strcmp(task[i].status , "DONE\n")==0){
     		 done++;
     		
		 }
     	
	 }
	 
	 printf("the numbers of tastk that done is : %d\n",done);
	 printf("the numbers of the tasks that todo and doing is : %d\n",counter-done);
}

int main(){
	//variable of choices
	int choice;
      
do{    
// menu of tastk :                 
	    printf("\t\t\t______________________________________________________\n");
        printf("\t\t\t|                   TODO LIST MENU                    |\n");
        printf("\t\t\t|_____________________________________________________|\n");
        printf("\t\t\t|         [1] Add a new task.  \n");          
        printf("\t\t\t|         [2] Add several new tasks. \n");
        printf("\t\t\t|         [3] Show list of all tasks. \n");
        printf("\t\t\t|         [4] Edit a task. \n");
        printf("\t\t\t|         [5] Remove a task.  \n");
        printf("\t\t\t|         [6] Search for task. \n");
        printf("\t\t\t|         [7] Statistical \n");
        printf("\t\t\t|         [8] by alphabitic \n");
        printf("\t\t\t|         [9] by deadline \n");
        printf("\t\t\t|         [10] sts by done \n");
        printf("\t\t\t|         [11] deadline by 3 days  \n");
        printf("\t\t\t|         [0] to leave. \n");
        printf("\t\t\t|_____________________________________________________\n");
        printf("type your choice [0-7] : ");
        scanf("\t%d",&choice);
        system("cls");
        
        
        
        //switch case for choices that we have in our menu :
    switch(choice){
        	
        	case 1 : Add();
        	break;
        	
        	case 2 : addnewtasks();
        	break;
        	
        	case 3: showlist();
        	break;
        	
        	case 4: edit();
        	break;
        	
        	case 5: remov();
        	break;
        	
        	case 6: Search();
        	break;
        	
        	case 7: Statistical();
        	break;
        	
        	case 8: alpha();
        	break;
        	
        	case 9: deadlines();
        	break;
        	
        	case 10: bysts();
        	break;
        	
        	case 11: dead();
        	break;
        	
        	case 0: printf("you leave the menu list!\n");
        	break;
        	
        	default: printf("this choice in invalide");
        	
        		
		} 
}  
// for if he find 0 he will quit the programe       
while(choice!=0);

	
	
//i hope my code have been good to see it :) 	
}

