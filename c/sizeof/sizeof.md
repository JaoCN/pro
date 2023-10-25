## sizeof1.c 

### 误区

```
int *p = &number[0];
```

程序内定义了一个指针变量`p`，指针变量`p`的初始值是数组首元素的地址。

实际上，`p`获取的是指针变量`p`的大小。

在64位系统上，使用64位地址空间，因此指针的大小是8个字节（64位）。

在32位系统上，指针长度则为4个字节。

因此不能使用`sizeof(p)`来获得数组的长度。

### 输出

在64位系统上，输出为：

```
数组的长度是:8， int的长度是:4
数组的元素分别是:
1 2 3 4 5 32764 -1559209472 351331310
```

## sizeof2.c

### 误区

本例中，使用了`sizeof(number) / sizeof(number[0])`去获取数组的个数。

`sizeof(number)`获取数组长度，`sizeof(number[0])`计算数组每个元素的长度。

看似没什么问题，但实际的运行结果并不符合预取。

实际上，`print`函数的参数还是一个指针，所以`sizeof(number)`获取的依然是指针的长度。

### 运行结果

```
函数print中，数组长度是8 函数中数组的元素分别为:
1 2 
```

### 修正

C语言中，数组名作为函数参数传递时，必须要指定大小。

将`sizeof(number) / sizeof(number[0])`作为输入参数，传入`print`：

```
void print(int number[5], int size) {
    int index = 0;

    printf("函数print中，数组个数是%d ", size);
    
    printf("函数中数组的元素分别为:\n");

    for (index = 0; index < size; index++) {
        printf("%d ", number[index]);
    }

    printf("\n");
}
```
