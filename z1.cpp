//������ ��������� ����������
double HasDiscount(Order order) 
{
  return (order.BasePrice() > 1000);
}
//����������� ������....�������� ������ ������ ��� ���������� � ������� ��� �����.
class PizzaDelivery
{
  int getRating()
  {
    return numberOfLateDeliveries > 5 ? 2 : 1;
  }
}
//�������� ������
void sum()
{
	...........
}