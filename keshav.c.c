#include <stdio.h>
int main()
{
 int a,qty,rate,total;
 printf("\nMENU CARD \nSelect your meal \n1.Chicken Kebab \n2.Zingy Parcel \n3.Shahi Paneer \n4.Momos \n5.Paneer Lebabdaar\n");
 scanf("%d",&a);
 switch(a)
 {
  case 1:
    printf("\nYou have selected Chicken Kebab.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=10;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    break;
  case 2:
    printf("\nYou have selected Zingy Parcel.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=15;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    break;
  case 3:
    printf("\nYou have selected Shahi Paneer.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=20;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    break;
  case 4:
    printf("\nYou have selected Momos.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=25;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    break;
  case 5:
    printf("\nYou have selected Paneer Lebabdaar.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=20;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    break;
  default:
    printf("\nSorry Unavailable...%ds",a);
    break;
 }
return 0;
}
