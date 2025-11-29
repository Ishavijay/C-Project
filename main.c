#include <stdio.h>
#include <string.h>
//declaring variables
char name[50];
    long long mobile_number;
    int choice,choice1,choice2,choice3,choice4,choice5,choice6;
    int quantity;
    float processorPrice = 0.0, gpuPrice = 0.0, ramPrice = 0.0, storagePrice = 0.0, otherPrice = 0.0, monitorPrice = 0.0;
    char processor[30], gpu[40], ram[10], storage[30], other[200], monitor[20];
// declaring functions
void personal_details(); //Personal details function
void processormenu();//processor menu function
 void graphiccardmenu();// graphic card menu function
void rammenu();//ram menu function
void storagemenu();//storage menu function
void otheraccessorymenu();//other acsessories menu function
float totalPrice(float a, float b, float c, float d, float e, float f, int g);   //Total price function
int main() { 
       
    printf("======================= ISHVIT CORPORATIONS ======================\n");
    printf("Welcome! Customize your PC Order Below.\n\n");
//calling personal details function
personal_details();
    // Processor Menu
       processormenu();   // calling processor menu function
       graphiccardmenu(); // calling Graphics card Menu function
       rammenu(); // calling RAM Menu function
       storagemenu();// calling storage menu function
    
  otheraccessorymenu();  // calling Other Accessories Menu function
    // Monitor Optiion
    S1:
    printf("\nDo you need a Monitor ($600)?\n1. Yes\n2. No\nEnter choice (1-2): ");
    scanf("%d", &choice5);
    if(choice5 == 1) {
        strcpy(monitor, "Yes"); monitorPrice = 600.0; }
    else if (choice5 == 2)
    { strcpy(monitor, "No"); monitorPrice = 0.0; }
else{
    printf("Invalid Input!!"); printf("Choose again");goto S1;
}// Quantity
    
    printf("\nEnter Quantity: ");
    scanf("%d", &quantity);

    //calling total price function to calculate the total price of the material bought
   float price= totalPrice(processorPrice,gpuPrice,ramPrice,storagePrice,otherPrice,monitorPrice,quantity);

    // Order Summary
    printf("Hi %s here is your order summary,Please check!!",name);
    printf("\n=====> ORDER SUMMARY <=====\n");
    printf("Processor: %s\n", processor);
    printf("GPU: %s\n", gpu);
    printf("RAM: %s\n", ram);
    printf("Storage: %s\n", storage);
    printf("Other: %s\n", other);
    printf("Monitor: %s\n", monitor);
    printf("Quantity: %d\n", quantity);
    printf("----------------------------\n");
    printf("Total Price: $%.2f\n", price);
    printf("============================\n");

    // Confirmation
    printf("\nConfirm Order?\n1. Yes\n2. No\nEnter choice (1-2): ");
    scanf("%d", &choice6);

    if(choice6 == 1){
        printf("\n (^ _ ^) Yay! %s Your order has been placed successfully.\n",name);
        printf("\nThank you for shopping with ISHVIT CORPORATIONS!\n");
    }else{
        printf("\n (>_<) Order cancelled.\n");
            printf("See you next time %s, till then byee, have a great day!!",name);
    }
    return 0;
}     

//---------------------------------function definitions-------------------------------------------------
//personal detail function
void personal_details(){
    printf("Please enter your name:");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;
    printf("Enter your mobile number:");
    scanf("%lld",&mobile_number);
    return;
    }
       // processor menu funcion
       void processormenu(){
              start:
       printf(".......................Select Processor (CPU).........................\n");
    printf("             Intel Core \n             ");
    printf("1.Intel i3-12100 -$330.0\n2. Intel i5-14400F - $350\n3.Intel i5-14600K - $370\n4.Intel i5 -13600KF-$400\n5.Intel i7-14700F -$420.0\n6.Intel i7-13700K - $450\n7. Intel i7-14700KF -$500.0\n ");
    printf("              AMD Ryzen              \n");
    printf("8.AMD Ryzen 9 9900X3D - $400\n9. AMD Ryzen 5 7600X- $700\n10. AMD Ryzen 7 9800X3D:- $1000\n11.None");
           printf("\n");
    printf("Enter choice (1-11): ");
    scanf("%d", &choice);
    switch(choice) {
        case 1: strcpy(processor, "Intel i3-12100"); processorPrice = 330.0; break;
        case 2: strcpy(processor, "Intel i5-14400F"); processorPrice = 350.0; break;
        case 3: strcpy(processor, "Intel i5-14600K"); processorPrice = 370.0; break;
        case 4: strcpy(processor, "Intel i5-13600KF"); processorPrice = 400.0; break;
       case 5: strcpy(processor, "Intel i7-14700F"); processorPrice = 420.0; break;
        case 6: strcpy(processor, "Intel i7-13700K"); processorPrice = 450.0; break;
        case 7: strcpy(processor, "Intel i7-14700KF"); processorPrice = 500.0; break;    
        case 8: strcpy(processor, "AMD Ryzen 9 9900X3D"); processorPrice = 400.0; break;
        case 9: strcpy(processor, "AMD Ryzen 5 7600X"); processorPrice = 700.0; break;
        case 10: strcpy(processor, "AMD Ryzen 7 9800X3D"); processorPrice = 1000.0; break;
           case 11: strcpy(processor, "none"); processorPrice = 0.0;printf("\n"); break;
           default:printf("INVALID INPUT \n");printf("Choose Again\n"); goto start;}}
       // graphic card menu function
       void graphiccardmenu(){
              start1:
        printf("\n.................Select Graphics Card (GPU)...................\n");
    printf("1. NVIDIA GTX 1650 - $150\n2. NVIDIA GTX 3060 - $400\n3. JieShou AMD RX580 8G - $140\n4. AMD Radeon RX 6600 - $300\n5.None");
           printf("\n");
    printf("Enter choice (1-5): ");
    scanf("%d", &choice1);
   switch(choice1) {
        case 1: strcpy(gpu, "NVIDIA GTX 1650"); gpuPrice = 150.0; break;
        case 2: strcpy(gpu, "NVIDIA GTX 3060"); gpuPrice = 400.0; break;
        case 3: strcpy(gpu, "JieShou AMD RX580 8G"); gpuPrice = 140.0; break;
        case 4: strcpy(gpu, "AMD Radeon RX 6600"); gpuPrice = 300.0; break;
          case 5: strcpy(gpu, "None"); gpuPrice = 0.0;printf("\n");break;
        default: 
              printf("INVALID INPUT"); printf("Choose Again"); goto start1;
       }}
