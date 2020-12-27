# QTLearn
 记录QT学习过程，基于QT5.12.3，书籍《QT5.9 C++开发指南》

----------
## 第二章简记

1. 对于自定义的信号与槽，需要手动connect；
2. 菜单栏和工具栏可以添加action组件；
3. 将ico文件放到项目的根目录下，然后在.pro文件中添加`RC_ICONS = xxx.ico`，ico文件必须为正式的，不是那种改后缀名的才可以。

## 第四章
### 4.1 字符串与输入输出
#### 4.1.1 字符串与数值之间的转换
QString类从字符串转换为整数的函数
```ruby
int toInt(bool *ok=nullptr, int base=10) const
short  toShort(bool *ok=nullptr, int base=10) const
ushort toUShort(bool *ok=nullptr, int base=10) const
int toInt(bool *ok=nullptr, int base=10) const
uint toUInt(bool *ok=nullptr, int base=10) const
long toLong(bool *ok=nullptr, int base=10) const
ulong toULong(bool *ok=nullptr, int base=10) const
qlonglong toLongLong(bool *ok=nullptr, int base=10) const
qulonglong toULongLong(bool *ok=nullptr, int base=10) const
```
QString类从字符串转换为浮点数的函数
```ruby
float toFloat(bool *ok=nullptr) const;
double toDouble(bool *ok=nullptr) const;
```
Message弹窗
```ruby
QMessageBox *warningMessageBox = new QMessageBox("错误",
                                                    "数量输入应为整数",
                                                    QMessageBox::Critical,
                                                    QMessageBox::Ok | QMessageBox::Default,
                                                    QMessageBox::Cancel | QMessageBox::Escape,
                                                    0);
```
QString浮点数设置显示小数点位数
```ruby
number(double, char f='g', int prec=6)
asprintf(const char *format, ...) Q_ATTRIBUTE_FORMAT_PRINTF(1, 2)
setNum(float, char f='g', int prec=6)
setNum(double, char f='g', int prec=6)
sprintf(const char *format, ...) Q_ATTRIBUTE_FORMAT_PRINTF(2, 3)
```
QString类进制转换函数
```ruby
QString &setNum(short, int base=10)
QString &setNum(ushort, int base=10)
QString &setNum(int, int base=10)
QString &setNum(uint, int base=10)
QString &setNum(long, int base=10)
QString &setNum(ulong, int base=10)
QString &setNum(qlonglong, int base=10)
QString &setNum(qulonglong, int base=10)
```
#### 4.1.2 QString的常用功能
1. `append()`add a string from tail.
2. `prepend()`add a string from head.
3. `toUpper()`All letters of the string are converted to uppercase.
4. `toLower()`All letters of the string are converted to lowercase.
3. `count()`,`size`,`length`, The three exactly the same functions return the number of characters in the string.A Chinese character is a character.
4. `trimmed()`,Remove spaces at the beginning and the end of the string.
5. `simplified()`, Remove spaces at the beginning and the end of the string, and remove the consecutive spaces in the middle.
6. `indexOf()`Find the first occurrence of a string.
7. `lastIndexOf()`Find the last occurrence of a string.
8. `isNull()`and`isEmpty()`are functions to determine whether a string is empty.But only the unassigned string, `isNull()`returns true.Generally use `isEmpty()`to determine whether the string is empty or not.
9. `contains()`determines whether a string is contained in the string, and allows you to specify whether it is case sensitive.
10. `endsWith()`determines whether to end with a string.
11. `startsWith()`determines whether to start with a string.
12. `left()`Indicates how many characters are taken from the left side of the string.
13. `right()`Indicates how many characters are taken from the right side of the string.
14. `section()`Is a function that extract the string from start to end with sep as the separator from the string.
#### 4.1.2 SpinBox的使用
QSpinBox用于整数的显示和输入，可以表示各种进制，也可以在显示框中添加前缀和后缀。QDoubleSpinBox用于显示和输入浮点数，可以设置小数的位数，也可以设置前缀和后缀。
