/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0014ee60; name: FUN_0014ee60
 */


void * FUN_0014ee60(long param_1,long param_2)

{
  void *__s;
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar3 = 0;
  if ((param_1 + 0x10U & 0xf) != 0) {
    uVar3 = (ulong)(uint)-(int)(param_1 + 0x10U) & 0xf;
  }
  lVar1 = param_1 + uVar3;
  __s = (void *)(lVar1 + 0x10);
  memset(__s,0,0x3b0);
  *(undefined4 *)(lVar1 + 900) = 0;
  *(long *)(lVar1 + 0x28) = param_1;
  *(long *)(lVar1 + 0x388) = param_1;
  *(long *)(lVar1 + 0x370) = param_2;
  *(long *)(lVar1 + 0x368) = param_2;
  *(long *)(lVar1 + 0x390) = param_2;
  *(undefined8 *)(lVar1 + 8) = 0x3b3;
  uVar4 = DAT_0438e190;
  *(undefined8 *)(lVar1 + 0x48) = 0xfff;
  *(undefined8 *)(lVar1 + 0x50) = uVar4;
  *(uint *)(lVar1 + 0x380) = DAT_0438e1b8 | 4;
  *(long *)(lVar1 + 0x68) = lVar1 + 0x58;
  *(long *)(lVar1 + 0x70) = lVar1 + 0x58;
  *(long *)(lVar1 + 0x78) = lVar1 + 0x68;
  *(long *)(lVar1 + 0x80) = lVar1 + 0x68;
  *(long *)(lVar1 + 0x88) = lVar1 + 0x78;
  *(long *)(lVar1 + 0x90) = lVar1 + 0x78;
  *(long *)(lVar1 + 0x220) = lVar1 + 0x208;
  *(long *)(lVar1 + 0x218) = lVar1 + 0x208;
  *(long *)(lVar1 + 0x240) = lVar1 + 0x228;
  *(long *)(lVar1 + 0x238) = lVar1 + 0x228;
  *(long *)(lVar1 + 0x260) = lVar1 + 0x248;
  *(long *)(lVar1 + 600) = lVar1 + 0x248;
  *(undefined8 *)(lVar1 + 0x3b0) = 0;
  *(undefined8 *)(lVar1 + 0x3a8) = 0;
  *(long *)(lVar1 + 0x98) = lVar1 + 0x88;
  *(long *)(lVar1 + 0xa0) = lVar1 + 0x88;
  *(long *)(lVar1 + 0xa8) = lVar1 + 0x98;
  *(long *)(lVar1 + 0xb0) = lVar1 + 0x98;
  *(long *)(lVar1 + 0xb8) = lVar1 + 0xa8;
  *(long *)(lVar1 + 0xc0) = lVar1 + 0xa8;
  *(long *)(lVar1 + 200) = lVar1 + 0xb8;
  *(long *)(lVar1 + 0xd0) = lVar1 + 0xb8;
  *(long *)(lVar1 + 0xd8) = lVar1 + 200;
  *(long *)(lVar1 + 0xe0) = lVar1 + 200;
  *(long *)(lVar1 + 0xe8) = lVar1 + 0xd8;
  *(long *)(lVar1 + 0xf0) = lVar1 + 0xd8;
  *(long *)(lVar1 + 0xf8) = lVar1 + 0xe8;
  *(long *)(lVar1 + 0x100) = lVar1 + 0xe8;
  *(long *)(lVar1 + 0x108) = lVar1 + 0xf8;
  *(long *)(lVar1 + 0x110) = lVar1 + 0xf8;
  *(long *)(lVar1 + 0x118) = lVar1 + 0x108;
  *(long *)(lVar1 + 0x120) = lVar1 + 0x108;
  *(long *)(lVar1 + 0x128) = lVar1 + 0x118;
  *(long *)(lVar1 + 0x130) = lVar1 + 0x118;
  *(long *)(lVar1 + 0x138) = lVar1 + 0x128;
  *(long *)(lVar1 + 0x140) = lVar1 + 0x128;
  *(long *)(lVar1 + 0x148) = lVar1 + 0x138;
  *(long *)(lVar1 + 0x150) = lVar1 + 0x138;
  *(long *)(lVar1 + 0x158) = lVar1 + 0x148;
  *(long *)(lVar1 + 0x160) = lVar1 + 0x148;
  *(long *)(lVar1 + 0x168) = lVar1 + 0x158;
  *(long *)(lVar1 + 0x170) = lVar1 + 0x158;
  *(long *)(lVar1 + 0x178) = lVar1 + 0x168;
  *(long *)(lVar1 + 0x180) = lVar1 + 0x168;
  *(long *)(lVar1 + 0x188) = lVar1 + 0x178;
  *(long *)(lVar1 + 400) = lVar1 + 0x178;
  *(long *)(lVar1 + 0x198) = lVar1 + 0x188;
  *(long *)(lVar1 + 0x1a0) = lVar1 + 0x188;
  *(long *)(lVar1 + 0x1a8) = lVar1 + 0x198;
  *(long *)(lVar1 + 0x1b0) = lVar1 + 0x198;
  *(long *)(lVar1 + 0x1b8) = lVar1 + 0x1a8;
  *(long *)(lVar1 + 0x1c0) = lVar1 + 0x1a8;
  *(long *)(lVar1 + 0x1c8) = lVar1 + 0x1b8;
  *(long *)(lVar1 + 0x1d0) = lVar1 + 0x1b8;
  *(long *)(lVar1 + 0x1d8) = lVar1 + 0x1c8;
  *(long *)(lVar1 + 0x1e0) = lVar1 + 0x1c8;
  *(long *)(lVar1 + 0x1e8) = lVar1 + 0x1d8;
  *(long *)(lVar1 + 0x1f0) = lVar1 + 0x1d8;
  *(long *)(lVar1 + 0x1f8) = lVar1 + 0x1e8;
  *(long *)(lVar1 + 0x200) = lVar1 + 0x1e8;
  *(long *)(lVar1 + 0x210) = lVar1 + 0x1f8;
  *(long *)(lVar1 + 0x208) = lVar1 + 0x1f8;
  *(long *)(lVar1 + 0x230) = lVar1 + 0x218;
  *(long *)(lVar1 + 0x228) = lVar1 + 0x218;
  *(long *)(lVar1 + 0x250) = lVar1 + 0x238;
  *(long *)(lVar1 + 0x248) = lVar1 + 0x238;
  lVar2 = lVar1 + (*(ulong *)(lVar1 + 8) & 0xfffffffffffffff8);
  uVar3 = 0;
  if ((lVar2 + 0x10U & 0xf) != 0) {
    uVar3 = (ulong)(uint)-(int)(lVar2 + 0x10U) & 0xf;
  }
  uVar5 = (((param_1 + param_2) - lVar2) + -0x50) - uVar3;
  *(ulong *)(lVar1 + 0x20) = uVar5;
  *(ulong *)(lVar1 + 0x38) = lVar2 + uVar3;
  *(ulong *)(lVar2 + uVar3 + 8) = uVar5 | 1;
  *(undefined8 *)(param_1 + param_2 + -0x48) = 0x50;
  *(undefined8 *)(lVar1 + 0x40) = DAT_0438e1b0;
  FUN_0014c360(__s,*(undefined8 *)(lVar1 + 0x38));
  return __s;
}


