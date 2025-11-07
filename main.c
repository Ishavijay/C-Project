#include <stdio.h>
#include <string.h>

int main() {
    char name,address;
    int mobile_number;
    int choice,choice1,choice2,choice3,choice4,choice5;
    int quantity;
    float processorPrice = 0.0, gpuPrice = 0.0, ramPrice = 0.0, storagePrice = 0.0, otherPrice = 0.0, monitorPrice = 0.0;
    char processor[30], gpu[40], ram[10], storage[30], other[20], monitor[5];

    printf("===== ISHVIT CORPORATIONS =====\n");
    printf("Welcome! Customize your PC Order Below.\n\n");

    //Personal details
    printf("Please enter your name:");
    scanf("%d",&name);
    printf("Enter your mobile number:");
    scanf("%c",&mobile_number);
    printf("Enter your address");
    scanf("%c",&address);
    // Processor Menu
    printf("Select Processor (CPU):\n");
    printf("Intel Core \n");
    printf("1.Intel i3-12100 -$350.0\n2. Intel i5-14400F - $350\n3.Intel i5-14600 - $370\4.Intel i5 -14600K-$390\n5.Intel i7-14700F -$400.0\n6. Intel i7-13700K - $450\n7. Intel i7-14700KF -$500.0\n ");
    printf("AMD Ryzen");
    printf("8.AMD Ryzen 9 9900X3D - $110\n9. AMD Ryzen 5 7600X- $250\n10. AMD Ryzen 7 9800X3D:- $250");
    printf("Enter choice (1-10): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: strcpy(processor, "Intel i3-12100"); processorPrice = 350.0; break;
        case 2: strcpy(processor, "Intel i5-14400F"); processorPrice = 350.0; break;
        case 3: strcpy(processor, "Intel i5-14600K"); processorPrice = 370.0; break;
        case 4: strcpy(processor, "Intel i5-13600KF"); processorPrice = 390.0; break;
        case 5: strcpy(processor, "Intel i7-14700F"); processorPrice = 400.0; break;
        case 6: strcpy(processor, "Intel i7"); processorPrice = 450.0; break;
        case 7: strcpy(processor, "Intel i7"); processorPrice = 500.0; break;    
        case 8: strcpy(processor, "AMD Ryzen 5"); processorPrice = 250.0; break;
        case 9: strcpy(processor, "AMD Ryzen 7"); processorPrice = 250.0; break;
        case 10: strcpy(processor, "AMD Ryzen 7"); processorPrice = 250.0; break;
        default: strcpy(processor, "None"); processorPrice = 0.0;
    }

    // GPU Menu
    printf("\nSelect Graphics Card (GPU):\n");
    printf("1. NVIDIA GTX 1650 - $150\n2. NVIDIA GTX 3060 - $400\n3. JieShou AMD RX580 8G - $140\n4. AMD Radeon RX 6600 - $300\n");
    printf("Enter choice (1-4): ");
    scanf("%d", &choice1);

    switch(choice1) {
        case 1: strcpy(gpu, "NVIDIA GTX 1650"); gpuPrice = 150.0; break;
        case 2: strcpy(gpu, "NVIDIA GTX 3060"); gpuPrice = 400.0; break;
        case 3: strcpy(gpu, "JieShou AMD RX580 8G"); gpuPrice = 140.0; break;
        case 4: strcpy(gpu, "AMD Radeon RX 6600"); gpuPrice = 300.0; break;
        default: strcpy(gpu, "None"); gpuPrice = 0.0;
    }

    // RAM Menu
    printf("\nSelect RAM:\n");
    printf("1. 2GB - $15\n2. 4GB - $30\n3. 8GB - $50\n4. 16GB - $80\n5. 32GB - $150\n");
    printf("Enter choice (1-5): ");
    scanf("%d", &choice2);

    switch(choice2) {
        case 1: strcpy(ram, "2GB"); ramPrice = 15.0; break;
        case 2: strcpy(ram, "4GB"); ramPrice = 30.0; break;
        case 3: strcpy(ram, "8GB"); ramPrice = 50.0; break;
        case 4: strcpy(ram, "16GB"); ramPrice = 80.0; break;
        case 5: strcpy(ram, "32GB"); ramPrice = 150.0; break;
        default: strcpy(ram, "None"); ramPrice = 0.0;
    }

    // Storage Menu
    printf("\nSelect Storage:\n");
    printf("1. 256GB Pendrive - $40\n2. 500GB SSD - $70\n3. 1TB Portable SSD - $120\n4. 5TB HDD - $100\n");
    printf("Enter choice (1-4): ");
    scanf("%d", &choice3);

    switch(choice3) {
        case 1: strcpy(storage, "256GB Pendrive"); storagePrice = 40.0; break;
        case 2: strcpy(storage, "500GB SSD"); storagePrice = 70.0; break;
        case 3: strcpy(storage, "1TB Portable SSD"); storagePrice = 120.0; break;
        case 4: strcpy(storage, "5TB HDD"); storagePrice = 100.0; break;
        default: strcpy(storage, "None"); storagePrice = 0.0;
    }

    // Other Accessories Menu
    printf("\nSelect Other Accessory:\n");
    printf("1. HDMI Cable - $10\n2. Printer - $300\n3. Keyboard - $150\n4. Mouse - $40\n5. None\n");
    printf("Enter choice (1-5): ");
    scanf("%d", &choice4);

    switch(choice4) {
        case 1: strcpy(other, "HDMI Cable"); otherPrice = 10.0; break;
        case 2: strcpy(other, "Printer"); otherPrice = 300.0; break;
        case 3: strcpy(other, "Keyboard"); otherPrice = 150.0; break;
        case 4: strcpy(other, "Mouse"); otherPrice = 40.0; break;
        default: strcpy(other, "None"); otherPrice = 0.0;
    }

    // Monitor Option
    printf("\nDo you need a Monitor ($600)?\n1. Yes\n2. No\nEnter choice (1-2): ");
    scanf("%d", &choice);

    if(choice == 1) { strcpy(monitor, "Yes"); monitorPrice = 600.0; }
    else { strcpy(monitor, "No"); monitorPrice = 0.0; }

    // Quantity
    printf("\nEnter Quantity: ");
    scanf("%d", &quantity);

    // Total Price
    float totalPrice = (processorPrice + gpuPrice + ramPrice + storagePrice + otherPrice + monitorPrice) * quantity;

    // Order Summary
    printf("Hi %c here is your order summary,Please check!!",name);
    printf("\n=====> ORDER SUMMARY <=====\n");
    printf("Processor: %s\n", processor);
    printf("GPU: %s\n", gpu);
    printf("RAM: %s\n", ram);
    printf("Storage: %s\n", storage);
    printf("Other: %s\n", other);
    printf("Monitor: %s\n", monitor);
    printf("Quantity: %d\n", quantity);
    printf("----------------------------\n");
    printf("Total Price: $%.2f\n", totalPrice);
    printf("============================\n");

    // Confirmation
    printf("\nConfirm Order?\n1. Yes\n2. No\nEnter choice (1-2): ");
    scanf("%d", &choice5);

    if(choice5 == 1){
        printf("\n (^ _ ^) Yay! %c Your order has been placed successfully.\n",name);
        printf("\nThank you for shopping with ISHVIT CORPORATIONS!\n");
    }else{
        printf("\n (>_<) Order cancelled.\n");
            printf("See you next time %c, till then byee, have a great day!!",name);
    }
    return 0;
}
