/*_************************************************************************
STUDENT OATH:
-------------
A comment with the following must appear in every file submitted.
Please ensure that if this is part of your source code that it is placed
in a comment so that your code will still compile.

"I declare that the attached assignment is wholly my own work in accordance
with Seneca Academic Policy. No part of this assignment has been copied
manually or electronically from any other source (including web sites) or
distributed to other students."

Name HAEYTHAM ALMALAK   Student ID # *********
************************************************
program: [PROJECT155.c]
author:  [Haeytham AlMalak][STUDENT#********
Section: [PRG155NDDL]
date:    [21NOVEMBER,2018]
purpose: [PRG155 Auto Bulding Program]
*************************************************************************-*/
#include <stdio.h>
#include <stdlib.h>
int validateData(int MiNiMuM, int MaXiMuM);
int main(void) {
	system("COLOR 5F");
	int LoOpInG = 1;
	int MiNiMuM=0, MaXiMuM=0;
	int canclewindow = 0;
	int  ia = 1, ib = 1, yy;
	char r = 0;
	printf("\t\t      [Welcome to the PRG 155 Auto Building Program]\n\n");
	while (LoOpInG != 0) {      //While Statement- Sentinel loop//
		
		int WhnDow = 1;
		int canclewindow = 0;
		int FloORNum = 1, ia = 1, ib = 1;
		printf("\a\t\t\t\tEnter 0 to ==> exit\n\
				\tor\n\
				\b\b\b\(Enter Aany Number to) ==> Start:\t\n");
		printf("\t\t\t******************************************\n\n==> ");
		scanf("%d", &LoOpInG);
		system("cls");
		if (LoOpInG == 0) { //if Statement to Start or Exit//	
			return 0; //Return //
		}	
		//----------------//////////////////--WAS STARTING LOOP, NOW WE WILL START PROJECTS LOGIC PROGRESS---//////////////////-----------------//
		
				printf("Please Enter the Number of Floors (1 to 1000): ");
				FloORNum =validateData(1, 1000); //The values will go to the function and back again as VaLuE //

				printf("\nPlease Enter the Number of Windows (1 to 20): ");
				WhnDow =validateData(1, 20); //The values will go to the function and back again as VaLuE //

			//----------------/////////////The Building structure----------//////////////////-----------------//

			for (yy = 1; yy <= FloORNum-1; yy += 1) {     //floors looping/////////

				printf("\n+");        //the floor eadge left //
				printf("--");
				for (ia = 1; ia <= WhnDow; ia += 1) {             //Windows looping//
					printf("----"); // the floor//
				}
				printf("--");
				printf("+\n"); //the floor eadge right //
				printf("|"); // first up wall left //
				for (ib = 0; ib <= WhnDow; ib += 1) {
					printf("    "); // upper space//
				}
				printf("|\n"); // first up wall right//
				printf("|");  // second  up wall left//
				printf(" ");
				for (ib = 1; ib <= WhnDow; ib += 1) {
					printf(" ==="); // up window//
				}
				printf("  ");
				printf(" |\n");
				printf("|");
				printf("  ");
				for (ib = 1; ib <= WhnDow; ib += 1) {
					printf("| | "); //window sides//
				}
				printf("  ");
				printf("|\n");
				printf("|");
				printf(" ");
				for (ib = 1; ib <= WhnDow; ib += 1) {
					printf(" ==="); // down window//
				}
				printf("   ");
				printf("|\n");
				printf("|    ");
				for (ib = 1; ib <= WhnDow; ib += 1) {
					printf("    ");
				}
				printf("|");
			}
			//----------------/////////////first floor//----------//////////////////-----------------//
				                                
			canclewindow = WhnDow - 1;
			printf("\n+");//the floor eadge L //

			for (ia = 0; ia <= WhnDow; ia += 1) {
				printf("----");  // the floor//
			}
			printf("+\n"); //the floor eadge right //
			printf("|");

			for (ib = 0; ib <= WhnDow; ib += 1) {
				printf("    ");  //first  space push the R wall//
			}
			printf("|\n"); //2nd wall L new line//
			printf("|");
			printf("  === ");    //upper part door//
			for (ib = 0; ib < canclewindow; ib += 1) {                //WINDOW 1 PART//
				printf("=== "); // up window//

			}
			printf("  |\n"); // R side wall 2nd part//
			printf("|");   //Wall L side 3rd part//
			printf("  | |"); //2nd part door//
			printf(" ");
			for (ib = 1; ib <= canclewindow; ib += 1) {                 //WINDOW 2 PART  //
				printf("| | ");
			}
			printf("  |\n"); // 3RD WALL R//
			printf("|");
			printf("  | |"); //3rd part door//
			printf(" ");
			for (ib = 0; ib < canclewindow; ib += 1) {              //WINDOW 3 PART  //

				printf("=== ");
			}
			printf("  |\n"); //wall 4th part R//
			printf("|");
			printf("  | |  "); //4th part door//

			for (ib = 1; ib < WhnDow; ib += 1) {
				printf("    ");
			}
			printf(" |\n"); // wall last part R//
			printf("**");
			for (ib = 0; ib <= WhnDow; ib += 1) {
				printf("****");

			}
			printf("\n\n");

			system("pause");
			system("cls");	
	}
}
int validateData(int MiNiMuM, int MaXiMuM) { ///The Function//
	int VaLuE, a=0;
	do {
		scanf("%d", &VaLuE);
		if (VaLuE <= MaXiMuM && VaLuE >= MiNiMuM) {
			a = 1;
		}
		else{
			printf("*** Sorry, value ( %d ) MUST BE between %d and %d ***\n", VaLuE, MiNiMuM, MaXiMuM);
			printf("Enter the Number Again please ==>  ");
		}
	} while (a == 0);
	{
		return VaLuE;
	}
}



/*       
					  [Welcome to the PRG 155 Auto Building Program]

								Enter 0 to ==> exit
										or
							 (Enter Aany Number to) ==> Start:
						******************************************

==> 3
-------------------------------------------------------------------------------------
Please Enter the number of floors (1 to 1000): 55555
*** Sorry, value ( 55555 ) MUST BE between 1 and 1000 ***
Enter the Number Again please ==>  4

Please Enter the number of Windows (1 to 20): 4444
*** Sorry, value ( 4444 ) MUST BE between 1 and 20 ***
Enter the Number Again please ==>  5

+------------------------+
|                        |
|  === === === === ===   |
|  | | | | | | | | | |   |
|  === === === === ===   |
|                        |
+------------------------+
|                        |
|  === === === === ===   |
|  | | | | | | | | | |   |
|  === === === === ===   |
|                        |
+------------------------+
|                        |
|  === === === === ===   |
|  | | | | | | | | | |   |
|  === === === === ===   |
|                        |
+------------------------+
|                        |
|  === === === === ===   |
|  | | | | | | | | | |   |
|  | | === === === ===   |
|  | |                   |
**************************

Press any key to continue . . .
*/