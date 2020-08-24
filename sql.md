# use RUNOOB; 命令用于选择数据库。
# set names utf8; 命令用于设置使用的字符集。
# SELECT * FROM Websites; 读取数据表的信息。
## SQL SELECT 语法
SELECT column_name,column_name FROM table_name;
SELECT * FROM table_name;
## SQL SELECT DISTINCT 语法
SELECT DISTINCT column_name,column_name FROM table_name;
## SQL WHERE 语法
SELECT column_name,column_name FROM table_name WHERE column_name operator value;

### WHERE 子句中的运算符
下面的运算符可以在 WHERE 子句中使用：
运算符 		      描述
=               等于
<> 		          不等于。注释：在 SQL 的一些版本中，该操作符可被写成 !=
> 		          大于
< 	          	小于
>= 		          大于等于
<= 		          小于等于
BETWEEN 	      在某个范围内
LIKE 		        搜索某种模式
IN 		          指定针对某个列的多个可能值

SQL AND & OR 运算符

如果第一个条件和第二个条件都成立，则 AND 运算符显示一条记录。

如果第一个条件和第二个条件中只要有一个成立，则 OR 运算符显示一条记录。
SQL ORDER BY 语法
SELECT column_name,column_name
FROM table_name
ORDER BY column_name,column_name ASC|DESC;

SQL INSERT INTO 语法
INSERT INTO 语句可以有两种编写形式。
第一种形式无需指定要插入数据的列名，只需提供被插入的值即可：
INSERT INTO table_name VALUES (value1,value2,value3,...);

第二种形式需要指定列名及被插入的值：
INSERT INTO table_name (column1,column2,column3,...) VALUES (value1,value2,value3,...);

SQL UPDATE 语法
UPDATE table_name
SET column1=value1,column2=value2,...
WHERE some_column=some_value;
SQL DELETE 语法
DELETE FROM table_name
WHERE some_column=some_value;

SQL SELECT TOP, LIMIT, ROWNUM 子句
SQL Server / MS Access 语法
SELECT TOP number|percent column_name(s) FROM table_name;
MySQL 语法
SELECT column_name(s) FROM table_name LIMIT number;
Oracle 语法
SELECT column_name(s) FROM table_name WHERE ROWNUM <= number;

SQL LIKE 语法
SELECT column_name(s) FROM table_name WHERE column_name LIKE pattern;

SQL 通配符
在 SQL 中，通配符与 SQL LIKE 操作符一起使用。
SQL 通配符用于搜索表中的数据。
在 SQL 中，可使用以下通配符：
通配符 				描述
% 				替代 0 个或多个字符
_ 				替代一个字符
[charlist] 			字符列中的任何单一字符
[^charlist]或[!charlist] 	不在字符列中的任何单一字符

SQL IN 语法
SELECT column_name(s) FROM table_name WHERE column_name IN (value1,value2,...);
SELECT column_name(s) FROM table_name WHERE column_name NOT IN (value1,value2,...);

SQL BETWEEN 语法
SELECT column_name(s) FROM table_name WHERE column_name BETWEEN value1 AND value2; 
SELECT column_name(s) FROM table_name WHERE column_name NOT BETWEEN value1 AND value2; 

列的 SQL 别名语法
SELECT column_name AS alias_name FROM table_name;

表的 SQL 别名语法
SELECT column_name(s) FROM table_name AS alias_name;

