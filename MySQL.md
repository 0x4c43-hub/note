apt-get install mysql-server //服务器
apt-get install mysql-client //客服端
apt-get install libmysqlclient-dev //库
编译时链接 -lmysqlclient
sudo service mysql start //开启服务
sudo service mysql stop //停止服务
sudo service mysql status //服务状态
sudo service mysql restart //重启服务
sudo vi /etc/mysql/debian.cnf
mysql -udebian-sys-maint -p
use mysql //打开mysql数据库
update user set authentication_string=SHA1/MD5('new password') where user='root' and Host='localhost'; //设置root用户密码,mysql 8移除了PASSWORD函数，可使用SHA1或者MD5
select user,authenticatian_string from user; //查看用户和密码
update user set plugin="mysql_native_password";
flush privileges;

sudo vi /etc/mysql/mysql.conf.d/mysqld.cnf
最后一行加入skip-grant-tables
