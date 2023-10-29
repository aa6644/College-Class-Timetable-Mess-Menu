#include <stdio.h>
int messmenu();
int timetable();
void timecalculator();
// Mini-Project 1(Section-B1)
int main()
{
  printf("Good Morning User, you have landed on the Timetable and Mess Menu Page.\n Press M to get mess menu and T to get Timetable");
  char c;
  scanf("%c", &c);
  if (c == 'M')
  {
    messmenu();
  }
  else if (c == 'T')
  {
    timetable();
  }
  else
  {
    printf("You have entered wrong input\n");
    main();
    return 0;
  }
  }
  int messmenu()
  {
    printf("Days of the week are:\n1-Monday\n2-Tuesday\n3-Wednesday\n4-Thursday\n5-Friday\n6-Saturday\n7-Sunday\n");
    int operation;
    printf("Enter day number (1,2,3,4,5,6,7):");
    scanf("%d", &operation);
    switch (operation)
    {
    case 1: // Monday
      printf("Today's Menu is:\nBreakfast:\nBread, Butter, Jam, Vada, Chutney, Tea, Coffee\n\n");
      printf("Lunch:\nMethi Chapati, Veg Topiaza Curry, Pancharatna Dal, Tomato Pulao, Steam Rice, Rasam, Buttermilk\n\n");
      printf("Snacks:\nPavbhaji/Sweetbun, Tea, Coffee\n\n");
      printf("Dinner:\nAtta Paratha, Chana Masala, Hara Moong dal, Idly, Chutney, Steam Rice, Sambar\n\n");

      break;

    case 2: // Tuesday
      printf("Today's Menu is:\nBreakfast:\nBread, Butter, Jam, Poori, Potato Masala, Tea, Coffee\n\n");
      printf("Lunch:\nSweet, Chapati, Meal Maker Curry, Pancharatna Dal, Tomato Pulao, Steam Rice, Rasam, Buttermilk\n\n");
      printf("Snacks:\nBonda/Keerai vada, Tea, Coffee\n\n");
      printf("Dinner:\nPunjabi Paratha, White Korma, Dal Makhani, Rasam, Steam Rice, Sambar\n");

      break;

    case 3: // Wednesday
      printf("Today's Menu is:\nBreakfast: Bread, Butter, Jam, Omlette, Poha, Dosa, Sambar, Tea, Coffee\n\n");
      printf("Lunch: Poori, Aloo Kara Curry, Sambar Dal, Tomato Pulao, Veg Pulao/Steam Rice, Garlic Rasam, Buttermilk\n\n");
      printf("Snacks:\nVeg Puff/SweetPuff, Tea, Coffee\n\n");
      printf("Dinner:\nChapati, Butter chicken, Paneer Butter masala, Dal, Rice \n");

      break;

    case 4: // Thursday
      printf("Today's Menu is:\nBreakfast:\nBread, Butter, Veg Semiya, Aloo Rajma, Chapathi, Tea, Coffee\n\n");
      printf("Lunch:\nMint Chapathi, White Korma, Aloo Gobi Masala, Steam Rice, Rasam, Buttermilk\n\n");
      printf("Snacks:\nBajji, Tea, Coffee\n\n");
      printf("Dinner:\nMadras Paratha, Mutter Paneer Masala, Dal Tadka, Dosa, Idly, Chutney, Steam Rice, Sambar\n");

      break;
    case 5: // Friday
      printf("Today's Menu is:\nBreakfast:\nBread, Butter, Chole Dal, Aloo Masala, Chapathi, Tea, Coffee\n\n");
      printf("Lunch:\nSweet, Chapathi, Aloo Mutter Masala, Maisoore Dal, Steam Rice, Rasam, Buttermilk\n\n");
      printf("Snacks:\nCake, Tea, Coffee\n\n");
      printf("Dinner:\nVeg Manchurian, Veg Noodles, Rasam, Steam Rice, Sambar\n");

      break;
    case 6:
      printf("Today's Menu is:\nBreakfast:\nBread, Butter,Veg Korma, Chapathi, Boiled Egg, Tea, Coffee\n\n");
      printf("Lunch:\nPoori, White Peas Curry, Aloo Bindli Sabji, Steam Rice, Rasam, Buttermilk\n\n");
      printf("Snacks:\nPakoda, Tea, Coffee\n\n");
      printf("Dinner:\nPunjabi Paratha, Aloo Capsicum Subji, Masala Dal, Idly, Chutney, Steam Rice, Sambar\n");

      break;

    case 7:
      printf("Today's Menu is:\nBreakfast:\nBread, Butter, Chole Bhature, Tea, Coffee\n\n");
      printf("Lunch:\nChapati, Chicken Pepper, Paneer Butter Masala , Steam Rice, Rasam, Buttermilk\n\n");
      printf("Snacks:\nSamosa/Aloo Bonda, Tea, Coffee\n\n");
      printf("Dinner:\nAloo Paratha, Chole Gobi Curry, Hara Moong Dal, Karakozhambu, Steam Rice, Sambar\n");

      break;

    default:
      printf("Invalid Input");
    }
    int n;
    printf("Enter 1 to check free time");
    scanf("%d",&n);
    if(n==1){
        timecalculator();
    }
    else{
        printf("Invalid Input");
    }
    return 0;
  }
  int timetable()
  {
    int operation;
    printf("Enter day order (1,2,3,4,5):");
    scanf("%d", &operation);
    switch (operation)
    {
    case 1: // Day Order-1
      printf("Hello User,your today schedule is:\n");
      printf("09:45 to 11.30 - Programming for Problem Solving (Theory)\n");
      printf("15:15 to 16:55 - Programming for Problem Solving (Lab)\n");
      printf(" \n");
      printf("Have a good day...");
      break;

    case 2: // Day Order-2
      printf("Hello User,your today schedule is:\n");
      printf("08:00 to 11.30 - Basic Mechanical and Civil Workshop\n");
      printf("12:30 to 14:15 - Calculus and Linear Algebra (Theory)\n");
      printf(" \n");
      printf("Have a good day...");
      break;

    case 3: // Day Order-3
      printf("Hello User,your today schedule is:\n");
      printf("08:00 to 09:40 - Introduction to Computational Biology (Theory)\n");
      printf("10:40 to 11:30 - Chemistry (Theory)\n");
      printf("11:35 to 12:25 - Calculus and Linear Algebra (Theory)\n");
      printf("13:25 to 15:10 - Professional Skills and Practices (Lab)\n");
      printf("15:15 to 16:55 - NSS (Lab)\n");
      printf(" \n");
      printf("Have a good day...");
      break;

    case 4: // Day Order-4
      printf("Hello User,your today schedule is:\n");
      printf("09:45 to 11:30 - Philosophy of Engineering (Lab)\n");
      printf("12:30 to 14:15 - Chemistry (Theory)\n");
      printf("14:20 to 15:10 - Calculus and Linear Algebra (Theory)\n");
      printf("15:15 to 16:05 - French (Theory)\n");
      printf("16:05 to 16:55 - Introduction to Computational Biology (Theory)\n");
      printf(" \n");
      printf("Have a good day...");
      break;
    case 5: // Day Order-5
      printf("Hello User,your today schedule is:\n");
      printf("08:00 to 09:40 - French (Theory)\n");
      printf("09:45 to 10:35 - Introduction to Computational Biology (Theory)\n");
      printf("10:40 to 11:30 - Programming for Problem Solving (Theory)\n");
      printf("11:35 to 12:25 - Chemistry (Theory)\n");
      printf("13:25 to 15:10 - Chemistry (Lab)\n");
      printf(" \n");
      printf("Have a good day...");
      break;

    default:
      printf("Invalid Input");
    }
     int n;
    printf("Enter 1 to check free time");
    scanf("%d",&n);
    if(n==1){
        timecalculator();
    }
    else{
        printf("Invalid Input");
    }
    return 0;
  }
 
 void timecalculator(){
     printf("Considering, That you take 15 minutes per meal, you will spend 1 hour in mess per day. Now select the day order to check how much time you will spend in classes and mess combined and then let us calculate your free time for better time management\n");
     int a;
     printf("Enter day order");
     scanf("%d",&a);
     switch(a)
     {
         case 1: ;
         float mess= 1;
         float classes=3.33;
         printf("Time spent in classes: %0.2f hours\n",classes);
         printf("Time spent in mess: 1 hours\n");
         float sleep;
         printf("Enter Sleeping Duration in hours:");
         scanf("%f",&sleep);
         float freetime=24-(mess+classes+sleep);
         printf("Your free time for the day is: %0.2f hours",freetime);
         break;
         
         case 2: ;
         mess= 1;
         classes=5;
         printf("Time spent in classes: %0.2f hours\n",classes);
         printf("Time spent in mess: 1 hours\n");
         sleep;
         printf("Enter Sleeping Duration in hours:");
         scanf("%f",&sleep);
         freetime=24-(mess+classes+sleep);
         printf("Your free time for the day is: %0.2f hours",freetime);
         break;
         
         case 3: ;
         mess= 1;
         classes=6.66;
         printf("Time spent in classes: %0.2f hours\n",classes);
         printf("Time spent in mess: 1 hours\n");
         sleep;
         printf("Enter Sleeping Duration in hours:");
         scanf("%f",&sleep);
         freetime=24-(mess+classes+sleep);
         printf("Your free time for the day is: %0.2f hours",freetime);
         break;
         
         case 4: ;
         mess= 1;
         classes=5.83;
         printf("Time spent in classes: %0.2f hours\n",classes);
         printf("Time spent in mess: 1 hours\n");
         sleep;
         printf("Enter Sleeping Duration in hours:");
         scanf("%f",&sleep);
         freetime=24-(mess+classes+sleep);
         printf("Your free time for the day is: %0.2f hours",freetime);
         break;
         
         case 5: ;
         mess= 1;
         classes=5.83;
         printf("Time spent in classes: %0.2f hours\n",classes);
         printf("Time spent in mess: 1 hours\n");
         sleep;
         printf("Enter Sleeping Duration in hours:");
         scanf("%f",&sleep);
         freetime=24-(mess+classes+sleep);
         printf("Your free time for the day is: %0.2f hours",freetime);
         break;
     }

 }
