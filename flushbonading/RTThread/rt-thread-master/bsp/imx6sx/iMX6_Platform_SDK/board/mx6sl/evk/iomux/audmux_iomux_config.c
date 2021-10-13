/*
 * Copyright (c) 2012, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

// File: audmux_iomux_config.c

/* ------------------------------------------------------------------------------
 * <auto-generated>
 *     This code was generated by a tool.
 *     Runtime Version:3.4.0.0
 *
 *     Changes to this file may cause incorrect behavior and will be lost if
 *     the code is regenerated.
 * </auto-generated>
 * ------------------------------------------------------------------------------
*/

#include "iomux_config.h"
#include "registers/regsiomuxc.h"

// Function to configure IOMUXC for audmux module.
void audmux_iomux_config(void)
{
    // Config audmux.AUD3_RXC to pad AUD_RXC(J21)
    // HW_IOMUXC_SW_MUX_CTL_PAD_AUD_RXC_WR(0x00000000);
    // HW_IOMUXC_SW_PAD_CTL_PAD_AUD_RXC_WR(0x004110B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_AUD_RXC(0x020E0050)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: audmux signal: AUD3_RXC
    //     ALT1 (1) - Select instance: i2c1 signal: I2C1_SDA
    //     ALT2 (2) - Select instance: uart3 signal: UART3_TX_DATA
    //     ALT3 (3) - Select instance: fec signal: FEC_TX_CLK
    //     ALT4 (4) - Select instance: i2c3 signal: I2C3_SDA
    //     ALT5 (5) - Select instance: gpio1 signal: GPIO1_IO01
    //     ALT6 (6) - Select instance: ecspi3 signal: ECSPI3_SS1
    HW_IOMUXC_SW_MUX_CTL_PAD_AUD_RXC_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_AUD_RXC_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_AUD_RXC_MUX_MODE_V(ALT0));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_AUD_RXC(0x020E02A8)
    //   LVE [22] - Low Voltage Enable Field Reset: DISABLED
    //     DISABLED (0) - High Voltage
    //     ENABLED (1) - Low Voltage
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PD
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: KEEP
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_AUD_RXC_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXC_LVE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXC_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXC_PUS_V(100K_OHM_PD) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXC_PUE_V(KEEP) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXC_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXC_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXC_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXC_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXC_SRE_V(SLOW));

    // Config audmux.AUD3_RXD to pad AUD_RXD(J20)
    // HW_IOMUXC_SW_MUX_CTL_PAD_AUD_RXD_WR(0x00000000);
    // HW_IOMUXC_SW_PAD_CTL_PAD_AUD_RXD_WR(0x004110B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_AUD_RXD(0x020E0054)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: audmux signal: AUD3_RXD
    //     ALT1 (1) - Select instance: ecspi3 signal: ECSPI3_MOSI
    //     ALT2 (2) - Select instance: uart4 signal: UART4_RX_DATA
    //     ALT3 (3) - Select instance: fec signal: FEC_RX_ER
    //     ALT4 (4) - Select instance: usdhc1 signal: SD1_LCTL
    //     ALT5 (5) - Select instance: gpio1 signal: GPIO1_IO02
    HW_IOMUXC_SW_MUX_CTL_PAD_AUD_RXD_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_AUD_RXD_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_AUD_RXD_MUX_MODE_V(ALT0));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_AUD_RXD(0x020E02AC)
    //   LVE [22] - Low Voltage Enable Field Reset: DISABLED
    //     DISABLED (0) - High Voltage
    //     ENABLED (1) - Low Voltage
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PD
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: KEEP
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_AUD_RXD_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXD_LVE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXD_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXD_PUS_V(100K_OHM_PD) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXD_PUE_V(KEEP) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXD_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXD_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXD_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXD_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXD_SRE_V(SLOW));

    // Config audmux.AUD3_RXFS to pad AUD_RXFS(J19)
    // HW_IOMUXC_SW_MUX_CTL_PAD_AUD_RXFS_WR(0x00000000);
    // HW_IOMUXC_SW_PAD_CTL_PAD_AUD_RXFS_WR(0x004110B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_AUD_RXFS(0x020E0058)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: audmux signal: AUD3_RXFS
    //     ALT1 (1) - Select instance: i2c1 signal: I2C1_SCL
    //     ALT2 (2) - Select instance: uart3 signal: UART3_RX_DATA
    //     ALT3 (3) - Select instance: fec signal: FEC_MDIO
    //     ALT4 (4) - Select instance: i2c3 signal: I2C3_SCL
    //     ALT5 (5) - Select instance: gpio1 signal: GPIO1_IO00
    //     ALT6 (6) - Select instance: ecspi3 signal: ECSPI3_SS0
    HW_IOMUXC_SW_MUX_CTL_PAD_AUD_RXFS_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_AUD_RXFS_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_AUD_RXFS_MUX_MODE_V(ALT0));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_AUD_RXFS(0x020E02B0)
    //   LVE [22] - Low Voltage Enable Field Reset: DISABLED
    //     DISABLED (0) - High Voltage
    //     ENABLED (1) - Low Voltage
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PD
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: KEEP
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_AUD_RXFS_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXFS_LVE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXFS_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXFS_PUS_V(100K_OHM_PD) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXFS_PUE_V(KEEP) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXFS_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXFS_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXFS_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXFS_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXFS_SRE_V(SLOW));

    // Config audmux.AUD3_TXC to pad AUD_TXC(H20)
    // HW_IOMUXC_SW_MUX_CTL_PAD_AUD_TXC_WR(0x00000000);
    // HW_IOMUXC_SW_PAD_CTL_PAD_AUD_TXC_WR(0x004110B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_AUD_TXC(0x020E005C)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: audmux signal: AUD3_TXC
    //     ALT1 (1) - Select instance: ecspi3 signal: ECSPI3_MISO
    //     ALT2 (2) - Select instance: uart4 signal: UART4_TX_DATA
    //     ALT3 (3) - Select instance: fec signal: FEC_RX_DV
    //     ALT4 (4) - Select instance: usdhc2 signal: SD2_LCTL
    //     ALT5 (5) - Select instance: gpio1 signal: GPIO1_IO03
    HW_IOMUXC_SW_MUX_CTL_PAD_AUD_TXC_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_AUD_TXC_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_AUD_TXC_MUX_MODE_V(ALT0));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_AUD_TXC(0x020E02B4)
    //   LVE [22] - Low Voltage Enable Field Reset: DISABLED
    //     DISABLED (0) - High Voltage
    //     ENABLED (1) - Low Voltage
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PD
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: KEEP
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_AUD_TXC_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXC_LVE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXC_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXC_PUS_V(100K_OHM_PD) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXC_PUE_V(KEEP) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXC_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXC_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXC_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXC_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXC_SRE_V(SLOW));

    // Config audmux.AUD3_TXD to pad AUD_TXD(J22)
    // HW_IOMUXC_SW_MUX_CTL_PAD_AUD_TXD_WR(0x00000000);
    // HW_IOMUXC_SW_PAD_CTL_PAD_AUD_TXD_WR(0x004110B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_AUD_TXD(0x020E0060)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: audmux signal: AUD3_TXD
    //     ALT1 (1) - Select instance: ecspi3 signal: ECSPI3_SCLK
    //     ALT2 (2) - Select instance: uart4 signal: UART4_CTS_B
    //     ALT3 (3) - Select instance: fec signal: FEC_TX_DATA0
    //     ALT4 (4) - Select instance: usdhc4 signal: SD4_LCTL
    //     ALT5 (5) - Select instance: gpio1 signal: GPIO1_IO05
    HW_IOMUXC_SW_MUX_CTL_PAD_AUD_TXD_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_AUD_TXD_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_AUD_TXD_MUX_MODE_V(ALT0));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_AUD_TXD(0x020E02B8)
    //   LVE [22] - Low Voltage Enable Field Reset: DISABLED
    //     DISABLED (0) - High Voltage
    //     ENABLED (1) - Low Voltage
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PD
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: KEEP
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_AUD_TXD_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXD_LVE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXD_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXD_PUS_V(100K_OHM_PD) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXD_PUE_V(KEEP) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXD_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXD_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXD_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXD_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXD_SRE_V(SLOW));

    // Config audmux.AUD3_TXFS to pad AUD_TXFS(H21)
    // HW_IOMUXC_SW_MUX_CTL_PAD_AUD_TXFS_WR(0x00000000);
    // HW_IOMUXC_SW_PAD_CTL_PAD_AUD_TXFS_WR(0x004110B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_AUD_TXFS(0x020E0064)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: audmux signal: AUD3_TXFS
    //     ALT1 (1) - Select instance: pwm3 signal: PWM3_OUT
    //     ALT2 (2) - Select instance: uart4 signal: UART4_RTS_B
    //     ALT3 (3) - Select instance: fec signal: FEC_RX_DATA1
    //     ALT4 (4) - Select instance: usdhc3 signal: SD3_LCTL
    //     ALT5 (5) - Select instance: gpio1 signal: GPIO1_IO04
    HW_IOMUXC_SW_MUX_CTL_PAD_AUD_TXFS_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_AUD_TXFS_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_AUD_TXFS_MUX_MODE_V(ALT0));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_AUD_TXFS(0x020E02BC)
    //   LVE [22] - Low Voltage Enable Field Reset: DISABLED
    //     DISABLED (0) - High Voltage
    //     ENABLED (1) - Low Voltage
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PD
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: KEEP
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_AUD_TXFS_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXFS_LVE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXFS_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXFS_PUS_V(100K_OHM_PD) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXFS_PUE_V(KEEP) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXFS_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXFS_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXFS_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXFS_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXFS_SRE_V(SLOW));

    // Config audmux.AUDIO_CLK_OUT to pad AUD_MCLK(H19)
    // HW_IOMUXC_SW_MUX_CTL_PAD_AUD_MCLK_WR(0x00000000);
    // HW_IOMUXC_SW_PAD_CTL_PAD_AUD_MCLK_WR(0x004110B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_AUD_MCLK(0x020E004C)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: audmux signal: AUDIO_CLK_OUT
    //     ALT1 (1) - Select instance: pwm4 signal: PWM4_OUT
    //     ALT2 (2) - Select instance: ecspi3 signal: ECSPI3_RDY
    //     ALT3 (3) - Select instance: fec signal: FEC_MDC
    //     ALT4 (4) - Select instance: wdog2 signal: WDOG2_RESET_B_DEB
    //     ALT5 (5) - Select instance: gpio1 signal: GPIO1_IO06
    //     ALT6 (6) - Select instance: spdif signal: SPDIF_EXT_CLK
    HW_IOMUXC_SW_MUX_CTL_PAD_AUD_MCLK_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_AUD_MCLK_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_AUD_MCLK_MUX_MODE_V(ALT0));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_AUD_MCLK(0x020E02A4)
    //   LVE [22] - Low Voltage Enable Field Reset: DISABLED
    //     DISABLED (0) - High Voltage
    //     ENABLED (1) - Low Voltage
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PD
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: KEEP
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_AUD_MCLK_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_MCLK_LVE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_MCLK_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_MCLK_PUS_V(100K_OHM_PD) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_MCLK_PUE_V(KEEP) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_MCLK_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_MCLK_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_MCLK_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_MCLK_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_MCLK_SRE_V(SLOW));
}
