/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e447a8; name: FUN_02e447a8
 */


undefined8 * FUN_02e447a8(long *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  
  uVar2 = *(uint *)(param_1 + 1);
  uVar3 = *(uint *)((long)param_1 + 0xc);
  if (uVar3 <= uVar2) {
    iVar1 = uVar3 + (uVar3 >> 1);
    if (uVar3 == 0) {
      iVar1 = 1;
    }
    uVar5 = FUN_02e4488c(param_1,iVar1);
    if ((uVar5 & 1) == 0) {
      return (undefined8 *)0x0;
    }
    uVar3 = *(uint *)((long)param_1 + 0xc);
  }
  if (uVar3 <= uVar2) {
    return (undefined8 *)0x0;
  }
  uVar2 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar2 + 1;
  puVar4 = (undefined8 *)(*param_1 + (ulong)uVar2 * 0x158);
  if (puVar4 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  lVar6 = *param_1 + (ulong)uVar2 * 0x158;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  *puVar4 = 0;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *(undefined4 *)(lVar6 + 0x88) = 0x811c9dc5;
  *(undefined8 *)(lVar6 + 0x8c) = 0;
  *(undefined8 *)(lVar6 + 0x94) = 0;
  *(undefined8 *)(lVar6 + 0x9c) = 0;
  *(undefined8 *)(lVar6 + 0xa4) = 0;
  *(undefined8 *)(lVar6 + 0xb0) = 0xffffffffffffffff;
  *(undefined8 *)(lVar6 + 0xb8) = 0xffffffffffffffff;
  *(undefined8 *)(lVar6 + 0xc0) = 0xffffffffffffffff;
  *(undefined8 *)(lVar6 + 200) = 0xffffffffffffffff;
  *(undefined8 *)(lVar6 + 0xd0) = 0xffffffffffffffff;
  *(undefined8 *)(lVar6 + 0xd8) = 0xffffffffffffffff;
  *(undefined8 *)(lVar6 + 0xe0) = 0xffffffffffffffff;
  *(undefined8 *)(lVar6 + 0xe8) = 0xffffffffffffffff;
  *(undefined8 *)(lVar6 + 0xf0) = 0xffffffffffffffff;
  *(undefined8 *)(lVar6 + 0xf8) = 0xffffffffffffffff;
  *(undefined8 *)(lVar6 + 0x100) = 0xffffffffffffffff;
  *(undefined8 *)(lVar6 + 0x108) = 0xffffffffffffffff;
  *(undefined8 *)(lVar6 + 0x110) = 0xffffffffffffffff;
  *(undefined8 *)(lVar6 + 0x118) = 0xffffffffffffffff;
  *(undefined8 *)(lVar6 + 0x120) = 0xffffffffffffffff;
  *(undefined8 *)(lVar6 + 0x128) = 0xffffffffffffffff;
  return puVar4;
}


