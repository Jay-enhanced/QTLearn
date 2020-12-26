# QTLearn#
 记录QT学习过程，基于QT5.12.3，书籍《QT5.9 C++开发指南》

----------
## 第二章简记##

1. 对于自定义的信号与槽，需要手动connect；
2. 菜单栏和工具栏可以添加action组件；
3. 将ico文件放到项目的根目录下，然后在.pro文件中添加`RC_ICONS = xxx.ico`，ico文件必须为正式的，不是那种改后缀名的才可以。
##第四章##
###4.1字符串与输入输出##
####4.1.1字符串与数值之间的转换##
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
