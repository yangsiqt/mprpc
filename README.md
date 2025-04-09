# mprpc分布式网络通信框架
### 概述

本项目是由C++开发的分布式网络通信框架(RPC)，为分布式环境下服务器之间进行远程方法调用提供一套接口

- 使用muduo网络库和Protobuf数据序列化和反序列化协议，实现了高效的RPC通信
- 使用互斥量和条件变量实现线程安全的缓冲队列，实现异步日志输出
- 使用服务器中间件ZooKeeper的服务注册和服务发现机制，实现分布式下的服务发现功能。

### 环境

- Ubuntu 2204
- muduo
- cmake 3.22.1
- protobuf 3.11.0
- zookeeper 3.4.10

### 项目目录

```
mprpc 
   
   |----bin                 可执行文件
   
   |----build               项目编译文件
    
   |----lib                 项目库文件
   
   |----src                 源文件
   
         |------include     头文件
         
         |------logger.cc               日志类
         
         |------mprpcapplication.cc     框架类
         
         |------mprpcchannel.cc         服务使用类
         
         |------rpcprovider.cc          服务提供类
         
         |------mprpcconfig.cc          配置类
         
         |------zookeeperutil.cc        zookeeper类
         
   |----test                测试代码
   
   |----example             框架使用范例
   
   |----CMakeLists.txt      顶层的CMake文件
   
   |----autobuild.sh        一键编译脚本
```

### 编译

`sh autobuild.sh` 编译后，在bin目录下生成可执行文件

### 运行

启动zookeeper

bin目录下：

`./provider -i test.conf ` (启动Rpc提供者)

`./consumer -i test.conf`(启动Rpc调用者)

发现zookeeper有rpc节点注册上

### 技术栈

项目开发涉及到以下几个方面

- RPC远程过程调用原理以及实现
- Protobuf数据序列化和反序列化协议
- ZooKeeper分布式一致性协调服务应用以及编程
- 网络库编程
- conf配置文件读取
- 异步日志模块
- 线程池模块
- CMake构建项目集成编译环境
- github管理项目

### 基本框架

![mprpc](https://typora-picture01.oss-cn-shanghai.aliyuncs.com/mprpc.png)
