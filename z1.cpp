//временная переменная
double HasDiscount(Order order) 
{
  double basePrice = order.BasePrice();
  return (basePrice > 1000);
}
//Встраивание метода
class PizzaDelivery 
{
  int getRating()
  {
    return moreThanFiveLateDeliveries() ? 2 : 1;
  }
  boolean moreThanFiveLateDeliveries()
  {
    return numberOfLateDeliveries > 5;
  }
}
//параметр метода
void sum(double x,double p)
{
	...........
}