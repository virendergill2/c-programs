
int main() {

  int i, num = 0, remainder;

  printf("Enter the num");
  scanf("%d", &i);

  while (i != 0) {
    remainder = i % 10;
    num = num * 10 + remainder;
    i /= 10;
  }

  printf("num = %d", num);
}
