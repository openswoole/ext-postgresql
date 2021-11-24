# Open Swoole Coroutine Postgres Client

> Start from version v4.8.0, this library is included in openswoole extension.

`ext-postgresql` is the Open Swoole Postgres Client library can be used with in the coroutine context without blocking IO.

### Pre-requirement

* `libpq` is required
* `openswoole` version >= 4.7.1

On MacOS, you have to install postgresql to build this extension: `brew install postgresql`.

### Build & Installation

```bash
git clone git@github.com:openswoole/ext-postgresql.git
cd ./ext-postgresql
git checkout v4.7.2
phpize
./configure
make && make install
```

Enable `openswoole_postgresql` in php.ini by adding the following line:

```
extension=openswoole_postgresql.so
```

### Check if the extension is installed

```
php --ri openswoole_postgresql
```

### Use Docker to enable

```
docker-php-ext-enable --ini-name zzz-docker-php-ext-openswoole.ini openswoole
```

### How to use the Postgres Client

```php
<?php
Co\run(function () {
    $db = new Swoole\Coroutine\PostgreSQL();
    $db->connect("host=127.0.0.1 port=5432 dbname=test user=root password=password");
    $db->prepare('fortunes', 'SELECT id, message FROM Fortune');
    $res = $db->execute('fortunes', []);
    $arr = $db->fetchAll($res);
    var_dump($arr);

    $db->prepare('select_query', 'SELECT id, randomnumber FROM World WHERE id = $1');
    $res = $db->execute('select_query', [123]);
    $ret = $db->fetchAll($res);
    var_dump($ret);
});
```

You can find more examples in the `/examples` folder.
