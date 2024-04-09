- 변수는 L-value
- 따라서 변수는 overwirte가 된다.
```c
int* adress1 = &a
int* adress2 = &b
```
위의 코드가 안되는 이유는 주소 값은 상수인데 상수 = 상수가 성립하지 않는다.
r-value = r-value 를 적은 것과 같다.
ex) 3=4

