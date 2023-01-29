#include<stdio.h>
typedef  struct car_specs
{
    int fuel_tank_cap;
    int seating_cap;
    float city_mileage;
}car;
int main()
{
    car c[2];
    int i;
    for(i=0;i<2;i++)
    {
        printf("Enter the car %d fuel tank capacity: ",i+1);
        scanf("%d",&c[i].fuel_tank_cap);
        printf("Enter the car %d seating capacity: ",i+1);
        scanf("%d",&c[i].seating_cap);
        printf("Enter the car %d city mileage: ",i+1);;
        scanf("%f",&c[i].city_mileage);
    }
    printf("\n");
    printf("Cars details:\n");
    for(i=0;i<2;i++)
    {
        printf("Fuel tank capacity: %d\n",c[i].fuel_tank_cap);
        printf("seating capacity: %d\n",c[i].seating_cap);
        printf("City mileage: %f",c[i].city_mileage);
    }
}
