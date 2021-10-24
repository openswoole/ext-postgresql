/*
  +----------------------------------------------------------------------+
  | Swoole                                                               |
  +----------------------------------------------------------------------+
  | This source file is subject to version 2.0 of the Apache license,    |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | http://www.apache.org/licenses/LICENSE-2.0.html                      |
  | If you did not receive a copy of the Apache2.0 license and are unable|
  | to obtain it through the world-wide-web, please send a note to       |
  | license@swoole.com so we can mail you a copy immediately.            |
  +----------------------------------------------------------------------+
  | Author: Zhenyu Wu  <936321732@qq.com>                                |
  |         Tianfeng Han <rango@swoole.com>                              |
  +----------------------------------------------------------------------+
 */
#ifndef OPENSWOOLE_POSTGRESQL_H_
#define OPENSWOOLE_POSTGRESQL_H_

#include "ext/openswoole/config.h"
#include "ext/openswoole/ext-src/php_swoole_cxx.h"
#include "config.h"

#define PHP_OPENSWOOLE_EXT_PLUS_VERSION     "4.7.2"
#define PHP_OPENSWOOLE_EXT_PLUS_VERSION_ID  40702

#if SWOOLE_API_VERSION_ID < 0x202109a
#error "Ext version does not match the Open Swoole version"
#endif

#ifdef __APPLE__
#include <libpq-fe.h>
#endif

#ifdef __linux__
#include <postgresql/libpq-fe.h>
#endif

#include <zend_portability.h>

#endif
