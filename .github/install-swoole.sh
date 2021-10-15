wget https://github.com/openswoole/swoole-src/archive/master.zip &&
        unzip master.zip &&
        cd swoole-src-master &&
        phpize && ./configure &&
        make -j$(sysctl -n hw.ncpu) &&
        sudo make install &&
        php --ini &&
        php -v &&
        sudo sh -c "echo 'extension=openswoole.so' >> /etc/php/7.4/cli/conf.d/30-openswoole.ini" &&
        php -m &&
        cd - &&
        rm -rf swoole-src-master &&
        pwd