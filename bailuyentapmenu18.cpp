#include<stdio.h>
#include<string.h>

struct Dish {
    int id;
    char name[20];
    int value;
};
 
int main() {
	   Dish menu[50];
		int choice;
		 struct Dish menu1={1 ,"Pho", 35};
		 struct Dish menu2={2 ,"My xao" , 40};
		 struct Dish menu3={3 ,"Bun bo" , 25};
		 struct Dish menu4={4 ,"Banh mi" , 35};
		 struct Dish menu5={5 ,"Com rang" , 50};
		 int n=5;
		 

    do {
        printf("\nMenu\n");
        printf("1. In ra gia tri cac phan tu co trong Menu: \n");
        printf("2. Them mot phan tu vao vi tri cuoi cung: \n");
        printf("3. Sua mot phan tu o vi tri cuoi cung: \n ");
        printf("4. Xoa mot phan tu o vi tri cuoi cung: \n");
        printf("5. Sap xep cac phan tu: \n");
        printf("6. Tim kiem phan tu theo ten nhap vao: \n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban:\n");
        scanf("%d", &choice);

        switch (choice) {
                case 1: {
		   	  	printf("ID mon an: %d, Ten mon an: %s, Gia mon an: %d\n", menu1.id, menu1.name, menu1.value );
		   	  	printf("ID mon an: %d, Ten mon an: %s, Gia mon an: %d\n", menu2.id, menu2.name, menu2.value );
		   	  	printf("ID mon an: %d, Ten mon an: %s, Gia mon an: %d\n", menu3.id, menu3.name, menu3.value );
		   	  	printf("ID mon an: %d, Ten mon an: %s, Gia mon an: %d\n", menu4.id, menu4.name, menu4.value );
		   	  	printf("ID mon an: %d, Ten mon an: %s, Gia mon an: %d\n", menu5.id, menu5.name, menu5.value );
		   	  	
		   	  break;
		   	  }

            case 2: {
              if (n<10) {
		   	  	 struct Dish newDish; 
		   	  	printf("Nhap ID mon an moi: ");
		   	  	scanf("%d", &newDish.id);
		   	  	printf("Nhap ten mon an moi: ");
		   	  	scanf("%s",  newDish.name);
		   	  	printf("Nhap gia mon an moi: ");
		   	  	scanf("%d", &newDish.value);
		   	  	menu[n] = newDish;  
                    n++;  
		   	        
		          }else{
		          	printf("Menu da day, khong the them mon moi:");
				  }
		            break; 
		    }

            case 3: {
                if (n > 0) {
                    printf("Sua thong tin mon an cuoi cung:\n");
                    printf("Nhap ID moi: ");
                    scanf("%d", &menu[n - 1].id);
                    printf("Nhap ten moi: ");
                    scanf("%s", menu[n - 1].name);
                    printf("Nhap gia moi: ");
                    scanf("%d", &menu[n - 1].value);
                    printf("Da sua xong.\n");
                } else {
                    printf("Menu khong co mon nao de sua.\n");
                }
                  break;
              }

            case 4: {
               if (n > 0) {
                   n--;
                   printf("Da xoa mon an o vi tri cuoi cung.\n");
                } else {
                   printf("Menu khong co mon nao de xoa.\n");
                }
                  break;
            }

            case 5: {
              for (int i = 0; i < n - 1; i++) {
                  for (int j = i + 1; j < n; j++) {
                      if (menu[i].value > menu[j].value) {
                           struct Dish temp = menu[i];
                           menu[i] = menu[j];
                           menu[j] = temp;
                         }
                     }
                   }
                 printf("Menu da sap xep theo gia tang dan.\n");
                   break;
              }

            case 6: {
                char searchName[20];
                 int count = 0;

                 printf("Nhap ten mon an can tim: ");
                 scanf("%s", searchName);
                   for (int i = 0; i < n; i++) {
                     if (strcmp(menu[i].name, searchName) == 0) {
                       printf("Tim thay: ID: %d, Ten: %s, Gia: %d\n", menu[i].id, menu[i].name, menu[i].value);
                        count++;
                    }
                 }
 
 
              if (count == 0) {
                    printf("Khong tim thay mon an: %s\n", searchName);
                }
                break;
            }

              default:
                printf("Lua chon khong hop le.\n");
         }
      } while (choice != 7);

    return 0;
}





