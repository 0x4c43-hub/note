### apt-get install mysql-server //服务器
### apt-get install mysql-client //客服端
### apt-get install libmysqlclient-dev //库
### 编译时链接 -lmysqlclient
### sudo service mysql start //开启服务
### sudo service mysql stop //停止服务
### sudo service mysql status //服务状态
### sudo service mysql restart //重启服务
### sudo vi /etc/mysql/debian.cnf
### mysql -udebian-sys-maint -p
### use mysql //打开mysql数据库
### update user set authentication_string=SHA1/MD5('new password') where user='root' and Host='localhost'; //设置root用户密码,mysql 8移除了PASSWORD函数，可使用SHA1或者MD5
### select user,authenticatian_string from user; //查看用户和密码
### update user set plugin="mysql_native_password";
### flush privileges; //刷新权限配置
### sudo vi /etc/mysql/mysql.conf.d/mysqld.cnf
最后一行加入skip-grant-tables //跳过权限验证
### CREATE USER <用户名>@<主机名> IDENTIFIED BY SHA1/MD5('password'); //创建用户
### GRANT privileges/ALL ON databasename.tablename TO 'username'@'host; //授权   
以上授权用户不能给其他用户授权,可使用下面的命令
### GRANT privileges ON databasename.tablename TO 'username'@'host WITH GRANT OPTION;
### SET PASSWORD FOR 'username'@'host'=PASSWORD('password'); //设置用户密码
### SET PASSWORD=PASSWORD('password');//设置当前用户密码
### REVOKE privileges ON databasename.tablename FROM 'username'@'host;
### DROP USER 'username'@'host'; //删除用户

### show databases [like '数据库名']; // 查看当前用户权限范围内的数据库
###MySQL 创建数据库
* CREATE DATABASE 数据库名;
* mysqladmin -u root -p create RUNOOB
### drop 命令删除数据库
* drop database <数据库名>;
* mysqladmin -u root -p drop RUNOOB
### MySQL 选择数据库
* use RUNOOB;
### MySQL 数据类型
|类型|	大小|	范围（有符号）|	范围（无符号）|	用途|
|---|---|---|---|---|
|TINYINT|	1 byte|	(-128，127)|	(0，255)|	小整数值|
|SMALLINT|	2 bytes|	(-32 768，32 767)|	(0，65 535)|	大整数值|
|MEDIUMINT|	3 bytes|	(-8 388 608，8 388 607)|	(0，16 777 215)|	大整数值|
|INT或INTEGER|	4 bytes|	(-2 147 483 648，2 147 483 647)|	(0，4 294 967 295)|	大整数值|
|BIGINT|	8 bytes|	(-9,223,372,036,854,775,808，9 223 372 036 854 775 807)|	(0，18 446 744 073 709 551 615)	|极大整数值|
|FLOAT|	4 bytes|(-3.402 823 466 E+38，-1.175 494 351 E-38)，0，(1.175 494 351 E-38，3.402 823 466 351 E+38)|	0，(1.175 494 351 E-38，3.402 823 466 E+38)	|单精度浮点数值|
|DOUBLE|	8 bytes|	(-1.797 693 134 862 315 7 E+308，-2.225 073 858 507 201 4 E-308)，0，(2.225 073 858 507 201 4 E-308，1.797 693 134 862 315 7 E+308)|	0，(2.225 073 858 507 201 4 E-308，1.797 693 134 862 315 7 E+308)|	双精度浮点数值|
|DECIMAL|	对DECIMAL(M,D) ，如果M>D，为M+2否则为D+2	|依赖于M和D的值	|依赖于M和D的值	|小数值|
### 日期和时间类型
|类型|	大小( bytes)|	范围|	格式|	用途 |
| ---|---|---|---|---|
|DATE	|3|	1000-01-01/9999-12-31|	YYYY-MM-DD	|日期值|
|TIME	|3	|'-838:59:59'/'838:59:59'|	HH:MM:SS	|时间值或持续时间|
|YEAR	|1|	1901/2155	|YYYY	|年份值|
|DATETIME|	8|	1000-01-01 00:00:00/9999-12-31 23:59:59|	YYYY-MM-DD HH:MM:SS|	混合日期和时间值|
|TIMESTAMP|	4|	1970-01-01 00:00:00/2038结束时间是第 2147483647 秒，北京时间 2038-1-19 11:14:07，格林尼治时间 2038年1月19日 凌晨 03:14:07|YYYYMMDD HHMMSS	|混合日期和时间值，时间戳|
### 字符串类型
|类型|	大小|	用途|
|---|---|---|
|CHAR	|0-255bytes	|定长字符串|
|VARCHAR|	0-65535bytes|	变长字符串|
|TINYBLOB|	0-255bytes|	不超过 255 个字符的二进制字符串|
|TINYTEXT	|0-255bytes|	短文本字符串|
|BLOB	|0-65 535bytes|	二进制形式的长文本数据|
|TEXT	|0-65 535bytes|	长文本数据|
|MEDIUMBLOB|	0-16777 215 bytes|	二进制形式的中等长度文本数据|
|MEDIUMTEXT|	0-16777 215 bytes	|中等长度文本数据|
|LONGBLOB	|0-4 294967 295 bytes	|二进制形式的极大文本数据|
|LONGTEXT	|0-4 294967 295 bytes	|极大文本数据|
