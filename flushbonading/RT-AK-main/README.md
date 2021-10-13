### 目录

- [1. RT-AK](#RT-AK-简介)
- [2. 持续构建](#持续构建)
  - [官方版本](#官方版本)
  - [社区构建](#社区构建)
- [3. 获得帮助](#获得帮助)
- [4. 开发者资料](#开发者资料)

# RT-AK 简介

[![License](https://img.shields.io/badge/License-Apache%202.0-blue.svg)](./LICENSE) [![](https://img.shields.io/badge/Plugin-STM32-brightgreen)](https://github.com/RT-Thread/RT-AK-plugin-stm32) [![](https://img.shields.io/badge/Plugin-K210-brightgreen)](https://github.com/RT-Thread/RT-AK-plugin-k210)

- `RT-AK`: `RT-Thread AI Kit`，RT-Thread AI 套件。

`RT-AK` 是 `RT-Thread AI` 团队为 `RT-Thread` 实时操作系统所开发的 `AI` 套件，能够将 `AI` 模型**一键部署**到 `RT-Thread` 项目中。

开发者既能够使用 `RT-AK` 提供的 `API` 进行业务代码开发，又能在目标平台上获极致优化的性能，从而更简单便捷地开发端侧 `AI` 应用程序。

在 `RT-AK` 支持下，仅需要一行命令，即可将 `AI` 模型部署到 `RT-Thread` 系统中：

```bash
$ python aitools.py --model xxx...
```

要进一步了解如何使用框架，请查阅 [./RT-AK/README.md](./RT-AK/README.md) 中的演示示例部分。

---

**我们致力于降低嵌入式 AI 落地的难度和门槛**

# 持续构建

## 官方版本

`RT-AK` 运行环境支持：

| Build Type   | Status                                                       | Artifacts |
| ------------ | ------------------------------------------------------------ | --------- |
| Windows 10   | ![](https://img.shields.io/badge/RT--AK-passing-blackgreen.svg) |           |
| Ubuntu 18.04 | ![](https://img.shields.io/badge/RT--AK-passing-blackgreen.svg) |           |
| Mac          | -                                                            |           |

`RT-AK` 之插件支持：

| Build Type | Status                                                       | Artifacts                                                    |
| ---------- | ------------------------------------------------------------ | ------------------------------------------------------------ |
| STM32      | [![](https://img.shields.io/badge/Plugin-STM32-brightgreen)](https://github.com/RT-Thread/RT-AK-plugin-stm32) | [RT-AK 之 STM32 插件快速上手文档](./RT-AK/documents/RT-AK%E5%BF%AB%E9%80%9F%E4%B8%8A%E6%89%8B.md) |
| K210       | [![](https://img.shields.io/badge/Plugin-K210-brightgreen)](https://github.com/RT-Thread/RT-AK-plugin-k210) | [RT-AK之K210插件快速上手文档](https://github.com/RT-Thread/RT-AK-plugin-k210/blob/main/docs/RT-AK之K210插件快速上手.md) |
| -          | -                                                            | -                                                            |

其中 `STM32` 与 `K210` 原厂均有有提供模型优化（量化）操作，

但是在 `RT-AK` 中，仅有 `K210` 插件支持量化操作，`STM32` 插件**尚未集成量化功能**

注意：

- 在使用 `STM32` 插件之前，如需要进行整型计算，需要将模型提前量化好，否则就是用浮点进行计算。
- 在使用 `K210` 插件之前，神经网络模型必须是原始模型，确保其没有经过量化。如有需要，量化该过程将会在插件内部自动执行。

详细请看文档说明

## 社区构建

| Build Type | Status | Artifacts |
| ---------- | ------ | --------- |
|            |        |           |

# 获得帮助

- [RT-AK常见问题解答](./RT-AK/documents/RT-AK常见问题解答.md)

- [RT-Thread 社区论坛](https://club.rt-thread.org/)

- QQ群: 807401653

- 公众号： `RTThread 物联网操作系统`

  <img src="./RT-AK/documents/imgs/20210114105417.png" style="zoom:50%;" />
  
- 商业合作：平台支持、AI 解决方案定制等请联系 business@rt-thread.com

# 开发者资料

对项目内部细节感兴趣的开发人员，在 [RT-AK/documents](RT-AK/documents) 文件夹中有更多技术文档，欢迎贡献文档、示例工程及平台支持包(独立仓库)

- [RT-AK常见问题解答.md](RT-AK/documents/RT-AK常见问题解答.md)
- [RT-AK代码贡献手册.md](RT-AK/documents/RT-AK代码贡献手册.md)
- [RT-AK开发手册.md](RT-AK/documents/RT-AK开发手册.md)
- [RT-AK快速上手.md](RT-AK/documents/RT-AK快速上手.md) | [English](RT-AK/documents/RT-AK%20Quick%20Start.md)
- [RT-AK关于模型补充说明.md](RT-AK/documents/RT-AK关于模型补充说明.md)

- [RT-Thread编程指南.pdf](RT-AK/documents/RT-Thread编程指南.pdf)