/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02951438; name: FUN_02951438
 */


void FUN_02951438(long param_1,ulong param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  if (*(char *)(param_1 + (param_2 & 0xff) * 0x1c + 0x30c) != '\0') {
    return;
  }
  lVar5 = param_1 + (param_2 & 0xff) * 0x1c;
  uVar2 = (uint)*(byte *)(lVar5 + 0x2f8) - (param_3 & 0xff);
  uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  *(char *)(lVar5 + 0x2f8) = (char)uVar2;
  lVar7 = *(long *)(param_1 + 0x60);
  uVar3 = FUN_02c6b1c0(*(undefined8 *)(lVar7 + 0x98),param_2 & 0xffffffff);
  lVar5 = (&DAT_0428af30)[(uVar3 & 0xffffffff) * 6];
  if (lVar5 == 0) {
    plVar6 = &DAT_0428af30;
  }
  else {
    plVar6 = &DAT_0428af30;
    if (*(char *)(lVar5 + 0x1e1) != '\0') {
      plVar6 = &DAT_0428af30 + (uVar3 & 0xffffffff) * 6;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar6 + 0x250) + (ulong)**(uint **)(*plVar6 + 0x250));
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x13) ||
     (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[9], uVar3 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = (uint)*(byte *)((long)piVar1 + uVar3);
  }
  if ((uVar2 & 0xff) <= uVar4) {
    uVar4 = uVar2;
  }
  FUN_02c7cd1c(*(undefined8 *)(lVar7 + 0x98),param_2 & 0xffffffff,uVar4);
  return;
}


