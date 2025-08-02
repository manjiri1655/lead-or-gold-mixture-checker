#include<iostream> 
using namespace std; 
void calculate_for_2_mixtures(); 
void calculate_for_3_mixtures(); 
void calculate_for_2_mixtures() 
{ 
  int mixture[3][3]; 
  int desired_ratio [3]; 
  int row_counter; 
  int column_counter; 
  int obtained_ratio[3]; 
  int multiple_counter; 
  int matched=0; 
   
  cout<<"\nRatio for mixture of Algolene, Basicine, Cobolase \n\nRatio in the form - Algolene:Basicine:Cobolase"; 
  cout<<"\n\nEnter the first mixture ratio: "; 
  for(row_counter=0;row_counter<1;row_counter++) 
  { 
   for(column_counter=0;column_counter<=2;column_counter++) 
   { 
    cin>>mixture[row_counter][column_counter]; 
   } 
  } 
   
  cout<<"\nEnter the second mixture ratio: "; 
  for(row_counter=1;row_counter<2;row_counter++) 
  { 
   for(column_counter=0;column_counter<=2;column_counter++) 
   { 
    cin>>mixture[row_counter][column_counter]; 
   } 
  } 
   
  cout<<"\nEnter the desired mixture ratio: "; 
  for(row_counter=2;row_counter<3;row_counter++) 
  { 
   for(column_counter=0;column_counter<=2;column_counter++) 
   { 
    cin>>mixture[row_counter][column_counter]; 
   } 
  } 
   
  obtained_ratio[0]=(mixture[0][0]) + (mixture[1][0]); 
  obtained_ratio[1]=(mixture[0][1]) + (mixture[1][1]); 
  obtained_ratio[2]=(mixture[0][2]) + (mixture[1][2]); 
   
  if(obtained_ratio[0]==mixture[2][0] && obtained_ratio[1]==mixture[2][1] && obtained_ratio[2]==mixture[2][2]) 
  { 
   cout<<"\n Mixture is Possible"; 
   cout<<"\nBy taking a ratio of 1:1 of the available two mixtures"; 
  } 
  else 
  {    
   obtained_ratio[0]=(mixture[0][0]*1) + (mixture[1][0]*2); 
   obtained_ratio[1]=(mixture[0][1]*1) + (mixture[1][1]*2); 
   obtained_ratio[2]=(mixture[0][2]*1) + (mixture[1][2]*2); 
    for(multiple_counter=0; multiple_counter<100; multiple_counter++) 
    { 
       if(obtained_ratio[0]==mixture[2][0]*multiple_counter && obtained_ratio[1]==mixture[2][1]*multiple_counter && obtained_ratio[2]==mixture[2][2]*multiple_counter) 
    	{ 
        matched=matched+1; 
        break; 
    	} 
    	else 
    	{ 
     	matched=0; 
    	} 
    } 
      
    if (matched>0) 
    { 
       cout<<"\nMixture is Possible"; 
       cout<<"\nBy taking a ratio of 1:2 of the available two mixtures"; 
    } 
   else  
    { 
    	cout<<"\nMixture is Impossible"; 
    }    
 } 
} 
void calculate_for_3_mixtures() 
{ 
  int mixture[4][3]; 
  int desired_ratio [3]; 
  int row_counter; 
  int column_counter; 
  int obtained_ratio[3]; 
  int multiple_counter; 
  int matched=0; 

  cout<<"\nRatio for mixture of Algolene, Basicine, Cobolase \n\nRatio in the form - Algolene:Basicine:Cobolase"; 
  cout<<"\n\nEnter the first mixture ratio: "; 
  for(row_counter=0;row_counter<1;row_counter++) 
  { 
   for(column_counter=0;column_counter<=2;column_counter++) 
   { 
    cin>>mixture[row_counter][column_counter]; 
   } 
  } 
  cout<<"\nEnter the second mixture ratio: "; 
  for(row_counter=1;row_counter<2;row_counter++) 
  { 
   for(column_counter=0;column_counter<=2;column_counter++) 
   { 
    cin>>mixture[row_counter][column_counter]; 
   } 
  } 
  cout<<"\nEnter the third mixture ratio: "; 
  for(row_counter=2;row_counter<3;row_counter++) 
  { 
   for(column_counter=0;column_counter<=2;column_counter++) 
   { 
    cin>>mixture[row_counter][column_counter]; 
   } 
  } 
  cout<<"\nEnter the desired mixture ratio: "; 
  for(row_counter=3;row_counter<4;row_counter++) 
  { 
   for(column_counter=0;column_counter<=2;column_counter++) 
   { 
    cin>>mixture[row_counter][column_counter]; 
   } 
  } 
  obtained_ratio[0]=(mixture[0][0]) + (mixture[1][0]) + (mixture[2][0]); 
  obtained_ratio[1]=(mixture[0][1]) + (mixture[1][1]) + (mixture[2][1]); 
  obtained_ratio[2]=(mixture[0][2]) + (mixture[1][2]) + (mixture[2][2]); 
   
  if(obtained_ratio[0]==mixture[3][0] && obtained_ratio[1]==mixture[3][1] && obtained_ratio[2]==mixture[3][2]) 
  { 
   cout<<"\nMixture is Possible"; 
   cout<<"\nBy taking a ratio of 1:1:1 of the available two mixtures"; 
  } 
  else 
  {  
  obtained_ratio[0]=(mixture[0][0]*8) + (mixture[1][0]*1) + (mixture[2][0]*5); 
  obtained_ratio[1]=(mixture[0][1]*8) + (mixture[1][1]*1) + (mixture[2][1]*5); 
  obtained_ratio[2]=(mixture[0][2]*8) + (mixture[1][2]*1) + (mixture[2][2]*5); 
   
    for(multiple_counter=0; multiple_counter<100; multiple_counter++) 
    {
    if(obtained_ratio[0]==mixture[3][0]*multiple_counter && obtained_ratio[1]==mixture[3][1]*multiple_counter && obtained_ratio[2]==mixture[3][2]*multiple_counter) 
    { 
        matched=matched+1; 
        break;         
    } 
    else 
    { 
     matched=0; 
    } 
    } 
    if (matched>0) 
    { 
       cout<<"\nMixture is Possible"; 
       cout<<"\nBy taking a ratio of 8:1:5 of the available two mixtures"; 
    } 
  	else 
  	{ 
   		cout<<"Mixture is Imossible"; 
  	} 
 	} 
} 
int main() 
    { 
     int ch=0; 
     do{ 
 	cout<<"\n\n***************Tranformation*Of*Lead*To*Gold**************"; 
  	cout<<"\n\n1. FOR 2 MIXTURES"; 
  	cout<<"\n\n2. FOR 3 MIXTURES"; 
  	cout<<"\n\n3. EXIT FROM SYSTEM"; 
  	cout<<"\n\nENTER YOUR CHOICE : - "; 
  	cin>>ch; 
  	switch(ch) 
  	{ 
	   case 1: 
	    calculate_for_2_mixtures(); 
	    break; 
	   case 2: 
	    calculate_for_3_mixtures(); 
	    break; 
	   case 3: 
	    cout<<"\n*******THANK*YOU********"; 
	    break; 
	      default: 
	    cout<<"\n\nEnter Correct Choice!!!"; 
  	} 
 }while(ch!=3); 
 return 0; 
} 

