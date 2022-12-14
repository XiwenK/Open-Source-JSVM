# Open-Source-JSVM

## 项目名称：开源 JS 虚拟机项目 (Open-Source-JSVM)

项目指导老师：Xiaohua Shi

项目参与人：Xiwen Kang Sean

项目目标：基于 QuickJS 自主改进设计开源的 JSVM

项目第一期历时：2021.4 ~ 2021.8

负责模块：QuickJS GC & VM memory 



## 个人目标以及实际工作

个人目标：基于 QuickJS 改进 GC 机制和虚拟机内存管理

实际工作：

- 第一阶段：比较调研 QuickJS 和JerryScript 两种 JSVM 的 GC 性能

  工作记录：QuickJS 较为轻量级并且 GC 性能更优

- 第二阶段：调研 QuickJS 的 GC实现机制

  工作记录：调研结果详见文件 **QuickJS GC 机制总结.md **以及 **GC原理图例.pdf**

  结论：发现 QuickJS 每次变量申请空间都需要向系统申请内存空间，耗时严重，设想可以在程序			开始时一次性向系统申请一块较大内存，交由虚拟机自己管理内存分配过程。

- 第三阶段：重新设计 QuickJS 的内存管理机制

  工作记录：调研 linux malloc, free, realloc 函数的机制，并在老师的指导建议下反复修改设计，期					间还参考过 JVM 中的机制。

- 第四阶段：代码编写以及程序调试

  工作记录：设计了两个版本的内存管理机制并编码实现，已通过程序编译， 具体设计的思路详见					文件 **QuickJS 内存管理机制设计.md**。

开发环境：

- MACOS BigSur 11.5.2
- 项目包下载地址：[quickjs 2020-03-16](https://gitee.com/lhtin/quickjs)
- vscode & 插件推荐：
  - Local history：保存本地修改版本，防止版本丢失
  - CodeLLDB：lldb debug tool  与 vscode 调试 C 项目的建议附在 **代码解析.md** 中
