/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e493d8; name: FUN_02e493d8
 */


long * FUN_02e493d8(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  for (puVar1 = (undefined8 *)*param_1; puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)puVar1[0x400]) {
    if (puVar1[0x402] != 0) goto LAB_02e49930;
  }
  puVar1 = (undefined8 *)FUN_02f59e40(9,0x2018,0x10);
  if (puVar1 == (undefined8 *)0x0) {
    plVar2 = (long *)0x0;
  }
  else {
    puVar1[0x400] = 0;
    *(undefined4 *)(puVar1 + 0x401) = 0;
    *puVar1 = 0;
    puVar1[8] = puVar1;
    puVar1[0x10] = puVar1 + 8;
    puVar1[0x18] = puVar1 + 0x10;
    puVar1[0x20] = puVar1 + 0x18;
    puVar1[0x28] = puVar1 + 0x20;
    puVar1[0x30] = puVar1 + 0x28;
    puVar1[0x38] = puVar1 + 0x30;
    puVar1[0x40] = puVar1 + 0x38;
    puVar1[0x48] = puVar1 + 0x40;
    puVar1[0x50] = puVar1 + 0x48;
    puVar1[0x58] = puVar1 + 0x50;
    puVar1[0x60] = puVar1 + 0x58;
    puVar1[0x68] = puVar1 + 0x60;
    puVar1[0x70] = puVar1 + 0x68;
    puVar1[0x78] = puVar1 + 0x70;
    puVar1[0x80] = puVar1 + 0x78;
    puVar1[0x88] = puVar1 + 0x80;
    puVar1[0x90] = puVar1 + 0x88;
    puVar1[0x98] = puVar1 + 0x90;
    puVar1[0xa0] = puVar1 + 0x98;
    puVar1[0xa8] = puVar1 + 0xa0;
    puVar1[0xb0] = puVar1 + 0xa8;
    puVar1[0xb8] = puVar1 + 0xb0;
    puVar1[0xc0] = puVar1 + 0xb8;
    puVar1[200] = puVar1 + 0xc0;
    puVar1[0xd0] = puVar1 + 200;
    puVar1[0xd8] = puVar1 + 0xd0;
    puVar1[0xe0] = puVar1 + 0xd8;
    puVar1[0xe8] = puVar1 + 0xe0;
    puVar1[0xf0] = puVar1 + 0xe8;
    puVar1[0xf8] = puVar1 + 0xf0;
    puVar1[0x100] = puVar1 + 0xf8;
    puVar1[0x108] = puVar1 + 0x100;
    puVar1[0x110] = puVar1 + 0x108;
    puVar1[0x118] = puVar1 + 0x110;
    puVar1[0x120] = puVar1 + 0x118;
    puVar1[0x128] = puVar1 + 0x120;
    puVar1[0x130] = puVar1 + 0x128;
    puVar1[0x138] = puVar1 + 0x130;
    puVar1[0x140] = puVar1 + 0x138;
    puVar1[0x148] = puVar1 + 0x140;
    puVar1[0x150] = puVar1 + 0x148;
    puVar1[0x158] = puVar1 + 0x150;
    puVar1[0x160] = puVar1 + 0x158;
    puVar1[0x168] = puVar1 + 0x160;
    puVar1[0x170] = puVar1 + 0x168;
    puVar1[0x178] = puVar1 + 0x170;
    puVar1[0x180] = puVar1 + 0x178;
    puVar1[0x188] = puVar1 + 0x180;
    puVar1[400] = puVar1 + 0x188;
    puVar1[0x198] = puVar1 + 400;
    puVar1[0x1a0] = puVar1 + 0x198;
    puVar1[0x1a8] = puVar1 + 0x1a0;
    puVar1[0x1b0] = puVar1 + 0x1a8;
    puVar1[0x1b8] = puVar1 + 0x1b0;
    puVar1[0x1c0] = puVar1 + 0x1b8;
    puVar1[0x1c8] = puVar1 + 0x1c0;
    puVar1[0x1d0] = puVar1 + 0x1c8;
    puVar1[0x1d8] = puVar1 + 0x1d0;
    puVar1[0x1e0] = puVar1 + 0x1d8;
    puVar1[0x1e8] = puVar1 + 0x1e0;
    puVar1[0x1f0] = puVar1 + 0x1e8;
    puVar1[0x1f8] = puVar1 + 0x1f0;
    puVar1[0x200] = puVar1 + 0x1f8;
    puVar1[0x208] = puVar1 + 0x200;
    puVar1[0x210] = puVar1 + 0x208;
    puVar1[0x218] = puVar1 + 0x210;
    puVar1[0x220] = puVar1 + 0x218;
    puVar1[0x228] = puVar1 + 0x220;
    puVar1[0x230] = puVar1 + 0x228;
    puVar1[0x238] = puVar1 + 0x230;
    puVar1[0x240] = puVar1 + 0x238;
    puVar1[0x248] = puVar1 + 0x240;
    puVar1[0x250] = puVar1 + 0x248;
    puVar1[600] = puVar1 + 0x250;
    puVar1[0x260] = puVar1 + 600;
    puVar1[0x268] = puVar1 + 0x260;
    puVar1[0x270] = puVar1 + 0x268;
    puVar1[0x278] = puVar1 + 0x270;
    puVar1[0x280] = puVar1 + 0x278;
    puVar1[0x288] = puVar1 + 0x280;
    puVar1[0x290] = puVar1 + 0x288;
    puVar1[0x298] = puVar1 + 0x290;
    puVar1[0x2a0] = puVar1 + 0x298;
    puVar1[0x2a8] = puVar1 + 0x2a0;
    puVar1[0x2b0] = puVar1 + 0x2a8;
    puVar1[0x2b8] = puVar1 + 0x2b0;
    puVar1[0x2c0] = puVar1 + 0x2b8;
    puVar1[0x2c8] = puVar1 + 0x2c0;
    puVar1[0x2d0] = puVar1 + 0x2c8;
    puVar1[0x2d8] = puVar1 + 0x2d0;
    puVar1[0x2e0] = puVar1 + 0x2d8;
    puVar1[0x2e8] = puVar1 + 0x2e0;
    puVar1[0x2f0] = puVar1 + 0x2e8;
    puVar1[0x2f8] = puVar1 + 0x2f0;
    puVar1[0x300] = puVar1 + 0x2f8;
    puVar1[0x308] = puVar1 + 0x300;
    puVar1[0x310] = puVar1 + 0x308;
    puVar1[0x318] = puVar1 + 0x310;
    puVar1[800] = puVar1 + 0x318;
    puVar1[0x328] = puVar1 + 800;
    puVar1[0x330] = puVar1 + 0x328;
    puVar1[0x338] = puVar1 + 0x330;
    puVar1[0x340] = puVar1 + 0x338;
    puVar1[0x348] = puVar1 + 0x340;
    puVar1[0x350] = puVar1 + 0x348;
    puVar1[0x358] = puVar1 + 0x350;
    puVar1[0x360] = puVar1 + 0x358;
    puVar1[0x368] = puVar1 + 0x360;
    puVar1[0x370] = puVar1 + 0x368;
    puVar1[0x378] = puVar1 + 0x370;
    puVar1[0x380] = puVar1 + 0x378;
    puVar1[0x388] = puVar1 + 0x380;
    puVar1[0x390] = puVar1 + 0x388;
    puVar1[0x398] = puVar1 + 0x390;
    puVar1[0x3a0] = puVar1 + 0x398;
    puVar1[0x3a8] = puVar1 + 0x3a0;
    puVar1[0x3b0] = puVar1 + 0x3a8;
    puVar1[0x3b8] = puVar1 + 0x3b0;
    puVar1[0x3c0] = puVar1 + 0x3b8;
    puVar1[0x3c8] = puVar1 + 0x3c0;
    puVar1[0x3d0] = puVar1 + 0x3c8;
    puVar1[0x3d8] = puVar1 + 0x3d0;
    puVar1[0x3e0] = puVar1 + 0x3d8;
    puVar1[1000] = puVar1 + 0x3e0;
    puVar1[0x3f0] = puVar1 + 1000;
    puVar1[0x3f8] = puVar1 + 0x3f0;
    puVar1[0x402] = puVar1 + 0x3f8;
    *(undefined4 *)(puVar1 + 0x401) = 0x80;
    if (*param_1 == 0) {
      *param_1 = (long)puVar1;
      puVar1[0x400] = 0;
      plVar2 = (long *)puVar1[0x402];
    }
    else {
      puVar1[0x400] = *param_1;
      *param_1 = (long)puVar1;
LAB_02e49930:
      plVar2 = (long *)puVar1[0x402];
    }
    if (plVar2 != (long *)0x0) {
      if (*plVar2 == 0) {
        puVar1[0x402] = 0;
      }
      else {
        puVar1[0x402] = *plVar2;
      }
      *(int *)(puVar1 + 0x401) = *(int *)(puVar1 + 0x401) + -1;
    }
  }
  return plVar2;
}