//ram menu function
       void rammenu(){
              start2:
       printf("\n...........................Select RAM..........................\n");
    printf("1. 2GB - $15\n2. 4GB - $30\n3. 8GB - $50\n4. 16GB - $80\n5. 32GB - $150\n6.None");
    printf("\n");
           printf("Enter choice (1-6): ");
    scanf("%d", &choice2);
    switch(choice2) {
        case 1: strcpy(ram, "2GB"); ramPrice = 15.0; break;
        case 2: strcpy(ram, "4GB"); ramPrice = 30.0; break;
        case 3: strcpy(ram, "8GB"); ramPrice = 50.0; break;
        case 4: strcpy(ram, "16GB"); ramPrice = 80.0; break;
        case 5: strcpy(ram, "32GB"); ramPrice = 150.0; break;
           case 6: strcpy(ram, "None"); ramPrice = 0.0;printf("\n");break;
       default:
              printf("INVALID INPUT \n") ; printf("Choose Again \n") ; goto start2;
       }}
    // Storage Menu function
       void storagemenu(){
              start3:
    printf("\n.............................Select Storage.............................\n");
    printf("1. 256GB Pendrive - $40\n2. 500GB SSD - $70\n3. 1TB Portable SSD - $120\n4. 5TB HDD - $100\n5.None");
           printf("\n");
    printf("Enter choice (1-5): ");
    scanf("%d", &choice3);
    switch(choice3) {
        case 1: strcpy(storage, "256GB Pendrive"); storagePrice = 40.0; break;
        case 2: strcpy(storage, "500GB SSD"); storagePrice = 70.0; break;
        case 3: strcpy(storage, "1TB Portable SSD"); storagePrice = 120.0; break;
        case 4: strcpy(storage, "5TB HDD"); storagePrice = 100.0; break;
           case 5: strcpy(storage, "None"); storagePrice = 0.0;printf("\n");break;
           default:printf("INVALID INPUT \n"); printf("Choose Again \n");goto start3;
       }
       }
       //othe accessory menu function
       void otheraccessorymenu(){
     // clear text
           strcpy(other, "");     
      // reset price
 otherPrice = 0.0; 
    while(1) {
        printf("\n...... Select Other Accessories (choose 0 to finish) ......\n");
        printf("1. HDMI Cable - $10\n");
        printf("2. Printer - $300\n");
        printf("3. Keyboard - $150\n");
        printf("4. Mouse - $40\n");
        printf("0. Done selecting\n");

        printf("Enter Your preference: ");
        scanf("%d", &choice4);

        switch(choice4) {
            case 1:strcat(other, "HDMI Cable, ");
                otherPrice += 10.0;
                break;

            case 2:strcat(other, "Printer, ");
                otherPrice += 300.0;
                break;

            case 3:strcat(other, "Keyboard, ");
                otherPrice += 150.0;
                break;

            case 4:strcat(other, "Mouse, ");
                otherPrice += 40.0;
                break;

            case 0: if(strlen(other) == 0)
                    strcpy(other, "None");
                return;

            default: printf("Invalid input! Try again.\n");
                continue; 
        }}}
       // total price function
       float totalPrice(float a, float b, float c, float d, float e, float f, int g){
       float price=(a+b+c+d+e+f)*g;
    return price;}
